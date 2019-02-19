//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSStylePartInspectorItem.h"

#import "MSInspectorValueAdaptorDelegate-Protocol.h"

@class MSMathInspectorValueAdaptor, MSUpDownTextField, NSMenuItem, NSPopUpButton, NSSlider, NSString;

@interface MSBaseBlurInspectorItem : MSStylePartInspectorItem <MSInspectorValueAdaptorDelegate>
{
    MSUpDownTextField *_radiusField;
    NSSlider *_radiusSlider;
    NSPopUpButton *_blurPopUp;
    NSMenuItem *_backgroundBlurMenuItem;
    NSMenuItem *_multipleBlursMenuItem;
    MSMathInspectorValueAdaptor *_radiusAdapter;
}

@property(retain, nonatomic) MSMathInspectorValueAdaptor *radiusAdapter; // @synthesize radiusAdapter=_radiusAdapter;
@property(retain, nonatomic) NSMenuItem *multipleBlursMenuItem; // @synthesize multipleBlursMenuItem=_multipleBlursMenuItem;
@property(retain, nonatomic) NSMenuItem *backgroundBlurMenuItem; // @synthesize backgroundBlurMenuItem=_backgroundBlurMenuItem;
@property(retain, nonatomic) NSPopUpButton *blurPopUp; // @synthesize blurPopUp=_blurPopUp;
@property(retain, nonatomic) NSSlider *radiusSlider; // @synthesize radiusSlider=_radiusSlider;
@property(retain, nonatomic) MSUpDownTextField *radiusField; // @synthesize radiusField=_radiusField;
- (void).cxx_destruct;
- (long long)popUpMenuIndexFromBlurType:(unsigned long long)arg1;
- (unsigned long long)blurTypeFromPopUpMenuIndex:(long long)arg1;
- (void)updateDisplayedValues;
- (void)menuNeedsUpdate:(id)arg1;
- (void)blurPopUpAction:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

