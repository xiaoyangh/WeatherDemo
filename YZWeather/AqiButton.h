//
//  AqiButton.h
//  YZWeather
//
//  Created by 杨舟 on 15/11/11.
//  Copyright © 2016 Yang. All rights reserved Email:xiaoyangh@foxmail.
//  空气质量指数
#define aqiFont [UIFont systemFontOfSize:12]

#import <UIKit/UIKit.h>
#import "Aqi.h"

@interface AqiButton : UIButton
/**
 *  空气质量指数模型
 */
@property (nonatomic ,strong ) Aqi *aqi;

@end
