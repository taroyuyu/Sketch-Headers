//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSBezierPath.h>

@interface NSBezierPath (NSBezierPath_Slopes)
- (id)bezierPathByApplyingModifierBlock:(CDUnknownBlockType)arg1;
- (id)subDivideAtPoint:(struct CGPoint)arg1;
- (void)drawDebugWithZoom:(double)arg1;
- (id)bezierPathBySmootheningSubPath:(double)arg1;
- (struct CGPoint)pointAtIndex:(long long)arg1;
- (void)appendBezierPathByRemovingMoveToPoint:(id)arg1;
- (BOOL)isEqualToBezierPath:(id)arg1;
- (double)lengthWithMaximumError:(double)arg1;
- (double)length;
- (id)bezierPathByTrimmingToLength:(double)arg1 withMaximumError:(double)arg2;
- (id)bezierPathByTrimmingToLength:(double)arg1;
- (id)bezierPathFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)bezierPathByTrimmingFromLength:(double)arg1 withMaximumError:(double)arg2;
- (id)bezierPathByTrimmingFromLength:(double)arg1;
- (struct CGPoint)pointOnPathAtLength:(double)arg1 slope:(double *)arg2;
- (struct CGPoint)pointOnPathAtLength:(double)arg1;
- (double)slopeOnPathAtLength:(double)arg1;
- (struct CGPoint)firstPoint;
- (struct CGPoint)lastPoint;
@end

