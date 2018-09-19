//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface MSBezierBuilder : NSObject
{
    BOOL _pathShouldClose;
    long long _pointRadiusBehaviour;
    NSArray *_points;
    NSMutableDictionary *_filletCache;
    struct CGRect _rect;
}

+ (id)bezierPathForSegmentAtIndex:(unsigned long long)arg1 inPath:(id)arg2 inRect:(struct CGRect)arg3;
+ (id)pathWithPoints:(id)arg1 inRect:(struct CGRect)arg2 shouldClose:(BOOL)arg3 pointRadiusBehaviour:(long long)arg4;
+ (id)bezierPathWithPoints:(id)arg1 inRect:(struct CGRect)arg2 shouldClose:(BOOL)arg3 pointRadiusBehaviour:(long long)arg4;
@property(retain, nonatomic) NSMutableDictionary *filletCache; // @synthesize filletCache=_filletCache;
@property(nonatomic) BOOL pathShouldClose; // @synthesize pathShouldClose=_pathShouldClose;
@property(retain, nonatomic) NSArray *points; // @synthesize points=_points;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(readonly, nonatomic) long long pointRadiusBehaviour; // @synthesize pointRadiusBehaviour=_pointRadiusBehaviour;
- (void).cxx_destruct;
- (void)addCurveFromPointAtIndex:(unsigned long long)arg1 toPointAtIndex:(unsigned long long)arg2 inArray:(id)arg3 inRect:(struct CGRect)arg4 includingTrailingArc:(BOOL)arg5 toBezierPath:(id)arg6 orCGPath:(struct CGPath *)arg7;
- (void)addLineToPointIfNecessary:(struct CGPoint)arg1 toBezierPath:(id)arg2 orCGPath:(struct CGPath *)arg3;
- (id)filletAtIndex:(unsigned long long)arg1 inPointArray:(id)arg2 rect:(struct CGRect)arg3;
- (void)buildV1BezierPath:(id)arg1 orCGPath:(struct CGPath *)arg2;
- (void)extendPath:(id)arg1 orCGPath:(struct CGPath *)arg2 toPoint:(struct CGPoint)arg3 controlPoint1:(struct CGPoint)arg4 controlPoint2:(struct CGPoint)arg5;
- (void)appendCurveFromPoint:(id)arg1 toPoint:(id)arg2 toBezierPath:(id)arg3 orCGPath:(struct CGPath *)arg4;
- (id)bezierPathFromCurvePoint:(id)arg1 toPoint:(id)arg2;
- (void)buildV0BezierPath:(id)arg1 orCGPath:(struct CGPath *)arg2;
- (void)buildBezierPath:(id)arg1 orCGPath:(struct CGPath *)arg2;
- (id)_bezierPath;
- (id)_path;
- (id)path;
- (id)bezierPath;
- (BOOL)treatCurvePointAsRounded:(id)arg1;
- (BOOL)isStraightLine;
- (id)init;
- (id)initWithPointRadiusBehavior:(long long)arg1;

@end

