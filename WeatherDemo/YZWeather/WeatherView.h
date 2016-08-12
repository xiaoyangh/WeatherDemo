//
//  WeatherView.h
//  YZWeather
//
//  Created by 杨舟 on 15/11/21.
//  Copyright © 2016 Yang. All rights reserved Email:xiaoyangh@foxmail.
//

#import <UIKit/UIKit.h>

@interface WeatherView : UIScrollView

- (instancetype)initWithDailyForecasts:(NSArray *)dailyForecasts;

@end
