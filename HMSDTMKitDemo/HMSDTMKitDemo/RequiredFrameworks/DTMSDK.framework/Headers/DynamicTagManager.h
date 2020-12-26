//
//  DynamicTagManager.h
//  DynamicTagManagerSDK
//
//  Created by hms_dtm on 2020/8/6.
//  Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
//

#import "CoreContext.h"
#import <UIKit/UIKit.h>

@class Executable,ExecNode,VisualPoint;

NS_ASSUME_NONNULL_BEGIN

@interface DynamicTagManager : CoreContext
/**
 *获取SDK版本号
 */
+ (NSString *)getSdkVersion;
/**
 *解析OpenUrl
 */
+ (void)dtmHandleOpenUrl:(NSURL *)openUrl;
@end

NS_ASSUME_NONNULL_END
