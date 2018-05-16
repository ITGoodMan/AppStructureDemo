//
//  RootViewController.m
//  3D
//
//  Created by xiaokang on 2018/5/16.
//  Copyright © 2018年 ZC. All rights reserved.
//

#import "RootViewController.h"
#import "GKNavigationBarConfigure.h"
#import "UINavigationController+GKCategory.h"

@interface RootViewController ()

@end

@implementation RootViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.tabBar.barTintColor = [UIColor whiteColor];
    // 统一设置导航栏样式
    GKNavigationBarConfigure *configure = [GKNavigationBarConfigure sharedInstance];
    [configure setupDefaultConfigure];
    // 设置自定义样式
    configure.backgroundColor = MAIN_GROUNDCOLOR;
    configure.titleColor = WHITE_COLOR;
    configure.titleFont  = kFontMatchSize(18, 18);
    
    [self addChildVCs];
}

//  添加子控制器
- (void)addChildVCs {
    
    [self addChildVC:[NSClassFromString(@"MainViewController") new]  title:@"主页" imageName:@"Home"];
    [self addChildVC:[NSClassFromString(@"FindViewController")  new] title:@"发现" imageName:@"Activity"];
    [self addChildVC:[NSClassFromString(@"MineViewController")  new] title:@"我的" imageName:@"Mine"];
}

- (void)addChildVC:(UIViewController *)vc title:(NSString *)title imageName:(NSString *)imageName {
    vc.tabBarItem.title = title;
    vc.tabBarItem.image = [UIImage imageNamed:imageName];
    vc.tabBarItem.selectedImage = [UIImage imageNamed:[imageName stringByAppendingString:@"_selected"]];
    vc.tabBarItem.titlePositionAdjustment = UIOffsetMake(0, -2);
    [vc.tabBarItem setTitleTextAttributes:@{NSForegroundColorAttributeName:[UIColor grayColor]} forState:UIControlStateNormal];
    [vc.tabBarItem setTitleTextAttributes:@{NSForegroundColorAttributeName:COLOR(224, 14, 30)} forState:UIControlStateSelected];
    UINavigationController *nav = [UINavigationController rootVC:vc translationScale:NO];
    [self addChildViewController:nav];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
