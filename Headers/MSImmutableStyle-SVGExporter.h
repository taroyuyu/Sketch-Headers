//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSImmutableStyle.h>

@interface MSImmutableStyle (SVGExporter)
- (void)addSVGFilterAttributes:(id)arg1 exporter:(id)arg2 position:(unsigned long long)arg3;
- (void)addBlurFilter:(id)arg1 exporter:(id)arg2;
- (void)addShadowFilters:(id)arg1 includeSource:(BOOL)arg2 attributes:(id)arg3 exporter:(id)arg4;
- (void)applyLayerInfluenceRectBounds:(id)arg1 document:(id)arg2 toFilter:(id)arg3 withRadius:(double)arg4;
- (id)borderAtElementPosition:(long long)arg1 exporter:(id)arg2;
- (id)fillAtElementPosition:(long long)arg1 exporter:(id)arg2;
- (unsigned long long)internalNumberOfElements:(id)arg1;
- (id)borderWithGreatestInset;
- (BOOL)canCombineLastFillWithFirstBorder;
- (BOOL)requiresPathDefinition:(id)arg1;
- (BOOL)hasBorderRequiringMask;
- (void)addSVGAttributes:(id)arg1 exporter:(id)arg2 elementPosition:(unsigned long long)arg3;
- (unsigned long long)numberOfElementsWithExporter:(id)arg1;
@end

