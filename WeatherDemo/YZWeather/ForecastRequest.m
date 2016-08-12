//
//  ForecastRequest.m
//  YZWeather
//
//  Created by Mr Yang on 16/8/12.
//  Copyright © 2016 Yang. All rights reserved Email:xiaoyangh@foxmail.
//

#import "ForecastRequest.h"
#import "MJExtension.h"
#import "WeatherDataCacheTool.h"



@interface ForecastRequest()
@end

@implementation ForecastRequest

+ (void)requestWithCityname:(NSString *)cityname success:(void (^)(WeatherData *weatherData))success failure:(void (^)(NSError *error))failure
{
    
//    [WeatherDataCacheTool addWeatherData:nil withCityName:cityname];
    
    // 设置请求体
    NSMutableDictionary *param = [[NSMutableDictionary alloc] init];
    param[@"q"] = cityname;
    param[@"appid"] = @"4049953a682bf033d149d0981e2dd4d9";
    param[@"cnt"] = @"6";
    
    [YzHttpTool getWithURL:@"http://api.openweathermap.org/data/2.5/forecast/daily" params:param success:^(id responseObject)
     {
         
         NSMutableDictionary *tempDic =[NSMutableDictionary dictionary];
         NSDictionary *cityDic =@{@"pm25": @"pm25",@"qlty":@"空气质量类别",@"aqi":@"空气质量指数"};
         NSDictionary *apiDic =@{@"city": cityDic};
         [tempDic setObject:apiDic forKey:@"aqi"];
         
          NSDictionary *weatherFist=[responseObject[@"list"] firstObject];
         
         NSString *timeSS =[self convertTimeFromTimeStamp:[weatherFist[@"dt"] longLongValue]];
         
         NSDictionary *bascDic =@{@"city": responseObject[@"city"][@"name"],
                                  @"update":@{@"loc":timeSS,
                                              @"utc":timeSS}};
         [tempDic setObject:bascDic forKey:@"basic"];
         
         {
         NSMutableDictionary *nowF =[NSMutableDictionary dictionary];
    
         
         NSString *dayText =[NSString stringWithFormat:@"Day temperature:%@",weatherFist[@"temp"][@"day"]];
         
         NSString *nigteText =[NSString stringWithFormat:@"Evening temperature:%@",weatherFist[@"temp"][@"eve"]];
         
         NSString *desText =[NSString stringWithFormat:@"%@",[weatherFist[@"weather"] firstObject][@"description"]];
             
             dayText=desText;nigteText=desText;
         
         NSDictionary *condDic =@{@"txt_d": dayText,@"nigteText":nigteText,@"txt":desText};
         [nowF setObject:condDic forKey:@"cond"];
         
             NSString *dir =@"speed";
             NSString *sc =weatherFist[@"speed"];
             NSDictionary *windDic=@{@"dir'": dir,@"sc":sc};
             [nowF setObject:windDic forKey:@"wind"];
             
             NSString *date=timeSS;
             [nowF setObject:date forKey:@"date"];
             [nowF setObject:weatherFist[@"humidity"] forKey:@"hum"];
             [nowF setObject:weatherFist[@"humidity"] forKey:@"fl"];
             [nowF setObject:[self kTempToCTemp:weatherFist[@"temp"][@"day"]] forKey:@"tmp"];
             
             [tempDic setObject:nowF forKey:@"now"];
             
//             hourly_forecast
//             DailyForecast daily_forecast
             NSMutableArray *daily_forecast=[NSMutableArray arrayWithCapacity:7];
             NSMutableArray *hourly_forecast =[NSMutableArray arrayWithCapacity:7];
             
             for (NSDictionary *wedDic in responseObject[@"list"] )
             {
                 NSMutableDictionary *everDic =[NSMutableDictionary dictionary];
                 
                 NSString *sunUp =@"";
                 NSString *sunDow =@"";
                 NSString *timeSSMM =[self convertTimeFromTimeStamp:[wedDic[@"dt"] longLongValue]];
                 
                 NSDictionary *Astro =@{@"sr": sunUp,@"ss":sunDow};
                 [everDic setObject:Astro forKey:@"astro"];
                 
                 
                 NSString *dayText =[NSString stringWithFormat:@"Day temperature:%@",wedDic[@"temp"][@"day"]];
                 
                 NSString *nigteText =[NSString stringWithFormat:@"Evening temperature:%@",wedDic[@"temp"][@"eve"]];
                 
                 NSString *desText =[NSString stringWithFormat:@"%@",[wedDic[@"weather"] firstObject][@"description"]];
                  dayText=desText;nigteText=desText;
                 
                 
                 NSDictionary *condDic =@{@"txt_d": dayText,@"txt_n":nigteText,@"txt":desText};
                 [everDic setObject:condDic forKey:@"cond"];
                 
                 NSString *dir =@"speed";
                 NSString *sc =wedDic[@"speed"];
                 NSDictionary *windDic=@{@"dir": dir,@"sc":sc};
                 [everDic setObject:windDic forKey:@"wind"];
                 
                 
                 NSString *max =[self kTempToCTemp:wedDic[@"temp"][@"max"]];
                 NSString *min =[self kTempToCTemp:wedDic[@"temp"][@"min"]];;
                 NSDictionary *tempPPPDic=@{@"max": max,@"min":min};
                 [everDic setObject:tempPPPDic forKey:@"tmp"];
                 
                 NSString *date=timeSSMM;
                 [everDic setObject:date forKey:@"date"];
                 [everDic setObject:wedDic[@"humidity"] forKey:@"hum"];
                 
                 [everDic setObject:wedDic[@"humidity"] forKey:@"fl"];
//                 [everDic setObject:wedDic[@"temp"][@"day"] forKey:@"tmp"];
                 
                 [daily_forecast addObject:everDic];
                 [hourly_forecast addObject:everDic];
                 
                 
                 
             }
             
              [tempDic setObject:daily_forecast forKey:@"daily_forecast"];
              [tempDic setObject:hourly_forecast forKey:@"hourly_forecast"];
             
         }
         
         
         
         
        //自定义转换
        NSArray *weatherArray = [WeatherData mj_objectArrayWithKeyValuesArray:@[tempDic]];
         
         
        
        WeatherData *weatherData = [weatherArray lastObject];
        
        NSArray *cityArray = [WeatherDataCacheTool loadAllCitys];
        if ([cityArray indexOfObject:cityname] != NSNotFound)
        {
            [WeatherDataCacheTool updateWeatherData:weatherData withCityNmae:cityname];
        }else
        {
            [WeatherDataCacheTool addWeatherData:weatherData withCityName:cityname];
        }
        
        if (success) {
            success(weatherData);
        }

    } falure:^(NSError *error) {
        
    }];
}

