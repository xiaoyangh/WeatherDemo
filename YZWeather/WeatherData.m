//
//  WeatherData.m
//  YZWeather
//
//  Created by Mr Yang on 16/8/12.
//  Copyright © 2016 Yang. All rights reserved Email:xiaoyangh@foxmail.
//

#import "WeatherData.h"
#import "MJExtension.h"

@implementation WeatherData

+ (NSDictionary *)objectClassInArray
{
    return @{@"daily_forecast" : [DailyForecast class],@"hourly_forecast" : [Forecast class]};
}

MJCodingImplementation

@end
