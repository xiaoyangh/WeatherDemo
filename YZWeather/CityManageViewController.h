//
//  CityManageViewController.h
//  YZWeather
//
//  Created by 杨舟 on 15/11/23.
//  Copyright © 2016 Yang. All rights reserved Email:xiaoyangh@foxmail.
//

#import <UIKit/UIKit.h>

typedef void(^pop)(NSString *cityname);

@interface CityManageViewController : UIViewController

@property (nonatomic ,copy ) pop pop;

@property (nonatomic ,copy ) void (^dismissWithBtn)(UIButton *);

@end
