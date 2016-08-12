//
//  TitleView.h
//  YZWeather
//
//  Created by 杨舟 on 15/10/9.
//  Copyright © 2016 Yang. All rights reserved Email:xiaoyangh@foxmail.
//

#import <UIKit/UIKit.h>

typedef enum {loc,nor} titleSytle;

@interface TitleView : UIView

/**
 *  城市名称
 */
@property (nonatomic ,copy ) NSString *cityname;

-(instancetype)initWithStyle:(titleSytle)titleStyle;

@property (nonatomic ,assign ,readonly) CGSize selfSize;

@end
