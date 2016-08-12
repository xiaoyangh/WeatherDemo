//
//  view.h
//  YZWeather
//
//  Created by 杨舟 on 15/12/3.
//  Copyright © 2016 Yang. All rights reserved Email:xiaoyangh@foxmail.
//

#import <UIKit/UIKit.h>

@interface view : UIView

@property (nonatomic ,copy ) NSString *goods;

+ (instancetype)viewWithGoods:(NSString *)goods;

- (instancetype)initWithGoods:(NSString *)goods;

@end
