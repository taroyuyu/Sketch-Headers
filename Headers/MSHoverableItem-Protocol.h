//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class BCCache, MSLayer, MSPage, NSColor;

@protocol MSHoverableItem
@property(readonly, nonatomic) MSLayer *hoveredLayer;
- (void)refreshOverlay;
- (BOOL)canBeHoveredOnPage:(MSPage *)arg1;
- (void)drawHoverWithZoom:(double)arg1 color:(NSColor *)arg2 cache:(BCCache *)arg3;
@end

