//
//  UITableView+AdapteriOS11.m
//  3D
//
//  Created by xiaokang on 2018/5/16.
//  Copyright © 2018年 ZC. All rights reserved.
//

#import "UITableView+AdapteriOS11.h"

@implementation UITableView (AdapteriOS11)

+ (void)load
{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        Class class = [self class];
        xk_swizzled_method(class, @selector(initWithFrame:style:), @selector(xk_initWithFrame:style:));
    });
}

- (instancetype)xk_initWithFrame:(CGRect)frame style:(UITableViewStyle)style
{
    [self xk_initWithFrame:frame style:style];
//    self.estimatedRowHeight =0;
    self.estimatedSectionHeaderHeight = 0;
    self.estimatedSectionFooterHeight = 0;
    return self;
}

@end
