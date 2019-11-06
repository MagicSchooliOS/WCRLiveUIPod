//
//  WCRClassConfigModel.h
//  WCRLiveUI
//
//  Created by 周吾昆 on 2018/12/3.
//  Copyright © 2018 com.100tal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WCRSmallClassSkinModel.h"
#import "WCRLargeClassSkinModel.h"
#import "WCROOClassSkinModel.h"
@interface WCRClassConfigModel : NSObject

/**
 小班皮肤设置
 */
@property (nonatomic, strong) WCRSmallClassSkinModel *smallClassSkinModel;

/**
 大班皮肤设置
 */
@property (nonatomic, strong) WCRLargeClassSkinModel *largeClassSkinModel;
/**
 1v1皮肤设置
 */
@property (nonatomic, strong) WCROOClassSkinModel *ooClassSkinModel;
/**
 涂鸦工具条颜色数组，默认8个颜色，如果需要自定义请传入8个NSNumber类型的颜色值，如@[@0xffd80000,@0xffff8100,@0xffff1400,@0xff33d122,@0xff02afe9,@0xffa97b14,@0xfff035b3,@0xff000090]; 否则不生效
 */
@property (nonatomic, copy) NSArray<NSNumber *>* doodleColorArray;
@end
