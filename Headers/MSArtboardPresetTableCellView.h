//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSImageView, NSTextField;

@interface MSArtboardPresetTableCellView : NSTableCellView
{
    NSImageView *_checkmark;
    NSTextField *_sizeLabel;
}

@property(retain, nonatomic) NSTextField *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) NSImageView *checkmark; // @synthesize checkmark=_checkmark;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1;
- (void)setBackgroundStyle:(long long)arg1;

@end

