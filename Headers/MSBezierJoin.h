//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSBezierSegment, NSArray;

@interface MSBezierJoin : NSObject
{
    MSBezierSegment *_segment1;
    MSBezierSegment *_segment2;
    NSArray *_joinedSegments;
}

+ (id)segmentsByJoiningSegment1:(id)arg1 segment2:(id)arg2;
+ (id)joinWithSegment1:(id)arg1 segment2:(id)arg2 strategy:(unsigned long long)arg3;
+ (id)joinWithSegment1:(id)arg1 segment2:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *joinedSegments; // @synthesize joinedSegments=_joinedSegments;
@property(readonly, nonatomic) MSBezierSegment *segment2; // @synthesize segment2=_segment2;
@property(readonly, nonatomic) MSBezierSegment *segment1; // @synthesize segment1=_segment1;
- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)initWithSegment1:(id)arg1 segment2:(id)arg2 joinedSegments:(id)arg3;

@end

