//
//  WCRClassInfo.h
//  WCRLiveUI
//
//  Created by 周吾昆 on 2018/10/25.
//  Copyright © 2018年 com.100tal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WCRUserInfo.h"
#import "WCRClassResourceModel.h"
#import "WCRLiveRoomDef.h"
NS_ASSUME_NONNULL_BEGIN
/**
 房间信息，主要包括房间ID、机构ID、房间名、教室信息
 */
@interface WCRClassInfo : NSObject

/**
 必填 房间ID，最大32位的数字格式的字符串
 */
@property(nonatomic, copy) NSString* roomID;

/**
 必填 机构ID，直播云后台分配的机构ID
 */
@property(nonatomic, copy) NSString* appID;

/**
 课程名称，可以为空，建议填写
 */
@property(nonatomic, copy, nullable) NSString* classTitle;

/**
 必填，老师信息，上课必须有老师
 */
@property(nonatomic, copy, nullable) WCRUserInfo* teacher;

/**
 必填 房间类型，一对一、小班等
 */
@property(nonatomic, assign) WCRLiveRoomType roomType;

/**
 app名字，在提示打开麦克风摄像权限alert时需要展示，建议填写
 */
@property(nonatomic, copy) NSString* appName;

/**
 必填 课程状态
 */
@property(nonatomic, assign) WCRClassStatus classStatus;

/**
 回放类型，创建回放教室时必填，建议默认选择Video
 */
@property (nonatomic, assign) WCRRoomPlaybackMode playbackMode;

/**
 必填，教室在课堂开始前文档区域默认展现的html地址
 */
@property(nonatomic, copy) NSString* docUrlOnClassWaiting;

/**
 必填，教室在课中老师离开教室时文档区域默认展现的html地址
 */
@property(nonatomic, copy) NSString* docUrlOnTeacherLeave;

/**
必填 课表计划开课时间
 */
@property(nonatomic, copy) NSDate* schedualStartTime;

/**
必填 课表计划结束时间
 */
@property(nonatomic, copy) NSDate* schedualEndTime;

/**
 课程的实际开始时间，课前拿不到该时间可以不传，课中状态进入必须传
 */
@property(nonatomic, copy) NSDate* actualStartTime;

/**
 课程的实际结束时间，拿不到可以不传，如课程已经结束进教室必须传
 */
@property(nonatomic, copy) NSDate* actualEndTime;

/**
 离线资源相关信息，选填，若不为空，进入教室后会先下载相关资源，下载完成后再初始化消息信道与音视频相关功能
 */
@property (nonatomic, strong) WCRClassResourceModel *resourceModel;

/**
 教室内所有学生列表，小班课必填，其他班型不需要填
 */
@property(nonatomic,copy) NSArray<WCRUserInfo*> *students;

/**
必填 设置环境
 */
@property(nonatomic, assign) WCREnvironment env;
@end
NS_ASSUME_NONNULL_END
