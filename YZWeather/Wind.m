//
//  Wind.m
//  YZWeather
//
//  Created by Mr Yang on 16/8/12.
//  Copyright © 2016 Yang. All rights reserved Email:xiaoyangh@foxmail.
//  风力状况

#import "Wind.h"
#import "MJExtension.h"

@implementation Wind

- (NSString *)sc
{
    NSRange range = [_sc rangeOfString:@"级"];
    if (range.location == NSNotFound) {
    if ([_sc isEqualToString:@"微风"]) {
        return _sc;
    }
    return [NSString stringWithFormat:@"%@",_sc];
    }else
    {
        return [_sc stringByReplacingOccurrencesOfString:@"级" withString:@""];
    }
}

MJCodingImplementation

@end
