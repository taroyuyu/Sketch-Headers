//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSShapeChangeContext, NSIndexPath;

@interface MSVectorHandleStateDecider : NSObject
{
    long long _visibilityAroundSelectedHandles;
    long long _visibilityAroundHighlight;
    MSShapeChangeContext *_selectionContext;
    NSIndexPath *_indexPathForHighlightedComponent;
}

@property(copy, nonatomic) NSIndexPath *indexPathForHighlightedComponent; // @synthesize indexPathForHighlightedComponent=_indexPathForHighlightedComponent;
@property(copy, nonatomic) MSShapeChangeContext *selectionContext; // @synthesize selectionContext=_selectionContext;
@property(nonatomic) long long visibilityAroundHighlight; // @synthesize visibilityAroundHighlight=_visibilityAroundHighlight;
@property(nonatomic) long long visibilityAroundSelectedHandles; // @synthesize visibilityAroundSelectedHandles=_visibilityAroundSelectedHandles;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)indexPathOfHandleAtPoint:(struct CGPoint)arg1 tolerance:(double)arg2;
- (unsigned long long)stateOfCurvePointAtIndexPath:(id)arg1 curveToState:(unsigned long long *)arg2 curveFromState:(unsigned long long *)arg3;
- (BOOL)isCurveAdjustmentHandleVisibleDueToHighlightedHandle:(id)arg1;
- (BOOL)isCurveAdjustmentHandleVisibleDueToSelectedHandles:(id)arg1;
- (BOOL)isHandleAtIndexPath:(id)arg1 relevantToSegmentAtIndexPath:(id)arg2;
- (BOOL)isHandleAtIndexPathVisible:(id)arg1;
- (id)indexPathOfPointAfterIndexPath:(id)arg1;
- (id)indexPathOfPointBeforeIndexPath:(id)arg1;
- (BOOL)isCurvePointAtIndexPathSelected:(id)arg1;
- (unsigned long long)highlightedOrSelectedStateForHandleAtIndexPath:(id)arg1;
- (BOOL)isHandleAtIndexPathSelected:(id)arg1;
- (void)reset;
- (id)init;

@end

