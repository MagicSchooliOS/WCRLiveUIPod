//
//  WCRLiveRoomDef.h
//  WCRLiveUI
//
//  Created by 周吾昆 on 2018/10/25.
//  Copyright © 2018年 com.100tal. All rights reserved.
//

#ifndef WCRLiveRoomDef_h
#define WCRLiveRoomDef_h



/**
 课堂类型

 - WCRLiveRoomTypeNone: 初始值
 - WCRLiveRoomTypeOneToOne: 一对一
 - WCRLiveRoomTypeSmallClass: 小班
 - WCRLiveRoomTypeLargeClass: 大班
 - WCRLiveRoomTypeCodeLargeClass: 口令大班

 */
typedef NS_ENUM(NSUInteger, WCRLiveRoomType) {
    WCRLiveRoomTypeNone = 0,
    WCRLiveRoomTypeOneToOne,
    WCRLiveRoomTypeSmallClass,
    WCRLiveRoomTypeLargeClass,
    WCRLiveRoomTypeCodeLargeClass
};

/**
 用户角色
 
 - WCRUserTypeNone: 初始值
 - WCRUserTypeStudent: 学生
 - WCRUserTypeTeacher: 老师
 - WCRUserTypeCounselor: 辅讲老师
 - WCRUserTypeAssistant: 助教/监课
 - WCRUserTypeMax: 不在[WCRUserTypeNone,WCRUserTypeMax]区间的值都属于异常
 */
typedef NS_ENUM(NSUInteger, WCRUserType) {
    WCRUserTypeNone = 0,
    WCRUserTypeStudent,
    WCRUserTypeTeacher,
    WCRUserTypeCounselor,
    WCRUserTypeAssistant,
    WCRUserTypeMax
};

/**
 环境

 - WCREnvironmentDevelop: 开发环境
 - WCREnvironmentTest: 测试环境
 - WCREnvironmentPreOnline: 预上线环境
 - WCREnvironmentOnline: 线上环境
 */
typedef NS_ENUM(NSUInteger, WCREnvironment) {
    WCREnvironmentDevelop = 0,
    WCREnvironmentTest = 1,
    WCREnvironmentPreOnline = 2,
    WCREnvironmentOnline = 3
};

/**
 课程状态

 - WCRClassStatusNone: 初始值
 - WCRClassStatusBeforeClass: 课前
 - WCRClassStatusInClass: 课中
 - WCRClassStatusAfterClass: 课后
 - WCRClassStatusMax: 异常值

 */
typedef NS_ENUM(NSUInteger, WCRClassStatus) {
    WCRClassStatusNone = 0,
    WCRClassStatusBeforeClass,   //课前
    WCRClassStatusInClass,       //课中
    WCRClassStatusAfterClass,    //课后
    WCRClassStatusMax,
};

/**
 退出教室原因

 - WCRLeaveClassRoomReasonNone: 初始值
 - WCRLeaveClassRoomReasonUserLeave: 主动离开
 - WCRLeaveClassRoomReasonLoginOnOnterDevice:异地登录被强制踢出课堂
 - WCRLeaveClassRoomReasonClassOver: 老师下课自动退出课堂
 - WCRLeaveClassRoomReasonMax: 异常值

 */
typedef NS_ENUM(NSInteger,WCRLeaveClassRoomReason){
    WCRLeaveClassRoomReasonNone = 0,
    WCRLeaveClassRoomReasonUserLeave,
    WCRLeaveClassRoomReasonLoginOnOnterDevice,
    WCRLeaveClassRoomReasonClassOver,
    WCRLeaveClassRoomReasonForceQuit,
    WCRLeaveClassRoomReasonMax
};

typedef NS_ENUM(NSInteger, WCRRoomPlaybackMode) {
    WCRRoomPlaybackModeVideo = 0,
    WCRRoomPlaybackModeAction = 1
};
#endif /* WCRLiveRoomDef_h */
