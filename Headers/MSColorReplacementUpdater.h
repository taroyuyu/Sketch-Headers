//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchControllers/MSColorUpdater-Protocol.h>

@class MSColor, MSImmutableColor, NSColorSpace, NSString;

@interface MSColorReplacementUpdater : NSObject <MSColorUpdater>
{
    BOOL _ignoreAlphaWhenMatching;
    BOOL _replaceAlphaOfOriginalColor;
    MSColor *_color;
    NSColorSpace *_colorSpace;
    MSImmutableColor *_immutableColor;
    MSImmutableColor *_immutableReplacementColor;
    MSColor *_replacementColor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MSColor *replacementColor; // @synthesize replacementColor=_replacementColor;
@property(readonly, nonatomic) BOOL replaceAlphaOfOriginalColor; // @synthesize replaceAlphaOfOriginalColor=_replaceAlphaOfOriginalColor;
@property(readonly, nonatomic) MSImmutableColor *immutableReplacementColor; // @synthesize immutableReplacementColor=_immutableReplacementColor;
@property(readonly, nonatomic) MSImmutableColor *immutableColor; // @synthesize immutableColor=_immutableColor;
@property(readonly, nonatomic) BOOL ignoreAlphaWhenMatching; // @synthesize ignoreAlphaWhenMatching=_ignoreAlphaWhenMatching;
@property(readonly, nonatomic) NSColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(readonly, nonatomic) MSColor *color; // @synthesize color=_color;
- (id)updateImmutableColor:(id)arg1;
- (BOOL)shouldUpdateImmutableColor:(id)arg1;
- (id)updateColor:(id)arg1;
- (BOOL)shouldUpdateColor:(id)arg1;
- (id)initWithColor:(id)arg1 replacementColor:(id)arg2 colorSpace:(id)arg3 ignoreAlphaWhenMatching:(BOOL)arg4 replaceAlphaOfOriginalColor:(BOOL)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
