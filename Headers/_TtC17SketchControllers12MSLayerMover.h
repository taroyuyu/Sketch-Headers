//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC17SketchControllers6MSTool.h"

@class MSAlignmentEngineConstraint, NSArray;
@protocol _TtP17SketchControllers30MSLayerMoverSnapTargetProvider_;

@interface _TtC17SketchControllers12MSLayerMover : _TtC17SketchControllers6MSTool
{
    // Error parsing type: , name: items
    // Error parsing type: , name: _geometry
    // Error parsing type: , name: originalLocation
    // Error parsing type: , name: alignmentRectInsets
    // Error parsing type: , name: alignmentSettings
    // Error parsing type: , name: zoomScale
    // Error parsing type: , name: snapTargetProvider
    // Error parsing type: , name: alignmentConstraint
    // Error parsing type: , name: hasChangedArtboard
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)reset;
@property(nonatomic) BOOL hasChangedArtboard; // @synthesize hasChangedArtboard;
- (void)cancel;
- (id)performMoveToLocation:(struct CGPoint)arg1;
- (void)beginWithItems:(id)arg1;
- (void)beginWithLayers:(id)arg1 location:(struct CGPoint)arg2;
- (struct CGRect)alignmentRectInCoordinateSpace:(id)arg1 options:(unsigned long long)arg2;
@property(nonatomic, retain) MSAlignmentEngineConstraint *alignmentConstraint; // @synthesize alignmentConstraint;
@property(nonatomic) __weak id <_TtP17SketchControllers30MSLayerMoverSnapTargetProvider_> snapTargetProvider; // @synthesize snapTargetProvider;
@property(nonatomic) double zoomScale; // @synthesize zoomScale;
@property(nonatomic) struct CGPoint originalLocation; // @synthesize originalLocation;
@property(nonatomic, readonly) struct CGRect bounds;
@property(nonatomic, readonly) struct CGPoint position;
- (struct CGPoint)locationIn:(id)arg1;
@property(nonatomic, copy) NSArray *items; // @synthesize items;

@end

