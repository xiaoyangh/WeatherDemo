//
//  DailyForecastFrame.h
//  YZWeather
//
//  Created by 杨舟 on 15/11/17.
//  Copyright © 2016 Yang. All rights reserved Email:xiaoyangh@foxmail.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DailyForecast.h"

@interface DailyForecastFrame : NSObject

@property (nonatomic ,strong ) NSArray *daily_forecast;

@property (nonatomic ,strong ) NSArray *cellFrameArray;

@property (nonatomic ,assign ) CGRect dailyForecastViewFrame;

@property (nonatomic ,assign ) CGFloat cellHeight;
@end
