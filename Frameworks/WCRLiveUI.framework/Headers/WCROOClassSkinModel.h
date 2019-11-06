//
//  WCROOClassSkinModel.h
//  WCRLiveUI
//
//  Created by juvham on 2019/4/24.
//  Copyright © 2019 com.100tal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface WCROOClassSkinModel : NSObject

/**
 教室课前课中背景图片
 */
@property (nonatomic,strong) UIImage *backgroundImage;

/**
 教室课后背景图片
 */
@property (nonatomic,strong) UIImage *backgroundImageAfterClass;
/**
 背景图片中间显示的logo，一般设置为app的logo
 */
@property (nonatomic,strong) UIImage *backgroundCenterLogo;

/**
 返回按钮默认图片
 */
@property (nonatomic,strong) UIImage *backButtonImageNormal;

/**
 返回按钮高亮图片
 */
@property (nonatomic,strong) UIImage *backButtonImagePress;

/**
 视屏窗上课时默认图
 */
@property (nonatomic,strong) UIImage *videoBackgroundImage;
/**
 视屏窗屏幕共享时默认图
 */
@property (nonatomic,strong) UIImage *videoScreenSharingImage;

/**
 视频窗视频被禁时展示图片
 */
@property (nonatomic,strong) UIImage *videoDisableImage;

/**
 视频窗音频默认图片
 */
@property (nonatomic,strong) UIImage *audioLogo;

/**
 视频窗音频被禁图片
 */
@property (nonatomic,strong) UIImage *audioMuteLogo;

/**
 音量icon-一共五个级别，数越大代表音量越大
 */
@property (nonatomic,strong) UIImage *voiceLevel0;
@property (nonatomic,strong) UIImage *voiceLevel1;
@property (nonatomic,strong) UIImage *voiceLevel2;
@property (nonatomic,strong) UIImage *voiceLevel3;
@property (nonatomic,strong) UIImage *voiceLevel4;

/**
 网络质量icon 一共分为五个级别，数越大代表网络越好
 */
@property (nonatomic, strong) UIImage *networkQualityLevel0;
@property (nonatomic, strong) UIImage *networkQualityLevel1;
@property (nonatomic, strong) UIImage *networkQualityLevel2;
@property (nonatomic, strong) UIImage *networkQualityLevel3;
@property (nonatomic, strong) UIImage *networkQualityLevel4;
/**
  奖励星星图
 */
@property(nonatomic,strong)UIImage *awardImage;

/**
奖励文字颜色
 */
@property(nonatomic,strong)UIColor *awardCountTextColor;

/**
奖励的最大值
 */
@property(nonatomic,strong)NSNumber *awardMax;

/**
 是否展示涂鸦
 */
@property(nonatomic,assign)BOOL isDrawToolHidden;
@end

NS_ASSUME_NONNULL_END
