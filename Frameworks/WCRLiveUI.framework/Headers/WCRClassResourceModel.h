//
//  WCRClassResourceModel.h
//  WCRLiveUI
//
//  Created by 周吾昆 on 2018/12/3.
//  Copyright © 2018 com.100tal. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WCRClassResourceModel : NSObject

/**
 打开文档的html地址
 */
@property (nonatomic, copy) NSString *docRemoteUrl;

/**
 docRemoteUrl对应的下载地址
 */
@property (nonatomic, copy) NSString *docDownloadUrl;

/**
 游戏课件使用的cocos下载地址
 */
@property (nonatomic, copy) NSString *cocosDownloadUrl;

/**
 视频、音频资源地址
 */
@property (nonatomic, strong) NSArray<NSString *> *mediaUrls;

/**
 离线资源占用设备最大内存限制，单位为M，超过该值则会先清除最久未使用资源直至低于该值，默认为500M
 */
@property (nonatomic, assign) NSInteger maxResourceSpace;

@end
