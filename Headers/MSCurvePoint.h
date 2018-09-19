//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSCurvePoint.h"

#import "MSCurvePoint-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface MSCurvePoint : _MSCurvePoint <MSCurvePoint, NSCopying>
{
}

+ (id)pointWithPoint:(struct CGPoint)arg1 curveTo:(struct CGPoint)arg2 curveFrom:(struct CGPoint)arg3;
+ (id)pointWithPoint:(struct CGPoint)arg1;
+ (id)point;
@property(readonly, copy) NSString *description;
- (void)multiplyBy:(double)arg1;
- (void)moveCurveFromTo:(struct CGPoint)arg1;
- (void)moveCurveToTo:(struct CGPoint)arg1;
- (void)movePointTo:(struct CGPoint)arg1;
- (struct CGPoint)locationOfPoint:(unsigned long long)arg1;
- (void)inferCurveMode;
@property(readonly, nonatomic) BOOL isEffectivelyStraight;
@property(readonly, nonatomic) BOOL isStraight;
- (BOOL)isRounded;
- (void)changeCurveModeTo:(long long)arg1 usingPoint:(unsigned long long)arg2;
- (Class)currentBehaviour;
- (id)initWithPoint:(struct CGPoint)arg1 curveTo:(struct CGPoint)arg2 curveFrom:(struct CGPoint)arg3;
- (id)initWithPoint:(struct CGPoint)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

