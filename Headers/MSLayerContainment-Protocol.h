//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray;

@protocol MSLayerContainment
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 block:(void (^)(id, char *))arg2;
- (void)enumerateLayers:(void (^)(id))arg1;
- (unsigned long long)indexOfLayer:(id)arg1;
- (id)layerAtIndex:(unsigned long long)arg1;
- (BOOL)containsMultipleLayers;
- (BOOL)containsOneLayer;
- (BOOL)containsLayers;
- (BOOL)containsNoOrOneLayers;
- (id)lastLayer;
- (id)firstLayer;
- (unsigned long long)containedLayersCount;
- (NSArray *)containedLayers;
@end

