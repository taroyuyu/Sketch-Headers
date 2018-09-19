//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSStylePartPreviewButton.h"

#import "MSColorInspectorDelegate-Protocol.h"

@class BCPopover, MSDocument, NSColor, NSString;

@interface MSColorWell : MSStylePartPreviewButton <MSColorInspectorDelegate>
{
    BOOL _canDisplayPopover;
    NSColor *_initialColor;
    SEL _colorChangedAction;
    id _colorChangedTarget;
    BCPopover *_colorPopover;
    MSDocument *_document;
}

@property(nonatomic) BOOL canDisplayPopover; // @synthesize canDisplayPopover=_canDisplayPopover;
@property(nonatomic) __weak MSDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) BCPopover *colorPopover; // @synthesize colorPopover=_colorPopover;
@property(nonatomic) __weak id colorChangedTarget; // @synthesize colorChangedTarget=_colorChangedTarget;
@property(nonatomic) SEL colorChangedAction; // @synthesize colorChangedAction=_colorChangedAction;
@property(readonly, nonatomic) NSColor *initialColor; // @synthesize initialColor=_initialColor;
- (void).cxx_destruct;
- (void)windowDidResignKey:(id)arg1;
- (void)colorInspector:(id)arg1 didChangeToColor:(id)arg2;
- (void)mouseDown:(id)arg1;
- (void)dismissColorPicker;
- (void)presentColorPicker:(id)arg1;
- (void)prepareWithDocument:(id)arg1 initialColor:(id)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

