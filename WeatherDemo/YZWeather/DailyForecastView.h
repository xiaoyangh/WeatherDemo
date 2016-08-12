//
//  DailyForecastView.h
//  YZWeather
//
//  Created by 杨舟 on 15/11/12.
//  Copyright © 2016 Yang. All rights reserved Email:xiaoyangh@foxmail.
//

#import <UIKit/UIKit.h>
#import "DailyForecastFrame.h"

@class DailyForecast;

typedef void(^CellClick)(NSInteger day);

@interface DailyForecastView : UIScrollView
/**
 *  每日天气预报模型数组
 */
@property (nonatomic ,strong ) DailyForecastFrame *dailyForecastFrame;
/**
 *  view的高度
 */
@property (nonatomic ,assign ) CGFloat viewHeight;

@property (nonatomic ,copy ) CellClick dailyCellClick;

@end
