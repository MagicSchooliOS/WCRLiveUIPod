//
//  WCRLiveRoomViewController.h
//  WCRLiveUI
//
//  Created by wenssh on 2018/10/22.
//  Copyright © 2018年 com.100tal. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WCRClassInfo.h"
#import "WCRUserInfo.h"
#import "WCRClassConfigModel.h"
@protocol WCRRoomDelegate <NSObject>

/**
 进入教室回调

 @param error 错误原因，error==nil表示成功
 */
- (void)roomDidJoin:(NSError *)error;

/**
 即将退出教室

 @param reason 退出教室原因
 */
- (void)roomWillLeaveForReason:(WCRLeaveClassRoomReason)reason;
@end


@interface WCRBaseRoomViewController : UIViewController

/**
 教室代理
 */
@property (nonatomic, weak) id<WCRRoomDelegate> delegate;

/**
 初始化教室控制器

 @param classInfo 课程信息
 @param userInfo 当前用户信息
 @param classConfig 教室配置
 @return 教室对象
 */
+ (instancetype)createWithClassInfo:(WCRClassInfo *)classInfo userInfo:(WCRUserInfo *)userInfo classConfig:(WCRClassConfigModel *)classConfig;

/**
 离开教室
 */
- (void)leaveRoom;


/**
 SDK版本号

 @return SDK版本号
 */
+ (NSString *)getSDKVersion;
@end
