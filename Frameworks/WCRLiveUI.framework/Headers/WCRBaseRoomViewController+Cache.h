//
//  WCRBaseRoomViewController+Cache.h
//  WCRLiveUI
//
//  Created by 周吾昆 on 2019/1/21.
//  Copyright © 2019 com.100tal. All rights reserved.
//

#import <WCRLiveUI/WCRLiveUI.h>

NS_ASSUME_NONNULL_BEGIN

@interface WCRBaseRoomViewController (Cache)
/**
 清空离线缓存资源（离线缓存本身有超过预设存储大小会自动清理超出部分缓存的逻辑，该操作会清除掉所有缓存文件）
 */
- (void)clearResourceCache;
@end

NS_ASSUME_NONNULL_END
