//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSShapeGroup.h"

#import "MSLayerPreviewability-Protocol.h"
#import "MSPathLayer-Protocol.h"
#import "MSShapeGroup-Protocol.h"

@class MSPath, NSString;

@interface MSShapeGroup : _MSShapeGroup <MSLayerPreviewability, MSShapeGroup, MSPathLayer>
{
}

+ (struct CGRect)groupBoundsForContainer:(id)arg1;
+ (BOOL)groupBoundsShouldBeIntegral;
+ (id)shapeWithRect:(struct CGRect)arg1;
+ (id)groupWithLayers:(id)arg1;
+ (id)layerWithPath:(id)arg1;
+ (id)styleForBooleanOperation:(id)arg1;
+ (id)shapeWithBooleanOperation:(long long)arg1 onLayers:(id)arg2;
- (BOOL)shouldStripShadowsAndInnerShadow;
- (void)layerDidResizeFromRect:(struct CGRect)arg1 corner:(long long)arg2;
- (BOOL)canContainLayer:(id)arg1;
- (BOOL)canRotate;
- (BOOL)isVerticalLine;
- (BOOL)isHorizontalLine;
- (void)makeLinePixelAligned;
- (BOOL)hasLines;
@property(readonly, nonatomic) BOOL isPartOfClippingMask;
- (void)moveTransformsToChildren;
- (void)reversePath;
- (id)flatten;
- (void)simplify;
@property(nonatomic) BOOL isClosed;
@property(nonatomic) BOOL edited; // @dynamic edited;
- (id)usedStyle;
- (struct CGRect)safeFrameForBezierPath:(id)arg1;
@property(copy, nonatomic) MSPath *pathInFrame; // @dynamic pathInFrame;
@property(readonly, nonatomic) BOOL hasMarkers;
- (void)setStyle:(id)arg1;
- (id)defaultName;
- (BOOL)resizeToFitChildrenWithOption:(long long)arg1;
- (void)object:(id)arg1 didChangeProperty:(id)arg2;
- (void)performInitEmptyObject;
- (BOOL)shouldDrawSelectionStroke;
- (BOOL)canSmartRotate;
- (BOOL)isStraightTriangle;
- (BOOL)shouldFlattenAfterRotate;
- (Class)handlerClass;
- (BOOL)handleDoubleClick;
- (id)inspectorSections;
- (BOOL)supportsInnerOuterBorders;
- (void)changeInnerOuterBordersIfHasOpenPaths;
- (id)interfaceImageIdentifier;
- (id)cacheOwner;
- (id)unselectedPreviewTemplateImage;
- (id)selectedPreviewTemplateImage;
- (id)pathForHoverInBounds;
- (id)styleForBooleanOperation;
- (BOOL)canFlatten;
- (BOOL)canProbablyFlatten;
- (BOOL)hasFlattenablePath;
- (BOOL)hasBooleanOperations;
- (void)cutBezierSegmentAtIndex:(unsigned long long)arg1;
- (BOOL)canCutSegments;
- (BOOL)shouldHitTestOnFill:(id)arg1;
- (BOOL)hitTestAsPath;
- (id)CSSAttributes;
- (id)CSSAttributeString;

// Remaining properties
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
@property(readonly, nonatomic) unsigned long long badgeType;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isLayerExportable;
@property(readonly, nonatomic) BOOL isVisible;
@property(readonly, nonatomic) NSString *objectID;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly, nonatomic) double rotation;
@property(readonly) Class superclass;

@end

