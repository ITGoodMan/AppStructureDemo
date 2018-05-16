//
//  DefineMacro.h
//  3D
//
//  Created by xiaokang on 2018/5/16.
//  Copyright © 2018年 ZC. All rights reserved.
//

#ifndef DefineMacro_h
#define DefineMacro_h

//屏幕尺寸
#define kScreenWidth  [UIScreen mainScreen].bounds.size.width
#define kScreenHeight [UIScreen mainScreen].bounds.size.height
//通知中心
#define kNotificationCenter [NSNotificationCenter defaultCenter]
//弱引用
#define kWeakSelf(type)  __weak typeof(type) weak##type = type;
//Appdelegate
#define kAppDelegate (AppDelegate *)[[UIApplication sharedApplication] delegate]
//当前设备的ios版本
#define kSystemVersion [[[UIDevice currentDevice] systemVersion] floatValue]
//状态栏高度
#define kStabarHeight (kIS_58INCH ? 44.0f : 20.0f)
//导航栏高度
#define kNavBarHeight (kIS_58INCH ? 88.0f : 64.0f)
//TabBar高度
#define kTabbarHeight (kIS_58INCH ? 83.0f : 49.0f)

//是否iPad
#define kIS_iPad (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
//机型适配
#define kIS_35INCH       [UIScreen mainScreen].bounds.size.height == 480.0f
#define kIS_40INCH       [UIScreen mainScreen].bounds.size.height == 568.0f
#define kIS_47INCH       [UIScreen mainScreen].bounds.size.height == 667.0f
#define kIS_55INCH       [UIScreen mainScreen].bounds.size.height == 736.0f
#define kIS_58INCH       [UIScreen mainScreen].bounds.size.height == 812.0f

#define kIphoneRefercreenWidth  (kIS_iPad?768.0:375.0)
#define kIphoneRefercreenHeight (kIS_iPad?1024.0:667.0)
#define kHeightCoefficient (kIS_58INCH ? kScreenHeight/667.0 : 667.0/667.0)
//单位宽、单位高
#define kWidthMatch(per) (kScreenHeight<kScreenWidth?kScreenHeight:kScreenWidth)*per/kIphoneRefercreenWidth
#define kHeightMatch(per) (kScreenHeight<kScreenWidth?kScreenWidth:kScreenHeight)*per*kHeightCoefficient/kIphoneRefercreenHeight

// 字体大小转换
#define kFontSize(pt) (kIS_58INCH ? pt : ((kHeightMatch((((pt) / 72.0) * 96.0)) / 96.0 ) * 72))
#define kFontMatchSize(ipad,iphone) kIS_iPad?[UIFont systemFontOfSize:kFontSize(ipad)]:[UIFont systemFontOfSize:kFontSize(iphone)]

#endif /* DefineMacro_h */
