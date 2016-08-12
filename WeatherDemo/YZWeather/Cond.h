//
//  Cond.h
//  YZWeather
//
//  Created by Mr Yang on 16/8/12.
//  Copyright © 2016 Yang. All rights reserved Email:xiaoyangh@foxmail.
//  天气状况

#import <Foundation/Foundation.h>

@interface Cond : NSObject
/**
 *  白天天气描述
 */
@property (nonatomic ,copy ) NSString *txt_d;
/**
 *  夜间天气描述
 */
@property (nonatomic ,copy ) NSString *txt_n;
/**
 *  天气描述（实况）
 */
@property (nonatomic ,copy ) NSString *txt;


@end
