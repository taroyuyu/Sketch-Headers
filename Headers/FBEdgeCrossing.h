//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBBezierCurve, FBBezierIntersection, FBEdgeOverlapRun;

@interface FBEdgeCrossing : NSObject
{
    BOOL _entry;
    BOOL _processed;
    BOOL _selfCrossing;
    BOOL _suspicious;
    FBBezierCurve *_edge;
    FBEdgeCrossing *_counterpart;
    FBEdgeOverlapRun *_overlapRun;
    unsigned long long _index;
    FBBezierIntersection *_intersection;
}

+ (id)crossingWithIntersection:(id)arg1;
@property(readonly, nonatomic) FBBezierIntersection *intersection; // @synthesize intersection=_intersection;
@property(nonatomic, getter=isSuspicious) BOOL suspicious; // @synthesize suspicious=_suspicious;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) FBEdgeOverlapRun *overlapRun; // @synthesize overlapRun=_overlapRun;
@property(nonatomic, getter=isSelfCrossing) BOOL selfCrossing; // @synthesize selfCrossing=_selfCrossing;
@property(nonatomic, getter=isProcessed) BOOL processed; // @synthesize processed=_processed;
@property(nonatomic, getter=isEntry) BOOL entry; // @synthesize entry=_entry;
@property(nonatomic) __weak FBEdgeCrossing *counterpart; // @synthesize counterpart=_counterpart;
@property(nonatomic) __weak FBBezierCurve *edge; // @synthesize edge=_edge;
- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)description;
- (BOOL)isEqualToEdgeCrossing:(id)arg1;
- (BOOL)isCoincidentWith:(id)arg1;
@property(readonly, nonatomic, getter=isFromCrossingOverlap) BOOL fromCrossingOverlap;
@property(readonly, nonatomic, getter=isAtEnd) BOOL atEnd;
@property(readonly, nonatomic, getter=isAtStart) BOOL atStart;
@property(readonly, nonatomic) __weak FBBezierCurve *rightCurve;
@property(readonly, nonatomic) __weak FBBezierCurve *leftCurve;
@property(readonly, nonatomic) __weak FBBezierCurve *curve;
@property(readonly, nonatomic) struct CGPoint location;
@property(readonly, nonatomic) double parameter;
- (id)previousUsingNonself:(BOOL)arg1;
- (id)nextUsingNonself:(BOOL)arg1;
@property(readonly, nonatomic) __weak FBEdgeCrossing *previous;
@property(readonly, nonatomic) __weak FBEdgeCrossing *next;
@property(readonly, nonatomic) double order;
- (void)removeFromEdge;
- (id)initWithIntersection:(id)arg1;

@end

