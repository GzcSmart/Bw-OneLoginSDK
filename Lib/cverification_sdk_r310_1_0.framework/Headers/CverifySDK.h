//
//  CverifySDK.h
//  cverification_sdk_r310_1_0_dev
//
//  Created by bwkj on 2020/6/9.
//  Copyright © 2020 sikongtech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UACustomModel.h"
NS_ASSUME_NONNULL_BEGIN

typedef void(^CVerifyLoginBlock)(NSDictionary *_Nullable resultDic);

@interface CverifySDK : NSObject

/**
 单例

 @return 实例
 */
+(instancetype)shareInstance;

/**
 运营商类型

 @return 运营商类型 1移动，2联通，3电信
 */
-(NSString*) getOperTypeStr;
/**
 设置超时
 
 @param timeout 超时
 */
- (void)setTimeoutInterval:(NSTimeInterval)timeout;
/**
 控制台日志输出控制（默认关闭）
 @param enable 开关参数
 */
- (void)printConsoleEnable:(BOOL)enable;

/**
 接口用于初始化sdk

 @param cusAppId 大象平台开通的cusAppId
 @param ywId  请求业务标识符
 */
-(void)initWithAppId:(NSString*)cusAppId YwId:(NSString*)ywId  completion:(CVerifyLoginBlock)complete;

/**
 接口用于预取号，获取accessCode，如果失败，则应选择其它取号登录方式

 @param complete 获得accessCode
 */
- (void)uniGetAccessCodeFinishBlock:(CVerifyLoginBlock)complete;
/**
 接口用于获取当前手机的accessToken

 @param model 一键登录授权页面
 @param complete 获得accessToken
 */
- (void)uniGetAccessTokenWithModel:(nonnull UACustomModel*)model finishBlock:(CVerifyLoginBlock)complete;


/**
 接口用于预判断本机号，获取checkToken，如果失败，则应选择其它判断方式

 @param complete 获得checkToken
 */
- (void)uniGetCheckCodeFinishBlock:(CVerifyLoginBlock)complete;
@end

NS_ASSUME_NONNULL_END
