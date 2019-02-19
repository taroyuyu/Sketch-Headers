//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSInspectorItem.h"

#import "BCPopoverDelegate-Protocol.h"
#import "MSColorInspectorDelegate-Protocol.h"
#import "MSStylePartPreviewButtonDelegate-Protocol.h"
#import "MSStylePartPreviewButtonDisabledTarget-Protocol.h"

@class BCPopover, MSInspectorValueAdaptor, MSStylePartPreviewButton, NSButton, NSString;

@interface MSArtboardBackgroundColorInspectorItem : MSInspectorItem <MSColorInspectorDelegate, BCPopoverDelegate, MSStylePartPreviewButtonDelegate, MSStylePartPreviewButtonDisabledTarget>
{
    MSStylePartPreviewButton *_backgroundColorButton;
    BCPopover *_popover;
    MSInspectorValueAdaptor *_colorAdaptor;
    NSButton *_colorCheckbox;
}

+ (BOOL)canHandleLayer:(id)arg1;
@property(retain, nonatomic) NSButton *colorCheckbox; // @synthesize colorCheckbox=_colorCheckbox;
@property(retain, nonatomic) MSInspectorValueAdaptor *colorAdaptor; // @synthesize colorAdaptor=_colorAdaptor;
@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) MSStylePartPreviewButton *backgroundColorButton; // @synthesize backgroundColorButton=_backgroundColorButton;
- (void).cxx_destruct;
- (id)stylePartPreviewButtonPreviewColorSpace:(id)arg1;
- (id)documentColorSpace;
- (id)canvasColorSpace;
- (void)dealloc;
- (void)changeBackgroundColorTo:(id)arg1;
- (void)colorInspector:(id)arg1 didChangeToColor:(id)arg2;
- (void)viewWillDisappear;
- (void)dismissViewController:(id)arg1;
- (void)stylePartPreviewButtonDisabledAction:(id)arg1;
- (void)backgroundColorAction:(id)arg1;
- (void)updateDisplayedValues;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

