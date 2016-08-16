//
//  UIImage+MXCategory.h
//  MXInteraciton
//
//  Created by maRk on 16/8/15.
//  Copyright © 2016年 maRk. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (MXCategory)
/**
 *  @brief  根据颜色生成图片默认图片大小为(1,1)
 *
 *  @param color  颜色
 *
 *  @return 图片
 */
+ (UIImage *)MX_CreateImageFromColor:(UIColor *)color;

/**
 *  @brief  根据颜色生产图片
 *
 *  @param color 颜色
 *  @param size  图片大小
 *
 *  @return 图片
 */
+ (UIImage *)MX_CreateImageFromColor:(UIColor *)color size:(CGSize)size;

/**
 *  图片旋转
 *
 *  @param image      待旋转的图片
 *  @param orientatio 旋转方式
 *
 *  @return 旋转后图片
 */
+ (UIImage *)MX_Image:(UIImage *)image rotation:(UIImageOrientation)orientatio;
@end