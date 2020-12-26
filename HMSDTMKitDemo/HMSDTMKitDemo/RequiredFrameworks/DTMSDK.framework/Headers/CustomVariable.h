//
//  CustomVariable.h
//  DTM-sdk-api
//
//  Created by hms_dtm on 2020/9/16.
//  Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/**
 * function：提供函数调用接口，供函数调用变量实现
 *
 */
@interface CustomVariable : NSObject
/**
 * 执行用户自定义方法
 *
 * @param params 从容器json中传进来的参数
 * @return String 变量值
 */
- (NSString * _Nullable)getValue:(NSDictionary <NSString *, NSObject *> *)params;
@end

NS_ASSUME_NONNULL_END
