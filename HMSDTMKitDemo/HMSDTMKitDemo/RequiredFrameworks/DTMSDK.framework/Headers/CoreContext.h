//
//  CoreContext.h
//  DynamicTagManagerSDK
//
//  Created by hms_dtm on 2020/8/13.
//  Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Executor;

NS_ASSUME_NONNULL_BEGIN
/** 事件名称关键字 */
static NSString *const EVENT_NAME_TAG = @"dtm.eventName";

/** 是否需要同步发送到HuaweiAnalytics */
static NSString *const NEED_SEND_TO_HA_TAG = @"dtm.needSendToHA";

/** auto trace key：前缀【对接云侧，不可修改】 */
static NSString *const KEY_AUTO_TRACE_PREFIX = @"$DTM_AT_";

/** auto trace key：事件名称【对接云侧，不可修改】 */
static NSString *const KEY_AUTO_TRACE_EVENT = @"$DTM_AT_EVENT";

/** auto trace key：事件类型【对接云侧，不可修改】 */
static NSString *const KEY_AUTO_TRACE_TYPE = @"$DTM_AT_TYPE";

/** auto trace key：事件Activity【对接云侧，不可修改】 */
static NSString *const KEY_AUTO_TRACE_TARGET = @"$DTM_AT_TARGET";

/** auto trace key：事件对应控件ID名称【对接云侧，不可修改】 */
static NSString *const KEY_AUTO_TRACE_ID_NAME = @"$DTM_AT_ID_NAME";

/** auto trace key：事件对应控件XPath【对接云侧，不可修改】 */
static NSString *const KEY_AUTO_TRACE_XPATH = @"$DTM_AT_XPATH";

/** auto trace key：事件对应控件XPath【对接云侧，不可修改】 */
static NSString *const KEY_AUTO_TRACE_XPATH_LIST = @"$DTM_AT_XPATH_LIST";

/** auto trace key：事件对应控件文本内容【对接云侧，不可修改】 */
static NSString *const KEY_AUTO_TRACE_CONTENT = @"$DTM_AT_CONTENT";

/** auto trace key：事件对应控件点击时间【对接云侧，不可修改】 */
static NSString *const KEY_AUTO_TRACE_TIME = @"$DTM_AT_TIME";

/** auto trace type：点击事件类型【对接云侧，不可修改】 */
static NSString *const TYPE_AUTO_TRACE_CLICK = @"$DTM_AT_CLICK";

/** auto trace type：页面进入类型【对接云侧，不可修改】 */
static NSString *const TYPE_AUTO_TRACE_ENTER = @"$DTM_AT_ENTER";

/** auto trace type：页面进入类型【对接云侧，不可修改】 */
static NSString *const TYPE_AUTO_TRACE_EXIT = @"$DTM_AT_EXIT";

/** 事件收集开关 */
static NSString *const ANALYTICS_ENABLED = @"analyticsEnabled";

@interface CoreContext : NSObject

/**
* 获取核心线程池
*
* @return Core Executor
*/
- (dispatch_queue_t)getCoreExecutor;


/**
* 获取ConfigurationID
*
* @return ConfigurationID
*/
- (NSString *)getConfigurationID;

/**
* 返回 Resource 版本号
*
* @return 版本号
*/
- (NSString *)getResourceVersion;

/**
* 是否上报到HuaweiAnalytics，默认上报
*
* @return true 上报 false 不上报
*/
- (BOOL)isReportToHwAnalytics;

/**
* 获取用户属性
*
* @param name 属性名
* @return value 属性值
*/
- (NSString *)getUserProfile:(NSString *)name;

/**
* 事件处理完成回调
*
* @param event 事件名称
* @param constParams HA常量参数
* @param dic 事件数据
*/
- (void)onEventExecuted:(NSString *)event constParams:(NSDictionary * __nullable)constParams dic:(NSDictionary *)dic;

@end

NS_ASSUME_NONNULL_END
