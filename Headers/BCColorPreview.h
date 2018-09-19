//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSPopUpButton.h>

#import "NSMenuDelegate-Protocol.h"

@class BCFlexibleColor, NSArray, NSNumberFormatter, NSString;
@protocol BCColorPreviewDelegate;

@interface BCColorPreview : NSPopUpButton <NSMenuDelegate>
{
    BOOL _isHovering;
    BCFlexibleColor *_color;
    id <BCColorPreviewDelegate> _delegate;
    NSArray *_frequentColors;
    NSNumberFormatter *_numberFormatter;
}

+ (id)menuItemForColorCounter:(id)arg1 target:(id)arg2 action:(SEL)arg3 documentColorSpace:(id)arg4 useHSB:(BOOL)arg5;
+ (id)menuItemAttributedTitleForColorCounter:(id)arg1 useHSB:(BOOL)arg2;
+ (id)previewImageForColorCounter:(id)arg1 documentColorSpace:(id)arg2;
+ (BOOL)shouldUseHSBInColorDescriptions;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(nonatomic) BOOL isHovering; // @synthesize isHovering=_isHovering;
@property(copy, nonatomic) NSArray *frequentColors; // @synthesize frequentColors=_frequentColors;
@property(nonatomic) __weak id <BCColorPreviewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BCFlexibleColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (struct CGRect)contentBounds;
- (void)drawCheckerboard;
- (void)drawContentInRect:(struct CGRect)arg1 dirtyRect:(struct CGRect)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (id)initInBounds:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

