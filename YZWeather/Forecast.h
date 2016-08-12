//
//  Forecast.h
//  YZWeather
//
//  Created by Mr Yang on 16/8/12.
//  Copyright © 2016 Yang. All rights reserved Email:xiaoyangh@foxmail.
//  天气预报

#import <Foundation/Foundation.h>
#import "Astro.h"
#import "Cond.h"
#import "Wind.h"
#import "Tmp.h"

@interface Forecast : NSObject
/**
 *  天气状况
 */
@property (nonatomic ,strong ) Cond *cond;
/**
 *  风力状况
 */
@property (nonatomic ,strong ) Wind *wind;
/**
 *  当地日期
 */
@property (nonatomic ,copy ) NSString *date;
/**
 *  湿度(%)
 */
@property (nonatomic ,copy ) NSString *hum;
/**
 *  体感温度
 */
@property (nonatomic ,copy ) NSString *fl;
/**
 *  当前温度(摄氏度)
 */
@property (nonatomic ,copy ) NSString *tmp;
@end
