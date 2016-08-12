//
//  UpdateTimeTableViewCell.h
//  YZWeather
//
//  Created by 杨舟 on 15/11/17.
//  Copyright © 2016 Yang. All rights reserved Email:xiaoyangh@foxmail.
//

#import <UIKit/UIKit.h>
#import "NowFrame.h"

@interface NowTableViewCell : UITableViewCell
/**
 *  更新时间模型
 */
@property (nonatomic ,strong ) NowFrame *nowFrame;

+ (instancetype)cellWithTableView:(UITableView *)tableView;

@end
