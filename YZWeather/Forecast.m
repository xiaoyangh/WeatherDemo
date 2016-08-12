//
//  Forecast.m
//  YZWeather
//
//  Created by Mr Yang on 16/8/12.
//  Copyright © 2016 Yang. All rights reserved Email:xiaoyangh@foxmail.
//

#import "Forecast.h"
#import "MJExtension.h"

@implementation Forecast

- (NSString *)fl
{
    NSRange range = [_fl rangeOfString:@"°"];
    if (range.location == NSNotFound) {
        return [NSString stringWithFormat:@"%@°",_fl];
    }else{
        return _fl;
    }
}

- (NSString *)hum
{
    NSRange range = [_hum rangeOfString:@"%"];
    if (range.location == NSNotFound) {
        return [NSString stringWithFormat:@"%@%%",_hum];
    }else{
        return _hum;
    }
}

//-(NSString*)tmp
//{
//    if ([_tmp intValue]>150)
//    {
//        return [NSString stringWithFormat:@"%f",[_tmp intValue]-273.16 ];
//    }else
//    {
//        return @"0";
//    }
//}

MJCodingImplementation

@end
