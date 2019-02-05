//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSImmutableStyledLayer.h>

#import <SketchModel/MSStyledLayer-Protocol.h>

@class NSString;

@interface MSImmutableStyledLayer : _MSImmutableStyledLayer <MSStyledLayer>
{
}

+ (unsigned long long)traits;
+ (void)initialize;
+ (id)filledSquareRoundedDecoration;
+ (id)filledSquareDecoration;
+ (id)openSquareDecoration;
+ (id)filledCircleDecoration;
+ (id)openCircleDecoration;
+ (id)lineDecoration;
+ (id)openArrowDecoration;
+ (id)filledArrowDecoration;
+ (id)filledArrowRoundedDecoration;
+ (id)roundedPath:(id)arg1 cornerRadius:(double)arg2;
+ (id)pathForDecorationType:(unsigned long long)arg1;
+ (void)cacheDecorations;
+ (id)transformedPath:(id)arg1 atPoint:(struct CGPoint)arg2 rotation:(double)arg3 scale:(struct CGSize)arg4 flipped:(BOOL)arg5;
+ (id)adjustPath:(id)arg1 forDecotationType:(unsigned long long)arg2 strokeWidth:(double)arg3 scale:(struct CGSize)arg4;
+ (id)orderedIntersectionsForContour:(id)arg1 withSegment:(id)arg2;
+ (id)intersectionPolygonForDecoration:(id)arg1 atPoint:(struct CGPoint)arg2 scale:(double)arg3 strokeWidth:(double)arg4;
+ (id)bezierPathForEndDecorationOnPath:(id *)arg1 strokeWidth:(double)arg2 lineCap:(int)arg3 decorationType:(unsigned long long)arg4;
+ (id)bezierPathForStartDecorationOnPath:(id *)arg1 strokeWidth:(double)arg2 lineCap:(int)arg3 decorationType:(unsigned long long)arg4;
+ (struct CGSize)scaleForDecoration:(unsigned long long)arg1 stokeWidth:(double)arg2;
@property(readonly, nonatomic) BOOL shadowsFollowRotation;
- (BOOL)hasMarkers;
@property(readonly, nonatomic) BOOL allowsBlur;
- (struct CGRect)absoluteInfluenceRectForAncestorGroups:(id)arg1 document:(id)arg2;
- (id)decoratedPathInBoundsInDocument:(id)arg1 asSubpath:(BOOL)arg2;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
- (struct BCEdgePaddings)influenceRectEdgePaddingsThatDoNotCascade;
- (void)applyPropertiesToBezier:(id)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;
- (BOOL)shouldBeIncludedInParentPath;
- (id)overridePointAttributeNamesForOverridePropertyMigration;
- (id)bezierPathForEndDecorationOnPath:(id *)arg1;
- (id)bezierPathForStartDecorationOnPath:(id *)arg1;
- (unsigned long long)roundDecorationTypeIfNecessary:(unsigned long long)arg1;
- (void)updateSharedStyleIDFromMigration:(id)arg1;
- (id)defaultValueForOverridePoint:(id)arg1 relatedOverrides:(id)arg2 document:(id)arg3;
- (id)overridePointsWithParent:(id)arg1 overrides:(id)arg2 document:(id)arg3;
- (id)imageFillForOverridePoint:(id)arg1 applyingStyleOverridesFrom:(id)arg2 inDocument:(id)arg3;
- (BOOL)canOverridePoint:(id)arg1 withAncestors:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly) unsigned long long hash;
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

