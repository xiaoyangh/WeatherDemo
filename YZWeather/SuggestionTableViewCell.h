//
//  SuggestionTableViewCell.h
//  YZWeather
//
//  Created by 杨舟 on 15/11/18.
//  Copyright © 2016 Yang. All rights reserved Email:xiaoyangh@foxmail.
//

#import <UIKit/UIKit.h>
#import "SuggestionFrame.h"

@interface SuggestionTableViewCell : UITableViewCell

@property (nonatomic ,strong ) SuggestionFrame *suggestionFrame;

+ (instancetype)cellWithTableView:(UITableView *)tableView;

@end
