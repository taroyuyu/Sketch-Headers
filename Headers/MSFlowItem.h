//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface MSFlowItem : NSObject
{
    NSSet *_flowInfluencingLayerIDs;
    NSSet *_clipRects;
    struct CGRect _sourceLayerBounds;
    struct MSFlowInfo _flowInfo;
}

@property(readonly, copy, nonatomic) NSSet *clipRects; // @synthesize clipRects=_clipRects;
@property(readonly, nonatomic) struct MSFlowInfo flowInfo; // @synthesize flowInfo=_flowInfo;
@property(readonly, nonatomic) struct CGRect sourceLayerBounds; // @synthesize sourceLayerBounds=_sourceLayerBounds;
@property(readonly, copy, nonatomic) NSSet *flowInfluencingLayerIDs; // @synthesize flowInfluencingLayerIDs=_flowInfluencingLayerIDs;
- (void).cxx_destruct;
- (id)flowSegmentForZoomLevel:(double)arg1;
@property(readonly, nonatomic) long long flowType;
- (struct CGVector)endPointDisplacement;
- (struct CGPoint)endPoint;
@property(readonly, nonatomic) struct CGPoint startPoint;
@property(readonly, nonatomic) BOOL shouldDrawSourceLineAndTip;
@property(readonly, nonatomic) BOOL shouldDrawSourceLayerBounds;
- (id)initWithFlowInfo:(struct MSFlowInfo)arg1 flowInfluencingLayerIDs:(id)arg2 clipToRects:(id)arg3 sourceLayerBounds:(struct CGRect)arg4;

@end

