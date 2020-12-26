//
//  GrsBaseInfo.h
//  GRSCXXWarp
//
//  Created by hwx931674 on 2020/7/22.
//  Copyright © 2020 Huawei Technologies Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, GrsErrCode) {
    //查询成功
    GrsErrCodeOk = 0,
    //sdk内部错误
    GrsErrCodeInternalError,
    //无效的参数
    GrsErrCodeinvalidParam,
    //兜底失败,未找到兜底文件或读取解析失败
    GrsErrCodeLocalRouteFailed,
    //未找到指定的服务
    GrsErrCodeNotFind,
};

NS_ASSUME_NONNULL_BEGIN

@interface GrsBaseInfo : NSObject

// 用户注册地,可选
@property(nonatomic,copy)NSString *regCountry;
// 用户服务地,可选
@property(nonatomic,copy)NSString *serCountry;
// 终端发货地,可选
@property(nonatomic,copy)NSString *issueCountry;
// app名称,sdk接入查询没有AppName可不填,可选
@property(nonatomic,copy)NSString *appName;

//包名,必选(app填 main bundle的 identifier,framework则填framework对应的bundle的identifier)
@property(nonatomic,copy)NSString *bundleIdentifier;
//包版本,必选
@property(nonatomic,copy)NSString *bundleVersion;
// 业务领域，如IOT、PC,必选
@property(nonatomic,copy)NSString *productLine;
// 业务名称，如MatebookManager、SmartAudio,必选
@property(nonatomic,copy)NSString *productName;

@end

NS_ASSUME_NONNULL_END
