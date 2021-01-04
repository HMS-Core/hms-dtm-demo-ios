# HMS Dynamic Tag Manager(DTM) Sample for iOS

[![hms](https://img.shields.io/badge/hms-dtm-brightgreen)](https://developer.huawei.com/consumer/en/doc/development/HMS-References/3021004) 

中文 | [English](https://github.com/HMS-Core/hms-dtm-demo-ios/blob/master/README.md)

## 目录

* [介绍](#介绍)
* [运行步骤 ](#运行步骤 )
* [支持的环境](#支持的环境)
* [运行结果](#运行结果)
* [许可证](#许可证)


## 介绍
Dynamic Tag Manager通过Web页面动态更新跟踪代码，轻松完成特定事件跟踪并将数据传送给第三方分析平台，实现营销数据随需监控。

本Demo演示如何快速跟踪购买事件并实现数据上报，帮助您尽快集成Dynamic Tag Manager。

详细文档参见 [开发指南](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides/introduction-0000001050043907)。


## 运行步骤
在开发应用前，需要在AppGallery Connect中配置相关信息。

1. 注册成为华为开发者。

具体方法请参见[账号注册认定](https://developer.huawei.com/consumer/cn/doc/20300)。

2. 创建应用。

具体方法请参见创建
[创建您的AGC项目](https://developer.huawei.com/consumer/cn/doc/development/AppGallery-connect-Guides/agc-get-started-ios#h1-1587476272328)。
[在项目下添加应用](https://developer.huawei.com/consumer/cn/doc/development/AppGallery-connect-Guides/agc-get-started-ios#h1-1586419251829)。

3. 集成HMS Core SDK。

[CocoaPods工具集成（推荐）](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides-V5/ios-sdk-0000001061753701-V5#ZH-CN_TOPIC_0000001070586049__section18306240739)。
[手动方式集成](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides-V5/ios-sdk-0000001061753701-V5#ZH-CN_TOPIC_0000001070586049__section166981340417)。

4. 构建示例程序。

要构建此示例，请首先将该示例导入XCode（Version 9.0及以上版本 ）。然后从AppGallery Connect下载该应用程序的agconnect-services.json文件，并将该文件添加到演示的应用程序目录（\HMSDTMKitDemo）中。

<img src="result_1.png" width = 30% height = 30%>

5. 配置AppGallery Connect。

[配置AppGallery Connect](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides-V5/ios-config-agc-0000001061522978-V5)。

6. 服务端开发。

[权限](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides-V5/ios-permission-0000001062160610-V5)。
[创建配置](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides-V5/ios-create-configuration-0000001061539771-V5)。
[概览](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides-V5/ios-overview-0000001062000638-V5)。
[变量管理](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides-V5/ios-variable-management-0000001061392574-V5)。
[条件管理](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides-V5/ios-condition-management-0000001061694917-V5)。
[代码管理](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides-V5/ios-tag-management-0000001061312523-V5)。
[分组管理](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides-V5/ios-group-management-0000001062859372-V5)。
[版本管理](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides-V5/ios-version-management-0000001061480983-V5)。
[可视化埋点](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides-V5/ios-visual-event-0000001061592555-V5)。
[配置管理](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides-V5/ios-configuration-0000001061202925-V5)。

7. 客户端开发。

[开发步骤](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides-V5/ios-client-dev-0000001061841030-V5#ZH-CN_TOPIC_0000001070586051__section13806157143317)。
[接入调试](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides-V5/ios-client-dev-0000001061841030-V5#ZH-CN_TOPIC_0000001070586051__section3946202217366)。


## 支持的环境
推荐使用XCode Version 9.0及iOS 8.0以上的版本。

## 运行结果
   <img src="result_2.png" width = 60% height = 60%>

## 技术支持
如果您对HMS Core还处于评估阶段，可在[Reddit社区](https://www.reddit.com/r/HuaweiDevelopers/)获取关于HMS Core的最新讯息，并与其他开发者交流见解。

如果您对使用HMS示例代码有疑问，请尝试：
- 开发过程遇到问题上[Stack Overflow](https://stackoverflow.com/questions/tagged/huawei-mobile-services)，在`huawei-mobile-services`标签下提问，有华为研发专家在线一对一解决您的问题。
- 到[华为开发者论坛](https://developer.huawei.com/consumer/cn/forum/blockdisplay?fid=18) HMS Core板块与其他开发者进行交流。

如果您在尝试示例代码中遇到问题，请向仓库提交[issue](https://github.com/HMS-Core/hms-dtm-demo-android-studio/issues)，也欢迎您提交[Pull Request](https://github.com/HMS-Core/hms-dtm-demo-android-studio/pulls)。

## 许可证
此示例代码已获得[Apache License, version 2.0](http://www.apache.org/licenses/LICENSE-2.0).
