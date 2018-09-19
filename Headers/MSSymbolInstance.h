//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSSymbolInstance.h"

@class MSImmutableSymbolMaster, MSOverrideRepresentationContainer, NSArray, NSDictionary, NSSet;

@interface MSSymbolInstance : _MSSymbolInstance
{
    MSOverrideRepresentationContainer *_overrideContainer;
    long long _masterRefreshCounter;
}

+ (id)keyPathsForValuesAffectingPreviewTemplateImages;
@property(nonatomic) long long masterRefreshCounter; // @synthesize masterRefreshCounter=_masterRefreshCounter;
- (void).cxx_destruct;
- (BOOL)invalidateIfAffectedBySymbolMastersIn:(id)arg1;
- (void)applyOverride:(id)arg1 document:(id)arg2;
- (void)removeShareableObjectsFromOverrides:(id)arg1;
- (void)applyOverrides:(id)arg1 document:(id)arg2;
- (void)setValue:(id)arg1 forOverridePoint:(id)arg2;
- (void)prepareOverrideMappingForPoint:(id)arg1 withSymbolMapTable:(id)arg2 attributeMapTable:(id)arg3;
- (void)mapOverridesUnderOverridePoint:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
- (void)mapOverrides:(id)arg1 forOverridePoint:(id)arg2;
- (void)internalSetValue:(id)arg1 forOverridePointNamed:(id)arg2;
- (id)availableOverridesUnderPoint:(id)arg1;
- (void)updateOverridesWithObjectIDMap:(id)arg1;
@property(readonly, nonatomic) NSSet *influencingSymbolIDs;
- (BOOL)canScale;
- (BOOL)canBeTransformed;
- (struct CGSize)naturalSize;
- (void)multiplyBy:(double)arg1;
- (double)scale;
- (void)resetSizeToMaster;
- (void)updateOverrides:(id)arg1 withMapping:(id)arg2;
- (void)resizeInstanceToFitSymbol:(id)arg1;
- (BOOL)shouldWrapDetachedSymbolMasterInGroup:(id)arg1;
- (id)detachByReplacingWithGroup;
- (unsigned long long)numberOfVisibleCells;
- (void)invalidateImmutableObject;
- (void)changeInstanceToSymbol:(id)arg1;
- (BOOL)isInstanceForMaster:(id)arg1;
- (id)symbolID;
@property(readonly, nonatomic) MSOverrideRepresentationContainer *overrideContainer; // @synthesize overrideContainer=_overrideContainer;
@property(readonly, nonatomic) MSImmutableSymbolMaster *modifiedMaster;
- (id)symbolMaster;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (BOOL)shouldRefreshOverlayForFlows;
- (id)inspectorSections;
- (id)inspectorViewControllerItemClasses;
- (id)pathForHoverInBounds;
- (struct MSModelObject *)sharedMaster;
- (unsigned long long)shareableObjectType;
- (id)styleForBooleanOperation;
- (id)childrenForLayerList;
- (BOOL)isExpanded;
- (BOOL)expandableInLayerList;
- (id)unselectedPreviewTemplateImage;
- (id)selectedPreviewTemplateImage;
- (id)replaceWithInstanceOfSymbol:(id)arg1;
- (BOOL)previewShouldIndicateSharedStyle;
- (BOOL)canMoveToLayer:(id)arg1 beforeLayer:(id)arg2;
- (id)selectionHitTest:(struct CGPoint)arg1 options:(unsigned long long)arg2 zoomValue:(double)arg3;
@property(copy, nonatomic) NSDictionary *overrides;
@property(readonly, nonatomic) NSArray *availableOverrides;
@property(readonly, nonatomic) NSArray *overridePoints;
- (id)sharedStylesReferencedInDocument:(id)arg1;
- (id)setupWithLayerBuilderDictionary:(id)arg1;

@end

