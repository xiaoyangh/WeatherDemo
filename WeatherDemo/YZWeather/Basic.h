//
//  Basic.h
//  YZWeather
//
//  Created by Mr Yang on 16/8/12.
//  Copyright © 2016 Yang. All rights reserved Email:xiaoyangh@foxmail.
//  城市基本信息

#import <Foundation/Foundation.h>
#import "Update.h"

@interface Basic : NSObject
/**
 *  城市名称
 */
@property (nonatomic ,strong ) NSString *city;
/**
 *  数据更新时间,24小时制
 */
@property (nonatomic ,strong ) Update *update;

@end
