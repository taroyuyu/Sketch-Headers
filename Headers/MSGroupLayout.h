//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSGroupLayout.h>

@class MSLayerGroup;

@interface MSGroupLayout : _MSGroupLayout
{
}

- (id)layersToConsiderForGroupBounds;
- (id)desiredGroupLayerOrder;
- (void)setOriginsOfContainedLayers:(id)arg1;
- (id)originsOfContainedLayers;
- (BOOL)shouldResizeToFitBounds:(struct CGRect)arg1;
- (BOOL)fixGeometryWithOptions:(long long)arg1;
- (void)didChangeLayout:(long long)arg1 info:(id)arg2;
- (id)willChangeLayout:(long long)arg1;
- (void)changeLayout:(long long)arg1 inBlock:(CDUnknownBlockType)arg2;
- (void)groupDidResizeFromSize:(struct CGSize)arg1;
@property(readonly, nonatomic) BOOL isInferredLayout;
@property(readonly, nonatomic) MSLayerGroup *group;

@end

