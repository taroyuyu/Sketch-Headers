//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSCustomShapeItem.h"

#import "MSInspectorMathValueAdaptorDelegate-Protocol.h"

@class MSInlineUpDownNanoTextField, MSMathInspectorValueAdaptor, NSArrayController, NSString;

@interface MSStarShapeItem : MSCustomShapeItem <MSInspectorMathValueAdaptorDelegate>
{
    NSArrayController *_layersController;
    MSInlineUpDownNanoTextField *_radiusField;
    MSInlineUpDownNanoTextField *_pointsField;
    MSMathInspectorValueAdaptor *_radiusAdaptor;
    MSMathInspectorValueAdaptor *_pointsAdaptor;
}

+ (BOOL)canHandleLayer:(id)arg1;
@property(retain, nonatomic) MSMathInspectorValueAdaptor *pointsAdaptor; // @synthesize pointsAdaptor=_pointsAdaptor;
@property(retain, nonatomic) MSMathInspectorValueAdaptor *radiusAdaptor; // @synthesize radiusAdaptor=_radiusAdaptor;
@property(retain, nonatomic) MSInlineUpDownNanoTextField *pointsField; // @synthesize pointsField=_pointsField;
@property(retain, nonatomic) MSInlineUpDownNanoTextField *radiusField; // @synthesize radiusField=_radiusField;
@property(retain, nonatomic) NSArrayController *layersController; // @synthesize layersController=_layersController;
- (void).cxx_destruct;
- (void)inspectorValueAdaptorDidChangeValue:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

