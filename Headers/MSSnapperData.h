//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSMeasurementDrawing, MSSnapItem, MSSnappingAccumulator, MSSnappingSession, NSNumberFormatter;

@interface MSSnapperData : NSObject
{
    MSSnappingSession *_snappingSession;
    MSSnappingAccumulator *_xAxisAccumulator;
    MSSnappingAccumulator *_yAxisAccumulator;
    NSNumberFormatter *_numberFormatter;
    MSMeasurementDrawing *_drawingHelper;
}

@property(retain, nonatomic) MSMeasurementDrawing *drawingHelper; // @synthesize drawingHelper=_drawingHelper;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(readonly, nonatomic) MSSnappingAccumulator *yAxisAccumulator; // @synthesize yAxisAccumulator=_yAxisAccumulator;
@property(readonly, nonatomic) MSSnappingAccumulator *xAxisAccumulator; // @synthesize xAxisAccumulator=_xAxisAccumulator;
@property(readonly, nonatomic) MSSnappingSession *snappingSession; // @synthesize snappingSession=_snappingSession;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)drawSpacingRect:(struct CGRect)arg1 zoomScale:(double)arg2 coordinateSpace:(id)arg3;
- (void)drawSpacingSnap:(id)arg1 zoomScale:(double)arg2 coordinateSpace:(id)arg3;
- (void)drawDimensionSnap:(id)arg1 zoomScale:(double)arg2;
- (void)drawSnappedDimension:(id)arg1 zoomScale:(double)arg2;
- (void)drawEdgeSnap:(id)arg1 inCoordinateSpace:(id)arg2 zoomScale:(double)arg3;
- (void)drawAccumulator:(id)arg1 inLayer:(id)arg2 zoomScale:(double)arg3;
- (void)drawForGroup:(id)arg1 zoomScale:(double)arg2;
- (void)addSpacingMeasurementsForEdgeSnaps;
- (void)resetEdgeSnapsForAxis:(unsigned long long)arg1;
- (void)addEdgeSnap:(id)arg1;
@property(readonly) unsigned long long spacingAxes;
- (void)addSpacingSnap:(id)arg1;
- (id)firstSpacingSnapForAxis:(unsigned long long)arg1;
@property(readonly) unsigned long long dimensionAxes;
- (void)addDimensionSnap:(id)arg1;
- (id)firstDimensionSnapForAxis:(unsigned long long)arg1;
- (id)accumulatorForAxis:(unsigned long long)arg1;
@property(readonly, nonatomic) MSSnapItem *item;
- (id)initWithSnappingSession:(id)arg1;
- (id)init;

@end

