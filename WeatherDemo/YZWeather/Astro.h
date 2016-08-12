//
//  Astro.h
//  YZWeather
//
//  Created by Mr Yang on 16/8/12.
//  Copyright © 2016 Yang. All rights reserved Email:xiaoyangh@foxmail.
//  天文数值

#import <Foundation/Foundation.h>

@interface Astro : NSObject
/**
 *  日出时间
 */
@property (nonatomic ,copy ) NSString *sr;
/**
 *  日落时间
 */
@property (nonatomic ,copy ) NSString *ss;

@end
