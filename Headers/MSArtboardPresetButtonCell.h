//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSInspectorButtonCell.h"

@interface MSArtboardPresetButtonCell : MSInspectorButtonCell
{
}

- (void)drawImage:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)drawSecondaryTitleWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)drawMainTitleWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)drawTitle:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (struct CGRect)secondaryTitleRectWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)mainTitleRectWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)arrowImage;
- (struct CGRect)arrowRectForBounds:(struct CGRect)arg1;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (void)drawBezelWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

