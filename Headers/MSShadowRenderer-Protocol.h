//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSRenderer-Protocol.h"

@class MSImmutableStyleBorderOptions, MSImmutableStyleInnerShadow, MSImmutableStyleShadow, MSPath, MSRenderingContext;
@protocol MSModelObject;

@protocol MSShadowRenderer <MSRenderer>
- (void)renderInnerShadow:(MSImmutableStyleInnerShadow *)arg1 path:(MSPath *)arg2 windingRule:(unsigned long long)arg3 context:(MSRenderingContext *)arg4 cacheObject:(id <MSModelObject>)arg5;
- (void)renderShadow:(MSImmutableStyleShadow *)arg1 rect:(struct CGRect)arg2 context:(MSRenderingContext *)arg3 block:(void (^)(void))arg4;
- (void)renderShadow:(MSImmutableStyleShadow *)arg1 path:(MSPath *)arg2 cacheObject:(id <MSModelObject>)arg3 windingRule:(unsigned long long)arg4 options:(MSImmutableStyleBorderOptions *)arg5 type:(unsigned long long)arg6 strokeType:(long long)arg7 fillShouldClip:(BOOL)arg8 lineWidth:(double)arg9 context:(MSRenderingContext *)arg10;
@end

