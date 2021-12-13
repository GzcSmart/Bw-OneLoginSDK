//
//  CverifyUtils.h
//  cverification_sdk_demo
//
//  Created by bwkj on 2020/3/30.
//  Copyright © 2020 sikongtech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CverifyUtils : NSObject

//AES解密1
+ (NSString *)AES128CBC_PKCS5Padding_DecryptString:(NSString *)string keyAndIv:(NSString *)keyAndIv;

//AES解密2
+ (NSString *)AES128CBC_PKCS5Padding_DecryptString:(NSString *)string key:(NSString *)key iv:(NSString *)iv;

//MD5
+ (NSString *)md5:(NSString *)src;

//获取当前时间
+ (NSString *)timestamp;

//获取当前时间 精确到毫秒
+ (NSString *)timestampMS;

#pragma mark 数据对象类型转换
/**
 类型转换1 NSString转NSDictionary
*/
+ (NSDictionary *)covertToDic:(NSString *)str;

/**
  类型转换2 NSDictionary转NSString
 */
+(NSString *) covertToString:(NSDictionary*) dic;

/**
 *获取加解密所需要的key 与 iv
 *@params key  大象平台提供的业务密钥
 */
+(NSDictionary *) getKeyAndIv:(NSString*) key;

//获取手机型号
+ (NSString *)getCurrentDeviceModel;
@end

NS_ASSUME_NONNULL_END
