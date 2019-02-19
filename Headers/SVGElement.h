//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_SVGElement.h"

@class NSString, NSXMLElement, SVGImporter;

@interface SVGElement : _SVGElement
{
    NSXMLElement *_xml;
    SVGImporter *_importer;
}

+ (id)elementOfType:(id)arg1 xml:(id)arg2 importer:(id)arg3 parent:(id)arg4;
@property(retain, nonatomic) SVGImporter *importer; // @synthesize importer=_importer;
@property(retain, nonatomic) NSXMLElement *xml; // @synthesize xml=_xml;
- (void).cxx_destruct;
- (id)makeLayerWithParentLayer:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (id)adjustOwnLayer:(id)arg1 parentLayer:(id)arg2;
- (void)nameLayer:(id)arg1;
@property(readonly, nonatomic) NSString *effectiveLayerName;
- (void)adjustSizeForChildrenOfLayer:(id)arg1;
- (void)makeChildLayersWithParentLayer:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (id)makeOwnLayerWithParentLayer:(id)arg1;
- (BOOL)isDescendantOf:(id)arg1;
- (id)styleAttributesForElement:(id)arg1 defaults:(id)arg2;
- (id)relativeURLForLink:(id)arg1;
- (void)resolvedValue:(id)arg1 forProperty:(id)arg2;
- (id)clippingParent;
- (id)drawableParent;
- (BOOL)containsDrawables;
- (id)name;
- (void)addReferenceToIdentifier:(id)arg1 type:(id)arg2 property:(id)arg3;
- (id)svgAttributesDescription;
- (id)svgDescription;
- (id)elementOfType:(id)arg1 xml:(id)arg2 parent:(id)arg3;
- (void)processStyles:(id)arg1;
- (void)processStyles;
- (void)process;
- (void)processChildren:(id)arg1 startingAtIndex:(unsigned long long)arg2;
- (void)processChildren:(id)arg1;
- (unsigned long long)processChild:(id)arg1 index:(unsigned long long)arg2;
- (void)processIdentifier:(id)arg1;
- (void)processSelf:(id)arg1;
- (id)initWithImporter:(id)arg1 xml:(id)arg2;

@end

