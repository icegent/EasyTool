//
//  ETPhotoManager.h
//  EasyTool
//
//  Created by supertext on 15/1/30.
//  Copyright (c) 2015年 icegent. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@class PHAsset;
typedef NSOperation ETPhotoOperation;

NS_CLASS_AVAILABLE_IOS(8_0)@interface ETPhotoManager : NSObject
#if FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST(8)
@property (class, readonly, strong) ETPhotoManager *sharedManager;//the default and shared instance.
#endif
-(nullable ETPhotoOperation *)dataWithAsset :(PHAsset *)asset completedBlock:(nullable void (^)( NSData * _Nullable imageData,NSError * _Nullable error))completedBlock;
-(nullable ETPhotoOperation *)imageWithAsset:(PHAsset *)asset completedBlock:(nullable void (^)(UIImage * _Nullable image,NSError * _Nullable error))completedBlock;
-(nullable ETPhotoOperation *)thumbWithAsset:(PHAsset *)asset targetSize:(CGSize)targetSize completedBlock:(nullable void (^)(UIImage *   _Nullable image,NSError * _Nullable error))completedBlock;//sync = NO;
-(nullable ETPhotoOperation *)thumbWithAsset:(PHAsset *)asset sync:(BOOL)sync targetSize:(CGSize)targetSize completedBlock:(nullable void (^)(UIImage * _Nullable image,NSError * _Nullable error))completedBlock;
@end
NS_ASSUME_NONNULL_END
