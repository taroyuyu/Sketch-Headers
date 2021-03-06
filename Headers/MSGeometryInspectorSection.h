//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSBaseInspectorSection.h"

@class MSArtboardPositionInspectorItem, MSArtboardPresetInspectorItem, MSArtboardSizeInspectorItem, MSBitmapResizeToOriginalItem, MSLineEndpointInspectorItem1, MSLineEndpointInspectorItem2, MSLineTransformInspectorItem, MSPaddingInspectorItem, MSPositionInspectorItem, MSSizeInspectorItem, _TtC6Sketch22MSSpacingInspectorItem;

@interface MSGeometryInspectorSection : MSBaseInspectorSection
{
    BOOL _insetSeparator;
    MSPositionInspectorItem *_positionItem;
    MSArtboardPositionInspectorItem *_artboardPositionItem;
    MSSizeInspectorItem *_sizeItem;
    MSArtboardSizeInspectorItem *_artboardSizeItem;
    MSArtboardPresetInspectorItem *_artboardPresetsItem;
    MSLineTransformInspectorItem *_lineTransformItem;
    MSLineEndpointInspectorItem1 *_lineEndItem1;
    MSLineEndpointInspectorItem2 *_lineEndItem2;
    MSBitmapResizeToOriginalItem *_imageOriginalSizeItem;
    _TtC6Sketch22MSSpacingInspectorItem *_layerSpacingItem;
    MSPaddingInspectorItem *_paddingItem1;
    MSPaddingInspectorItem *_paddingItem2;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL insetSeparator; // @synthesize insetSeparator=_insetSeparator;
@property(retain, nonatomic) MSPaddingInspectorItem *paddingItem2; // @synthesize paddingItem2=_paddingItem2;
@property(retain, nonatomic) MSPaddingInspectorItem *paddingItem1; // @synthesize paddingItem1=_paddingItem1;
@property(readonly, nonatomic) _TtC6Sketch22MSSpacingInspectorItem *layerSpacingItem; // @synthesize layerSpacingItem=_layerSpacingItem;
@property(retain, nonatomic) MSBitmapResizeToOriginalItem *imageOriginalSizeItem; // @synthesize imageOriginalSizeItem=_imageOriginalSizeItem;
@property(retain, nonatomic) MSLineEndpointInspectorItem2 *lineEndItem2; // @synthesize lineEndItem2=_lineEndItem2;
@property(retain, nonatomic) MSLineEndpointInspectorItem1 *lineEndItem1; // @synthesize lineEndItem1=_lineEndItem1;
@property(retain, nonatomic) MSLineTransformInspectorItem *lineTransformItem; // @synthesize lineTransformItem=_lineTransformItem;
@property(retain, nonatomic) MSArtboardPresetInspectorItem *artboardPresetsItem; // @synthesize artboardPresetsItem=_artboardPresetsItem;
@property(retain, nonatomic) MSArtboardSizeInspectorItem *artboardSizeItem; // @synthesize artboardSizeItem=_artboardSizeItem;
@property(retain, nonatomic) MSSizeInspectorItem *sizeItem; // @synthesize sizeItem=_sizeItem;
@property(retain, nonatomic) MSArtboardPositionInspectorItem *artboardPositionItem; // @synthesize artboardPositionItem=_artboardPositionItem;
@property(retain, nonatomic) MSPositionInspectorItem *positionItem; // @synthesize positionItem=_positionItem;
- (struct NSEdgeInsets)separatorInsets;
- (BOOL)hasSliceLayer;
- (BOOL)hasArtboardLayer;
- (BOOL)hasOnlyImageLayers;
- (BOOL)hasOnlyArtboardAndSliceLayers;
- (BOOL)hasOnlySliceLayers;
- (BOOL)hasOnlyArtboardLayers;
- (BOOL)hasOnlyLineShapeLayers;
- (void)updateItems;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

