//
//  Update.h
//  YZWeather
//
//  Created by Mr Yang on 16/8/12.
//  Copyright © 2016 Yang. All rights reserved Email:xiaoyangh@foxmail.
//  数据更新时间,24小时制

#import <Foundation/Foundation.h>

@interface Update : NSObject
/**
 *  数据更新的当地时间
 */
@property (nonatomic ,copy ) NSString *loc;
/**
 *  数据更新的UTC时间
 */
@property (nonatomic ,copy ) NSString *utc;

@end
