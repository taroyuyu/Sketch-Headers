//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSTextLabelForUpDownField.h"

@class NSImage;

@interface MSInlineTextLabelForUpDownField : MSTextLabelForUpDownField
{
    NSImage *_image;
}

+ (Class)cellClass;
+ (id)labelWithImage:(id)arg1;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (struct NSEdgeInsets)alignmentRectInsets;
- (void)userClickedWithMouseDownEvent:(id)arg1 mouseUpEvent:(id)arg2;

@end

