//
//  Suggestion.h
//  YZWeather
//
//  Created by Mr Yang on 16/8/12.
//  Copyright © 2016 Yang. All rights reserved Email:xiaoyangh@foxmail.
//  生活指数

#import <Foundation/Foundation.h>
#import "Drsg.h"
#import "Cw.h"
#import "Uv.h"  
#import "Sport.h"
#import "Flu.h"
#import "Trav.h"    
#import "Comf.h"

@interface Suggestion : NSObject
/**
 *  穿衣指数
 */
@property (nonatomic ,strong ) Drsg *drsg;
/**
 *  洗车指数
 */
@property (nonatomic ,strong ) Cw *cw;
/**
 *  紫外线指数
 */
@property (nonatomic ,strong ) Uv *uv;
/**
 *  运动指数
 */
@property (nonatomic ,strong ) Sport *sport;
/**
 *  感冒指数
 */
@property (nonatomic ,strong ) Flu *flu;
/**
 *  旅游指数
 */
@property (nonatomic ,strong ) Trav *trav;
/**
 *  舒适指数
 */
@property (nonatomic ,strong ) Comf *comf;

@end
