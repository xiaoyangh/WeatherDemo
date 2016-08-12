//
//  SuggestionView.h
//  YZWeather
//
//  Created by 杨舟 on 15/11/18.
//  Copyright © 2016 Yang. All rights reserved Email:xiaoyangh@foxmail.
//

#import <UIKit/UIKit.h>
#import "ViewFrame.h"

@interface SuggestionView : UIView

@property (nonatomic ,copy ) ViewFrame *viewFrame;

@property (nonatomic ,copy ) NSString *text;

@property (nonatomic ,strong ) UIImage *image;

@end
