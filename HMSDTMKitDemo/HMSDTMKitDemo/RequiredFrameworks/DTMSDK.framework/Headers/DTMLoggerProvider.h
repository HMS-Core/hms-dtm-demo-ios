//
//  DTMLoggerProvider.h
//  DTM-sdk-core
//
//  Created by hms_dtm on 2020/9/23.
//  Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *新增日志传递Block
 */
typedef void(^DTMLoggerProviderBlock)(NSString *logStr);

@interface DTMLoggerProvider : NSObject

/**
 *声明logger日志Block
 */
@property (nonatomic, copy) DTMLoggerProviderBlock loggerBlock;

/**
 *单例创建
 */
+ (instancetype)defaultManager;


/**
 *处理logger日志回传方法
 */
- (void)handleDebugLoggerWith:(NSString *)logStr;

@end

NS_ASSUME_NONNULL_END
