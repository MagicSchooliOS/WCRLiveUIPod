//
//  WCRSCSkinModel.h
//  WCRLiveUI
//
//  Created by 周吾昆 on 2018/12/3.
//  Copyright © 2018 com.100tal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WCRSmallClassSkinModel : NSObject

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
 视屏窗上课或视频被拖拽出时默认图
 */
@property (nonatomic,strong) UIImage *videoBackgroundImage;

/**
 头像区默认背景图
 */
@property (nonatomic,strong) UIImage *studentBackgroundImage;

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
 视频窗、头像区答题完成logo
 */
@property (nonatomic,strong) UIImage *answeredLogo;

/**
 视频窗、头像区授权logo
 */
@property (nonatomic,strong) UIImage *authorizedLogo;

/**
 视频窗、头像区奖励图片logo

 */
@property (nonatomic,strong) UIImage *awardLogo;
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
 视屏窗名字背景图片
 */
@property (nonatomic, strong) UIImage *videoNameBackground;
/**
 头像名字背景图片
 */
@property (nonatomic, strong) UIImage *studentNameBackground;


@end