+(NSString*) convertTimeFromTimeStamp:(long long)ts
{
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init] ;
    [formatter setDateFormat:@"yyyy-MM-dd"];
    NSTimeInterval times =(long long)ts;
    NSDate* curdate=[NSDate dateWithTimeIntervalSince1970:times];
    
    NSString *destDateString = [formatter stringFromDate:curdate];
    
    return destDateString;
}

+(NSString*)kTempToCTemp:(NSNumber*)ber
{
    CGFloat ff =[ber floatValue]-273.16;
    NSString *cTemp =[NSString stringWithFormat:@"%.2f",ff];
    return cTemp;
}


//+ (void)requestWithCityname:(NSString *)cityname success:(void (^)(WeatherData *weatherData))success failure:(void (^)(NSError *error))failure
//{
//    
//    //    [WeatherDataCacheTool addWeatherData:nil withCityName:cityname];
//    
//    // 设置请求体
//    NSMutableDictionary *param = [[NSMutableDictionary alloc] init];
//    param[@"city"] = cityname;
//    param[@"key"] = @"1592213ace62408d9ec37752772ccd96";
//    
//    [YzHttpTool getWithURL:@"https://api.heweather.com/x3/weather" params:param success:^(id responseObject) {
//        NSArray *weatherArray = [WeatherData mj_objectArrayWithKeyValuesArray:responseObject[@"HeWeather data service 3.0"]];
//        WeatherData *weatherData = [weatherArray lastObject];
//        
//        NSArray *cityArray = [WeatherDataCacheTool loadAllCitys];
//        if ([cityArray indexOfObject:cityname] != NSNotFound) {
//            [WeatherDataCacheTool updateWeatherData:weatherData withCityNmae:cityname];
//        }else{
//            [WeatherDataCacheTool addWeatherData:weatherData withCityName:cityname];
//        }
//        
//        if (success) {
//            success(weatherData);
//        }
//        
//    } falure:^(NSError *error) {
//        
//    }];
//}

+ (void)homeWeatherDatasSuccess:(void (^)(NSMutableArray *weatherDatas))success failure:(void (^)(NSError *error))failure
{
    
        NSMutableArray *weatherDatas = [WeatherDataCacheTool loadAllWeatherDatas];
    if (weatherDatas.count) {
        if (success) {
            success(weatherDatas);
        }
    }else
    {
        [self requestWithCityname:@"vancouver" success:^(WeatherData *weatherData) {
            if (success) {
                success([WeatherDataCacheTool loadAllWeatherDatas]);
            }
        } failure:^(NSError *error) {
            
        }];
    }    
}

+ (void)deleteWithCityname:(NSString *)cityname
{
    [WeatherDataCacheTool deleteWeatherDataWithCityName:cityname];
}

@end
