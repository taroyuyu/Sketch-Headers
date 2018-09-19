//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBBezierCurve;

@interface FBTangentIterator : NSObject
{
    double _leftBaseOffset;
    double _rightBaseOffset;
    FBBezierCurve *_leftCurve;
    FBBezierCurve *_rightCurve;
    double _offset;
    double _offsetStep;
    double _offsetMaximum;
}

+ (id)tangentIteratorWithIntersection:(id)arg1 onCurve:(id)arg2;
@property(nonatomic) double offsetMaximum; // @synthesize offsetMaximum=_offsetMaximum;
@property(nonatomic) double offsetStep; // @synthesize offsetStep=_offsetStep;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(retain, nonatomic) FBBezierCurve *rightCurve; // @synthesize rightCurve=_rightCurve;
@property(retain, nonatomic) FBBezierCurve *leftCurve; // @synthesize leftCurve=_leftCurve;
- (void).cxx_destruct;
- (void)updateCurves;
@property(readonly, nonatomic) double rightOffset;
@property(readonly, nonatomic) double leftOffset;
- (BOOL)next:(struct CGPoint [2])arg1;
- (void)sync:(id)arg1;
- (void)commonInit;
- (id)initWithIntersection:(id)arg1 onCurve:(id)arg2;

@end

