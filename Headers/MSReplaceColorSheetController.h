//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Chocolat/CHSheetController.h>

#import "MSColorInspectorDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class BCPopover, MSPopoverDismisserView, MSStylePartPreviewButton, NSButton, NSMenu, NSString;

@interface MSReplaceColorSheetController : CHSheetController <NSWindowDelegate, NSMenuDelegate, MSColorInspectorDelegate>
{
    NSButton *_cancelButton;
    NSButton *_ignoreAlphaWhenMatchingOriginalColorButton;
    MSStylePartPreviewButton *_originalColorButton;
    MSStylePartPreviewButton *_replacementColorButton;
    NSButton *_keepAlphaOfOriginalColorButton;
    MSPopoverDismisserView *_replacementColorPopoverDismissingView;
    NSButton *_replaceButton;
    NSMenu *_frequentColorsMenu;
    BCPopover *_popover;
}

@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) NSMenu *frequentColorsMenu; // @synthesize frequentColorsMenu=_frequentColorsMenu;
@property(nonatomic) __weak NSButton *replaceButton; // @synthesize replaceButton=_replaceButton;
@property(nonatomic) __weak MSPopoverDismisserView *replacementColorPopoverDismissingView; // @synthesize replacementColorPopoverDismissingView=_replacementColorPopoverDismissingView;
@property(nonatomic) __weak NSButton *keepAlphaOfOriginalColorButton; // @synthesize keepAlphaOfOriginalColorButton=_keepAlphaOfOriginalColorButton;
@property(nonatomic) __weak MSStylePartPreviewButton *replacementColorButton; // @synthesize replacementColorButton=_replacementColorButton;
@property(nonatomic) __weak MSStylePartPreviewButton *originalColorButton; // @synthesize originalColorButton=_originalColorButton;
@property(nonatomic) __weak NSButton *ignoreAlphaWhenMatchingOriginalColorButton; // @synthesize ignoreAlphaWhenMatchingOriginalColorButton=_ignoreAlphaWhenMatchingOriginalColorButton;
@property(nonatomic) __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void).cxx_destruct;
- (void)confirm:(id)arg1;
- (void)disableUI;
- (void)validateUI;
- (void)windowDidBecomeKey:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)colorInspectorShouldAdjustInspectorToPopover:(id)arg1;
- (void)validateReplaceButton;
- (void)colorInspector:(id)arg1 didChangeToColor:(id)arg2;
- (void)pickReplacementColor:(id)arg1;
- (BOOL)dismissReplacementColorPopover;
- (void)validateReplacementColorButton;
- (void)setOriginalColor:(id)arg1;
- (void)commitOriginalColor:(id)arg1;
- (void)pickOriginalColor:(id)arg1;
- (void)validateOriginalColorButton;
- (void)refreshOriginalColorButtonFromSelection;
- (void)menuNeedsUpdate:(id)arg1;
- (void)updateFrequentColorsMenu;
- (void)toggleIgnoreAlpha:(id)arg1;
- (id)currentDocument;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

