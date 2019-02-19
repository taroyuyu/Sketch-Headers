//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSCustomShapeItem.h"

#import "MSInspectorMathValueAdaptorDelegate-Protocol.h"

@class MSMathInspectorValueAdaptor, MSUpDownTextField, NSArrayController, NSString;

@interface MSPolygonShapeItem : MSCustomShapeItem <MSInspectorMathValueAdaptorDelegate>
{
    MSMathInspectorValueAdaptor *_sidesAdaptor;
    NSArrayController *_layersController;
    MSUpDownTextField *_sidesField;
}

+ (BOOL)canHandleLayer:(id)arg1;
@property(retain, nonatomic) MSUpDownTextField *sidesField; // @synthesize sidesField=_sidesField;
@property(retain, nonatomic) NSArrayController *layersController; // @synthesize layersController=_layersController;
@property(retain, nonatomic) MSMathInspectorValueAdaptor *sidesAdaptor; // @synthesize sidesAdaptor=_sidesAdaptor;
- (void).cxx_destruct;
- (void)inspectorValueAdaptorDidChangeValue:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

