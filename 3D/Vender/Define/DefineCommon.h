//
//  DefineCommon.h
//  3D
//
//  Created by xiaokang on 2018/5/16.
//  Copyright © 2018年 ZC. All rights reserved.
//

#ifndef DefineCommon_h
#define DefineCommon_h
#import <objc/runtime.h>

// 使用static inline创建静态内联函数，方便调用
static inline void xk_swizzled_method(Class cls ,SEL originalSelector, SEL swizzledSelector) {
    Method originalMethod = class_getInstanceMethod(cls, originalSelector);
    Method swizzledMethod = class_getInstanceMethod(cls, swizzledSelector);
    
    BOOL isAdd = class_addMethod(cls, originalSelector, method_getImplementation(swizzledMethod), method_getTypeEncoding(swizzledMethod));
    if (isAdd) {
        class_replaceMethod(cls, swizzledSelector, method_getImplementation(originalMethod), method_getTypeEncoding(originalMethod));
    }else {
        method_exchangeImplementations(originalMethod, swizzledMethod);
    }
}


#endif /* DefineCommon_h */
