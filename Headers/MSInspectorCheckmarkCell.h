//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSInspectorButtonCell.h"

@interface MSInspectorCheckmarkCell : MSInspectorButtonCell
{
    double _checkboxToTextSpacingOffset;
}

@property(nonatomic) double checkboxToTextSpacingOffset; // @synthesize checkboxToTextSpacingOffset=_checkboxToTextSpacingOffset;
- (id)initWithCoder:(id)arg1;
- (void)drawImage:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawBezelWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (id)mixedImage;
- (id)onImage;
- (struct CGSize)checkmarkSize;

@end

