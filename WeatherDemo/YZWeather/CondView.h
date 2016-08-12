//
//  CondView.h
//  YZWeather
//
//  Created by 杨舟 on 15/11/21.
//  Copyright © 2016 Yang. All rights reserved Email:xiaoyangh@foxmail.
//

#import <UIKit/UIKit.h>

typedef enum {day,night} timeOfDay;

@interface CondView : UIView

- (instancetype)initWithStyle:(timeOfDay)timeOfDay withCond:(NSString *)cond withTmp:(NSString *)tmp;

@end
