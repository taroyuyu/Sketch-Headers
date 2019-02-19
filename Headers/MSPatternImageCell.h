//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImageCell.h>

@interface MSPatternImageCell : NSImageCell
{
    BOOL _tiled;
}

@property(nonatomic) BOOL tiled; // @synthesize tiled=_tiled;
- (struct CGRect)focusRingMaskBoundsForFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawFocusRingMaskWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)borderPathForCellFrame:(struct CGRect)arg1;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

