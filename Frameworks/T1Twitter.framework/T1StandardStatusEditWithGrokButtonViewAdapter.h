//
//  T1StandardStatusEditWithGrokButtonViewAdapter.h
//  Twitter
//
//  Created by Paula Dozsa on 4/16/25.
//  Copyright © 2025 X Corp. All rights reserved.
//

@import T1TwitterObjC;

@class T1StatusViewCombinedViewModel;

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXTERN NSString * const T1StandardStatusEditWithGrokButtonTapScribeElement;

@interface T1StandardStatusEditWithGrokButtonViewAdapter : TFNComposableViewAdapter

+ (nullable NSString *)editWithGrokButtonTitleForViewModel:(T1StatusViewCombinedViewModel *)viewModel;
+ (nullable NSString *)editWithGrokButtonScribeElementForViewModel:(T1StatusViewCombinedViewModel *)viewModel;

@property (nonatomic) BOOL isFocal;

@end

NS_ASSUME_NONNULL_END
