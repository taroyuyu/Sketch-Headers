//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSImmutableShapePathLayer.h>

@interface MSImmutableShapePathLayer (SVGExport)
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3;
- (id)addGroupContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3;
- (void)addSVGAttributes:(id)arg1 exporter:(id)arg2;
- (void)addDecorationToParent:(id)arg1 exporter:(id)arg2;
- (id)addMaskToElement:(id)arg1 exporter:(id)arg2;
- (void)appendBaseTranslation:(id)arg1 exporter:(id)arg2;
- (BOOL)requiresPathDefinition:(id)arg1;
- (id)svgStyle:(id)arg1;
- (struct CGRect)relativeRectWithExporter:(id)arg1;
- (void)simplifyPathElement:(id)arg1 exporter:(id)arg2 inset:(double)arg3;
@end

