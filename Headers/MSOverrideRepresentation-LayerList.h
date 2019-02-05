//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSOverrideRepresentation.h>

#import "BCOutlineViewNode-Protocol.h"
#import "MSInterfaceImageOwner-Protocol.h"
#import "MSLayerListLayerExtensions-Protocol.h"

@class MSTintedImages, NSString;

@interface MSOverrideRepresentation (LayerList) <BCOutlineViewNode, MSLayerListLayerExtensions, MSInterfaceImageOwner>
- (void)updateLayerListPreviewIfRequiredWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)moveToLayer:(id)arg1 beforeLayer:(id)arg2;
- (void)handleBadgeClickWithAltState:(BOOL)arg1;
- (BOOL)canMoveToLayer:(id)arg1 beforeLayer:(id)arg2;
- (BOOL)canCopyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (void)addMastersForInstancesToDocument:(id)arg1;
@property(readonly, nonatomic) BOOL previewShouldIndicateSharedStyle;
@property(readonly, nonatomic) BOOL isExportableViaDragAndDrop;
@property(readonly, nonatomic) BOOL containedByHiddenAncestorNode;
@property(readonly, nonatomic) BOOL lockedOnCanvas;
@property(readonly, nonatomic) BOOL hiddenOnCanvas;
@property(readonly, nonatomic) BOOL isSelectedInLayerList;
- (BOOL)selfOrChildrenSelected;
@property(readonly, nonatomic) BOOL expandableInLayerList;
- (id)badgeMenuConfigurator;
- (id)maskIconWithState:(unsigned long long)arg1;
- (id)previewIconWithState:(unsigned long long)arg1;
@property(readonly, nonatomic) MSTintedImages *badgeImages;
@property(readonly, nonatomic) BOOL hasBadgedIcon;
- (BOOL)hasHighlight;
@property(readonly, nonatomic) BOOL isEditableInLayerList;
@property(readonly, nonatomic) BOOL isActive;
@property(retain, nonatomic) NSString *nodeName;
@property(readonly, nonatomic) unsigned long long filterTypeMask;
@property(readonly, nonatomic) unsigned long long displayType;
@property(readonly, nonatomic) NSString *outlineViewNodeIdentifier;
@property(readonly, nonatomic) NSString *interfaceImageIdentifier;
@property(readonly, nonatomic) __weak id cacheOwner;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isExpanded;
@property(nonatomic) long long layerListExpandedType;
@property(readonly) Class superclass;
@end

