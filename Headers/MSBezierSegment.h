//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface MSBezierSegment : NSObject
{
    double _lineLength;
    double _arcLength;
    struct CGRect _bounds;
    BOOL _looksLikeALine;
    BOOL _lineLengthCached;
    BOOL _arcLengthCached;
    BOOL _boundsCached;
    BOOL _looksLikeALineCached;
    unsigned long long _segmentType;
    NSSet *_xAxisRoots;
    NSSet *_yAxisRoots;
    NSSet *_inflectionOffsets;
    MSBezierSegment *_derivative;
    struct CGPoint _endPoint1;
    struct CGPoint _endPoint2;
    struct CGPoint _controlPoint1;
    struct CGPoint _controlPoint2;
}

+ (id)cubicSegmentWithEndPoint1:(struct CGPoint)arg1 endPoint2:(struct CGPoint)arg2 controlPoint1:(struct CGPoint)arg3 controlPoint2:(struct CGPoint)arg4;
+ (id)quadraticSegmentWithEndPoint1:(struct CGPoint)arg1 endPoint2:(struct CGPoint)arg2 controlPoint:(struct CGPoint)arg3;
+ (id)lineSegmentWithEndPoint1:(struct CGPoint)arg1 endPoint2:(struct CGPoint)arg2;
@property(retain, nonatomic) MSBezierSegment *derivative; // @synthesize derivative=_derivative;
@property(retain, nonatomic) NSSet *inflectionOffsets; // @synthesize inflectionOffsets=_inflectionOffsets;
@property(retain, nonatomic) NSSet *yAxisRoots; // @synthesize yAxisRoots=_yAxisRoots;
@property(retain, nonatomic) NSSet *xAxisRoots; // @synthesize xAxisRoots=_xAxisRoots;
@property(readonly, nonatomic) struct CGPoint controlPoint2; // @synthesize controlPoint2=_controlPoint2;
@property(readonly, nonatomic) struct CGPoint controlPoint1; // @synthesize controlPoint1=_controlPoint1;
@property(readonly, nonatomic) struct CGPoint endPoint2; // @synthesize endPoint2=_endPoint2;
@property(readonly, nonatomic) struct CGPoint endPoint1; // @synthesize endPoint1=_endPoint1;
@property(readonly, nonatomic) unsigned long long segmentType; // @synthesize segmentType=_segmentType;
- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)description;
- (id)repr;
- (id)bezierPath;
- (BOOL)isEqualToBezierSegment:(id)arg1;
- (struct CGRect)bounds;
@property(readonly, nonatomic) double flatness;
- (id)normalizedSegment;
@property(readonly, nonatomic) double curviness;
- (id)reversedSegment;
- (id)representationUsingType:(unsigned long long)arg1;
- (id)cubicRepresentation;
- (id)quadraticRepresentation;
- (id)lineRepresentation;
- (id)segmentWithInset:(double)arg1;
- (id)segmentsWithFlatness:(double)arg1;
- (id)segmentWithTransform:(struct CGAffineTransform)arg1;
- (id)segmentByMovingPointAtOffset:(double)arg1 toLocation:(struct CGPoint)arg2;
@property(readonly, nonatomic) struct CGAffineTransform transformForXAxisAlignment;
- (id)segmentFromOffset:(double)arg1;
- (id)segmentToOffset:(double)arg1;
- (id)intersectionsWithSegment:(id)arg1;
- (id)offsetsOfIntersectionsWithTangent:(struct MSLine)arg1;
- (double)offsetForNormalToPoint:(struct CGPoint)arg1;
- (double)curvatureAtOffset:(double)arg1;
- (double)curvatureAtEndPoint2;
- (double)curvatureAtEndPoint1;
- (double)curvatureFromPoint1:(struct CGPoint)arg1 point2:(struct CGPoint)arg2 point3:(struct CGPoint)arg3;
- (struct CGPoint)pointAtOffset:(double)arg1;
- (struct MSLine)tangentAtOffset:(double)arg1;
- (void)tanget:(struct MSLine *)arg1 andPoint:(struct CGPoint *)arg2 atOffset:(double)arg3;
- (void)quadraticDeCasteljauAt:(double)arg1 points:(struct CGPoint *)arg2;
- (void)cubicDeCasteljauAt:(double)arg1 points:(struct CGPoint *)arg2;
@property(readonly, nonatomic) struct MSLineSegment lineSegment;
@property(readonly, nonatomic) BOOL isAPoint;
@property(readonly, nonatomic) BOOL looksLikeALine;
@property(readonly, nonatomic) double arcLength;
- (double)arcLengthWithSegments:(unsigned long long)arg1;
@property(readonly, nonatomic) double lineLength;
- (id)segmentMirroredAtOffset:(double)arg1;
- (id)segmentWithEndPoint2:(struct CGPoint)arg1;
- (id)segmentWithEndPoint1:(struct CGPoint)arg1;
- (id)initWithEndPoint1:(struct CGPoint)arg1 endPoint2:(struct CGPoint)arg2 controlPoint1:(struct CGPoint)arg3 controlPoint2:(struct CGPoint)arg4;
- (id)initWithEndPoint1:(struct CGPoint)arg1 endPoint2:(struct CGPoint)arg2 controlPoint:(struct CGPoint)arg3;
- (id)initWithEndPoint1:(struct CGPoint)arg1 endPoint2:(struct CGPoint)arg2;
- (id)segmentBySmoothingEndPoints:(double)arg1 decay:(double)arg2;

@end

