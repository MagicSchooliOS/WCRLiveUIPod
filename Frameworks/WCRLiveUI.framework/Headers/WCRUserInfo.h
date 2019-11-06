//
//  WCRUserInfo.h
//  WCRLiveUI
//
//  Created by 周吾昆 on 2018/10/25.
//  Copyright © 2018年 com.100tal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WCRLiveUI/WCRLiveRoomDef.h>
NS_ASSUME_NONNULL_BEGIN
/**
 用户信息，包括昵称、uid、token、头像、用户类型等信息
 */
@interface WCRUserInfo: NSObject<NSCopying>

/**
 用户信息
 
 @param uid 用户ID
 @param token 用户Token，如果是当前进入教室的用户，token不能为nil
 @param name 用户昵称
 @param avatar 用户头像
 @param groupId 用户组ID
 @param role 用户角色
 @return 用户实例
 */
- (instancetype)initWithUID:(NSString *)uid
                      token:(nullable NSString *)token
                       name:(nullable NSString *)name
                     avatar:(nullable NSString *)avatar
                    groupId:(nullable NSString *)groupId
                       role:(WCRUserType)role
                       code:(nullable NSString *)code;

/**
 用户ID
 */
@property(nonatomic, copy) NSString* uid;

/**
 用户token
 */
@property(nonatomic, copy, nullable) NSString* code;

/**
 用户口令
 */
@property(nonatomic, copy, nullable) NSString* token;

/**
 用户昵称，可以为空
 */
@property(nonatomic, copy, nullable) NSString* name;

/**
 用户手机号，可以为空
 */
@property(nonatomic, copy, nullable) NSString* phone;

/**
 用户邮箱，可以为空
 */
@property(nonatomic, copy, nullable) NSString* email;

/**
 用户头像，可以为空
 */
@property(nonatomic, copy, nullable) NSString* avatar;

/**
 用户角色，@see WCRUserType
 */
@property(nonatomic, assign) WCRUserType role;

/**
 组ID
 */
@property(nonatomic, copy, nullable) NSString* groupId;

/**
 当前学生进入教室的时间
 */
@property(nonatomic, strong) NSDate* joinRoomTime;

@end
NS_ASSUME_NONNULL_END
