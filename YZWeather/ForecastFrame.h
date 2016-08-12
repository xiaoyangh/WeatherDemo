//
//  ForecastFrame.h
//  YZWeather
//
//  Created by 杨舟 on 15/11/17.
//  Copyright © 2016 Yang. All rights reserved Email:xiaoyangh@foxmail.
//

#import <Foundation/Foundation.h>
#import "WeatherData.h"
#import "NowFrame.h"
#import "DailyForecastFrame.h"
#import "WeeklyForecastFrame.h"
#import "SuggestionFrame.h"

@interface ForecastFrame : NSObject

@property (nonatomic ,strong ) WeatherData *weatherData;

@property (nonatomic ,strong ) NowFrame *nowFrame;

@property (nonatomic ,strong ) DailyForecastFrame *dailyForecastFrame;

@property (nonatomic ,strong ) WeeklyForecastFrame *weeklyForecastFrame;

@property (nonatomic ,strong ) SuggestionFrame *suggestionFrame;

@end
