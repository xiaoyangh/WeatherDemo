//
//  DailyForecastViewController.h
//  YZWeather
//
//  Created by 杨舟 on 15/11/21.
//  Copyright © 2016 Yang. All rights reserved Email:xiaoyangh@foxmail.
//

#import <UIKit/UIKit.h>

@interface DailyForecastViewController : UIViewController

@property (nonatomic ,strong ) NSArray *dailyForecastsArray;

@property (nonatomic ,strong ) UIImage *backGroundImage;

@property (nonatomic ,copy ) NSString *cityname;

@property (nonatomic ,assign ) NSInteger defaultDay;

@end
