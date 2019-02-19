//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSLayer.h>

#import "MSLayerListLayerExtensions-Protocol.h"

@class MSTintedImages, NSString;

@interface MSLayer (LayerList) <MSLayerListLayerExtensions>
+ (id)keyPathsForValuesAffectingBadgeMap;
+ (id)keyPathsForValuesAffectingNodeName;
- (id)childrenForLayerList;
@property(readonly, nonatomic) BOOL isExportableViaDragAndDrop;
- (id)cloneDictionaryReplacingImages:(id)arg1;
- (void)addMastersForInstancesToDocument:(id)arg1;
- (void)moveToLayer:(id)arg1 beforeLayer:(id)arg2;
- (BOOL)isMasked;
- (void)updateLayerListPreviewIfRequiredWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleBadgeClickWithAltState:(BOOL)arg1;
- (BOOL)canCopyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (BOOL)canMoveToLayer:(id)arg1 beforeLayer:(id)arg2;
@property(readonly, nonatomic) BOOL lockedOnCanvas;
@property(readonly, nonatomic) BOOL containedByHiddenAncestorNode;
@property(readonly, nonatomic) BOOL hiddenOnCanvas;
@property(readonly, nonatomic) BOOL isSelectedInLayerList;
@property(readonly, nonatomic) BOOL expandableInLayerList;
@property(readonly, nonatomic) NSString *outlineViewNodeIdentifier;
- (BOOL)validateNodeName:(id *)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSString *nodeName;
- (id)badgeMenuConfigurator;
- (id)maskIconWithState:(unsigned long long)arg1;
- (id)previewIconWithState:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL previewShouldIndicateSharedStyle;
@property(readonly, nonatomic) MSTintedImages *badgeImages;
@property(readonly, nonatomic) BOOL hasBadgedIcon;
@property(readonly, nonatomic) BOOL isEditableInLayerList;
@property(readonly, nonatomic) BOOL isActive;
@property(readonly, nonatomic) unsigned long long filterTypeMask;
@property(readonly, nonatomic) unsigned long long displayType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isExpanded;
@property(nonatomic) long long layerListExpandedType;
@property(readonly) Class superclass;
@end

