//
//  AppDelegate+XKCategory.m
//  3D
//
//  Created by xiaokang on 2018/5/16.
//  Copyright © 2018年 ZC. All rights reserved.
//

#import "AppDelegate+XKCategory.h"

@implementation AppDelegate (XKCategory)

//  设置提前的一些配置
- (void)setAdvanceConfiguration {
    if (@available(iOS 11.0, *)) {
        [[UIScrollView appearance] setContentInsetAdjustmentBehavior:UIScrollViewContentInsetAdjustmentNever];
        // 去掉iOS11系统默认开启的self-sizing
        [UITableView appearance].estimatedRowHeight = 0;
        [UITableView appearance].estimatedSectionHeaderHeight = 0;
        [UITableView appearance].estimatedSectionFooterHeight = 0;
    }
}

- (void)setAppWindows {
    
}

@end
