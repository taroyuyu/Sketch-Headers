//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSArtboardPreset, MSArtboardPresetsViewController;

@protocol MSArtboardPresetsViewControllerDelegate <NSObject>
- (void)artboardPresetsViewController:(MSArtboardPresetsViewController *)arg1 didSelectPreset:(MSArtboardPreset *)arg2;

@optional
- (void)showCustomPresetSheet:(MSArtboardPresetsViewController *)arg1;
- (void)artboardPresetsViewController:(MSArtboardPresetsViewController *)arg1 didSelectOrientation:(long long)arg2;
@end

