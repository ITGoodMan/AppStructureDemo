//
//  DefineTheme.h
//  3D
//
//  Created by xiaokang on 2018/5/16.
//  Copyright © 2018年 ZC. All rights reserved.
//

#ifndef DefineTheme_h
#define DefineTheme_h

//自定义颜色
#define COLORA(R,G,B,A) [UIColor colorWithRed:(R)/255.0 green:(G)/255.0 blue:(B)/255.0 alpha:A]
#define COLOR(R,G,B) COLORA(R,G,B,1.0)
//RGB转UIColor（带alpha值）
#define UIColorFromRGBWithAlpha(rgbValue,a) [UIColor  colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0  green:((float)((rgbValue & 0xFF00) >> 8))/255.0  blue:((float)(rgbValue & 0xFF))/255.0 alpha:a]
//RGB转UIColor（不带alpha值）
#define UIColorFromRGB(rgbValue) UIColorFromRGBWithAlpha(rgbValue,1.0)

//  主题颜色
#define MAIN_GROUNDCOLOR UIColorFromRGB(0x2ab1e7)//主题色
#define BACK_GROUNDCOLOR UIColorFromRGB(0xF7F7F7)//背景色
#define TITLE_COLOR [UIColor blackColor]//标题色
#define TEXT_COLOR [UIColor grayColor]//正文色
#define TIPTEXT_COLOR UIColorFromRGB(0x888888)//提示语色
#define CLEAR_COLOR [UIColor clearColor]//透明色
#define WHITE_COLOR [UIColor whiteColor]//白色


#endif /* DefineTheme_h */
