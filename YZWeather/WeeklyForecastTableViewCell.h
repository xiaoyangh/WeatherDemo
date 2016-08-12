//
//  WeeklyForecastTableViewCell.h
//  YZWeather
//
//  Created by 杨舟 on 15/11/17.
//  Copyright © 2016 Yang. All rights reserved Email:xiaoyangh@foxmail.
//

#import <UIKit/UIKit.h>
#import "WeeklyForecastFrame.h"

typedef void (^ dayClick) (NSInteger day);

@interface WeeklyForecastTableViewCell : UITableViewCell

@property (nonatomic ,copy ) dayClick dayClick;

@property (nonatomic ,strong ) WeeklyForecastFrame *weeklyForecastFrame;

+ (instancetype)cellWithTableView:(UITableView *)tableView;

@end
