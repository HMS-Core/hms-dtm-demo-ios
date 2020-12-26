//
//  GrsClient.h
//  GRSCXXWarp
//
//  Created by hwx931674 on 2020/7/22.
//  Copyright © 2020 Huawei Technologies Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GrsBaseInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface GrsClient : NSObject

/// 指定初始化函数
/// @param info <#info description#>
- (instancetype)initWithGRSBaseInfo:(GrsBaseInfo*)info;

/// 同步查询所有指定服务下的业务地址
/// @param serverName 要查询的服务名
- (nullable NSDictionary<NSString*,NSString*> *)syncGetGrsUrls:(NSString *)serverName;

/// 同步查询单条指定服务下的业务地址
/// @param serverName 要查询的服务名
/// @param key 业务key
- (nullable NSString *)syncGetGrsUrl:(NSString *)serverName key:(NSString *)key;

/// 异步查询所有指定服务下的业务地址
/// @param serverName 要查询的服务名
/// @param completion 查询回调
- (void)asyncGetGrsUrls:(NSString *)serverName completion:(void (^)(NSDictionary<NSString*,NSString*> * _Nullable url,GrsErrCode code))completion;

/// 异步查询单条指定服务下的业务地址
/// @param serverName 要查询的服务名
/// @param key 业务key
/// @param completion 查询回调
- (void)asyncGetGrsUrl:(NSString *)serverName key:(NSString *)key completion:(void (^)(NSString* _Nullable url,GrsErrCode code))completion;

@end

NS_ASSUME_NONNULL_END
