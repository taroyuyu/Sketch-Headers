//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPopUpButton.h>

#import "NSMenuDelegate-Protocol.h"

@class MSFlexibleColor, NSString;
@protocol BCColorPreviewDelegate;

@interface BCColorPreview : NSPopUpButton <NSMenuDelegate>
{
    MSFlexibleColor *_color;
    id <BCColorPreviewDelegate> _delegate;
}

@property(nonatomic) __weak id <BCColorPreviewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MSFlexibleColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)drawCheckerboard;
- (void)drawRect:(struct CGRect)arg1;
- (id)initInBounds:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

