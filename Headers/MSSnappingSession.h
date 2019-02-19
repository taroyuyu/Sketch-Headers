//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSLayer, MSSnapItem, NSArray, NSIndexSet;

@interface MSSnappingSession : NSObject
{
    BOOL _shouldSnapToLayers;
    unsigned long long _sessionType;
    double _snapDistance;
    double _zoomScale;
    unsigned long long _allowedAxes;
    MSSnapItem *_item;
    long long _corner;
    unsigned long long _snappableGuidesMask;
}

+ (id)keySnappingSessionWithItem:(id)arg1;
+ (id)resizeSnappingSessionWithItem:(id)arg1 corner:(long long)arg2;
+ (id)moveSnappingSessionWithItem:(id)arg1;
@property(nonatomic) unsigned long long snappableGuidesMask; // @synthesize snappableGuidesMask=_snappableGuidesMask;
@property(nonatomic) BOOL shouldSnapToLayers; // @synthesize shouldSnapToLayers=_shouldSnapToLayers;
@property(nonatomic) long long corner; // @synthesize corner=_corner;
@property(readonly, nonatomic) MSSnapItem *item; // @synthesize item=_item;
@property(nonatomic) unsigned long long allowedAxes; // @synthesize allowedAxes=_allowedAxes;
@property(nonatomic) double zoomScale; // @synthesize zoomScale=_zoomScale;
@property(nonatomic) double snapDistance; // @synthesize snapDistance=_snapDistance;
@property(readonly, nonatomic) unsigned long long sessionType; // @synthesize sessionType=_sessionType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSIndexSet *snappableAttributes;
@property(readonly, nonatomic) unsigned long long snappableEdges;
@property(readonly, nonatomic) MSLayer *layer;
@property(readonly) double effectiveSnapDistance;
@property(readonly, nonatomic) NSArray *layers;
- (id)initWithType:(unsigned long long)arg1 item:(id)arg2;

@end

