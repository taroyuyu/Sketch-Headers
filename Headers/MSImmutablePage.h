//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSImmutablePage.h>

#import <SketchModel/MSImmutableRootLayer-Protocol.h>
#import <SketchModel/MSWebExportableRootLayer-Protocol.h>

@class MSArtboardPreset, MSImmutableColor, MSImmutableLayerGroup, MSImmutableLayoutGrid, MSImmutableRulerData, MSImmutableSimpleGrid, NSArray, NSSet, NSString;
@protocol MSImmutableRootLayer;

@interface MSImmutablePage : _MSImmutablePage <MSWebExportableRootLayer, MSImmutableRootLayer>
{
    MSImmutableLayerGroup<MSImmutableRootLayer> *_currentRoot;
    NSSet *_selectedLayerIDs;
}

+ (unsigned long long)traitsForPropertyName:(id)arg1;
+ (unsigned long long)traits;
+ (id)defaultName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *selectedLayerIDs; // @synthesize selectedLayerIDs=_selectedLayerIDs;
@property(readonly, nonatomic) NSArray *symbols;
@property(readonly, nonatomic) BOOL hasArtboards;
@property(readonly, nonatomic) NSArray *artboards;
- (struct CGRect)contentBoundsForDocument:(id)arg1;
@property(readonly, nonatomic) struct CGPoint rulerBase;
- (id)archiveReferenceIdentifier_bc;
- (struct CGPoint)origin;
- (struct CGRect)rect;
@property(readonly, nonatomic) MSImmutableLayerGroup<MSImmutableRootLayer> *currentRoot;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (void)performInitWithMutableModelObject:(id)arg1;
@property(readonly, nonatomic) BOOL containsFixedLayers;
@property(readonly, nonatomic) MSArtboardPreset *preset;
- (struct CGRect)rectInFixedViewportWithRect:(struct CGRect)arg1 fromFixingLayer:(id)arg2;
- (unsigned long long)webExportLayerBehaviorWithRect:(struct CGRect)arg1 fromLayer:(id)arg2;
@property(readonly, nonatomic) BOOL isFlowHome;
@property(readonly, nonatomic) BOOL webExporterShouldIncludeBackgroundColor;
@property(readonly, nonatomic) MSImmutableColor *webExporterBackgoundColor;
- (void)migratePropertiesFromV79OrEarlierWithUnarchiver:(id)arg1;
- (BOOL)shouldDiffSublayersForDifferingLayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) MSImmutableSimpleGrid *grid;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) MSImmutableRulerData *horizontalRulerData;
@property(readonly, copy, nonatomic) MSImmutableLayoutGrid *layout;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) MSImmutableRulerData *verticalRulerData;

@end

