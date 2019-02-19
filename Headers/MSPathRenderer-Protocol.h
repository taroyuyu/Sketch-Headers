//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSRenderer-Protocol.h"

@class MSImmutableStyle, MSImmutableStyledLayer, MSPath, MSRenderingContext;

@protocol MSPathRenderer <MSRenderer>
- (void)renderBordersForPath:(MSPath *)arg1 style:(MSImmutableStyle *)arg2 applyClip:(BOOL)arg3 rect:(struct CGRect)arg4 context:(MSRenderingContext *)arg5;
- (void)renderFillsForPath:(MSPath *)arg1 style:(MSImmutableStyle *)arg2 layer:(MSImmutableStyledLayer *)arg3 rect:(struct CGRect)arg4 context:(MSRenderingContext *)arg5;
- (void)renderPath:(MSPath *)arg1 style:(MSImmutableStyle *)arg2 layer:(MSImmutableStyledLayer *)arg3 inRect:(struct CGRect)arg4 fallbackColor:(struct CGColor *)arg5 context:(MSRenderingContext *)arg6;
@end

