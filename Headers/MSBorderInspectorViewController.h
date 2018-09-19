//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSColorStylePartInspectorViewController.h"

@class MSMathInspectorValueAdaptor, MSUpDownTextField, NSSegmentedControl, NSTextField;

@interface MSBorderInspectorViewController : MSColorStylePartInspectorViewController
{
    NSSegmentedControl *_positionControl;
    MSUpDownTextField *_thicknessField;
    MSMathInspectorValueAdaptor *_thicknessAdaptor;
    NSTextField *_fillTypeLabel;
    NSTextField *_borderPositionLabel;
}

@property(retain, nonatomic) NSTextField *borderPositionLabel; // @synthesize borderPositionLabel=_borderPositionLabel;
@property(retain, nonatomic) NSTextField *fillTypeLabel; // @synthesize fillTypeLabel=_fillTypeLabel;
@property(retain, nonatomic) MSMathInspectorValueAdaptor *thicknessAdaptor; // @synthesize thicknessAdaptor=_thicknessAdaptor;
@property(retain, nonatomic) MSUpDownTextField *thicknessField; // @synthesize thicknessField=_thicknessField;
@property(retain, nonatomic) NSSegmentedControl *positionControl; // @synthesize positionControl=_positionControl;
- (void).cxx_destruct;
- (void)updateUI;
- (void)enableAction:(id)arg1;
- (BOOL)canDrawInnerOrOuterBorders;
- (id)positionPopUpToolTip;
- (void)updateDisplayedValues;
- (void)setStyleParts:(id)arg1;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

