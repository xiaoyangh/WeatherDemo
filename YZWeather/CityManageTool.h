//
//  CityManageTool.h
//  YZWeather
//
//  Created by 杨舟 on 15/11/25.
//  Copyright © 2016 Yang. All rights reserved Email:xiaoyangh@foxmail.
//

#import <Foundation/Foundation.h>
#import "UIImage+YZ.h"
#import "NSDate+MJ.h"
#import "Cond.h"

@interface CityManageTool : NSObject

+ (UIImage *)condImageWith:(Cond *)cond;

@end
