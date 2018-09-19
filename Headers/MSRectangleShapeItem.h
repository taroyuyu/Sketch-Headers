//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSCustomShapeItem.h"

#import "MSInspectorMathValueAdaptorDelegate-Protocol.h"
#import "MSLayerChangeObserver-Protocol.h"

@class MSCornerRadiusInspectorValueAdaptor, MSInlineUpDownTextField, NSPopUpButton, NSSlider, NSString;

@interface MSRectangleShapeItem : MSCustomShapeItem <MSInspectorMathValueAdaptorDelegate, MSLayerChangeObserver>
{
    MSInlineUpDownTextField *_radiusField;
    NSSlider *_radiusSlider;
    MSCornerRadiusInspectorValueAdaptor *_radiusAdaptor;
    NSPopUpButton *_curvaturePopup;
}

+ (BOOL)canHandleLayer:(id)arg1;
@property(retain, nonatomic) NSPopUpButton *curvaturePopup; // @synthesize curvaturePopup=_curvaturePopup;
@property(retain, nonatomic) MSCornerRadiusInspectorValueAdaptor *radiusAdaptor; // @synthesize radiusAdaptor=_radiusAdaptor;
@property(retain, nonatomic) NSSlider *radiusSlider; // @synthesize radiusSlider=_radiusSlider;
@property(retain, nonatomic) MSInlineUpDownTextField *radiusField; // @synthesize radiusField=_radiusField;
- (void).cxx_destruct;
- (void)layerDidChange:(id)arg1;
- (void)setLayers:(id)arg1;
- (BOOL)inspectorValueAdaptor:(id)arg1 validateValue:(id)arg2 forModel:(id)arg3 context:(id)arg4;
- (void)inspectorValueAdaptor:(id)arg1 didEncounterError:(id)arg2;
- (void)updateDisplayedValues;
- (void)sliderAction:(id)arg1;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

