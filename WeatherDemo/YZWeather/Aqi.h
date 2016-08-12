//
//  Aqi.h
//  YZWeather
//
//  Created by Mr Yang on 16/8/12.
//  Copyright © 2016 Yang. All rights reserved Email:xiaoyangh@foxmail.
//  空气质量指数

#import <Foundation/Foundation.h>
#import "City.h"

@interface Aqi : NSObject
/**
 *  城市数据
 */
@property (nonatomic ,strong ) City *city;

@end
