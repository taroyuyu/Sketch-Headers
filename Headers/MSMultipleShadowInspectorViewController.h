//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSMultipleColorStylePartInspectorViewController.h"

@class MSTextLabelForUpDownField, NSButton, NSLayoutConstraint;

@interface MSMultipleShadowInspectorViewController : MSMultipleColorStylePartInspectorViewController
{
    NSButton *_addStylePartButton;
    MSTextLabelForUpDownField *_xOffsetField;
    MSTextLabelForUpDownField *_yOffsetField;
    MSTextLabelForUpDownField *_blurRadiusField;
    MSTextLabelForUpDownField *_spreadField;
    NSLayoutConstraint *_buttonsTrailingConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *buttonsTrailingConstraint; // @synthesize buttonsTrailingConstraint=_buttonsTrailingConstraint;
@property(retain, nonatomic) MSTextLabelForUpDownField *spreadField; // @synthesize spreadField=_spreadField;
@property(retain, nonatomic) MSTextLabelForUpDownField *blurRadiusField; // @synthesize blurRadiusField=_blurRadiusField;
@property(retain, nonatomic) MSTextLabelForUpDownField *yOffsetField; // @synthesize yOffsetField=_yOffsetField;
@property(retain, nonatomic) MSTextLabelForUpDownField *xOffsetField; // @synthesize xOffsetField=_xOffsetField;
@property(retain, nonatomic) NSButton *addStylePartButton; // @synthesize addStylePartButton=_addStylePartButton;
- (void).cxx_destruct;
- (id)views;
- (id)inspectorForStyleParts:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)loadViewControllers;
- (BOOL)shouldHideAddStylePartButton;
- (void)prepare;
- (unsigned long long)stylePartType;

@end

