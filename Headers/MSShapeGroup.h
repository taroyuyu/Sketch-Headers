//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSShapeGroup.h>

#import <SketchModel/MSPathLayer-Protocol.h>
#import <SketchModel/MSShapeGroupProtocol-Protocol.h>

@class MSPath, NSString;

@interface MSShapeGroup : _MSShapeGroup <MSShapeGroupProtocol, MSPathLayer>
{
}

+ (id)shapeWithRect:(struct CGRect)arg1;
+ (id)groupWithLayers:(id)arg1;
+ (id)layerWithPath:(id)arg1;
- (BOOL)shouldStripShadowsAndInnerShadow;
- (BOOL)canContainLayer:(id)arg1;
- (BOOL)canRotate;
- (BOOL)isVerticalLine;
- (BOOL)isHorizontalLine;
- (BOOL)hasLines;
@property(readonly, nonatomic) BOOL isPartOfClippingMask;
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
- (struct CGRect)optimalBoundingBox;
- (BOOL)groupBoundsShouldBeIntegral;
- (BOOL)fixGeometryWithOptions:(long long)arg1;
- (void)object:(id)arg1 didChangeProperty:(id)arg2;
- (BOOL)shouldHitTestOnFill:(id)arg1;
- (BOOL)hitTestAsPath;
- (id)CSSAttributeString;

// Remaining properties
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
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

