//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class MSLayer, MSPage, NSArray;

@protocol MSHoverableItem
@property(nonatomic, readonly) MSLayer *hoveredLayer;
- (void)refreshOverlay;
- (BOOL)matchesLayerListNode:(id)arg1;
- (BOOL)canBeHoveredOnPage:(MSPage *)arg1;
- (NSArray *)hoverItemsWithColor:(struct CGColor *)arg1;
@end
