//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSRenderingDriverSettings : NSObject
{
    struct CGColor *_gridLightColor;
    struct CGColor *_gridDarkColor;
    struct CGColor *_flowColor;
    struct CGImage *_flowTipImage;
    struct CGImage *_flowBackImage;
    struct CGImage *_flowOtherPageImage;
    unsigned long long _layoutGridStyle;
}

@property(readonly, nonatomic) struct CGColor *gridDarkColor; // @synthesize gridDarkColor=_gridDarkColor;
@property(readonly, nonatomic) struct CGColor *gridLightColor; // @synthesize gridLightColor=_gridLightColor;
@property(readonly, nonatomic) unsigned long long layoutGridStyle; // @synthesize layoutGridStyle=_layoutGridStyle;
- (void)dealloc;
- (struct CGColor *)flowColor;
- (struct CGImage *)flowOtherPageImage;
- (struct CGImage *)flowBackImage;
- (struct CGImage *)flowTipImage;
- (struct CGImage *)createTintedImageFromImage:(struct CGImage *)arg1;
- (id)initWithGridLightColor:(struct CGColor *)arg1 gridDarkColor:(struct CGColor *)arg2 layoutGridStyle:(unsigned long long)arg3 flowColor:(struct CGColor *)arg4 flowTipImage:(struct CGImage *)arg5 flowBackImage:(struct CGImage *)arg6 flowOtherPageImage:(struct CGImage *)arg7;
- (id)init;

@end

