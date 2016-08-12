//
//  Wind.h
//  YZWeather
//
//  Created by Mr Yang on 16/8/12.
//  Copyright © 2016 Yang. All rights reserved Email:xiaoyangh@foxmail.
//  风力状况

#import <Foundation/Foundation.h>

@interface Wind : NSObject
/**
 *  风向(方向)
 */
@property (nonatomic ,copy ) NSString *dir;
/**
 *  风力等级
 */
@property (nonatomic ,copy ) NSString *sc;

@end
