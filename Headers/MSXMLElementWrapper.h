//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXMLElement;

@interface MSXMLElementWrapper : NSObject
{
    NSXMLElement *_element;
}

+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)element;
+ (id)elementName;
@property(retain, nonatomic) NSXMLElement *element; // @synthesize element=_element;
- (void).cxx_destruct;
- (void)addChildWrapper:(id)arg1;
- (void)addChild:(id)arg1;
- (id)href;
- (void)setHref:(id)arg1;
- (void)setAttributeFloat:(double)arg1 forKey:(id)arg2;
- (double)attributeFloatForKey:(id)arg1;
- (void)setAttributeString:(id)arg1 forKey:(id)arg2;
- (id)attributeStringForKey:(id)arg1;
- (id)svgAttributeNameForKey:(id)arg1;
- (id)initWithElement:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSString *style; // @dynamic style;
@property(copy, nonatomic) NSString *svgClass; // @dynamic svgClass;
@property(copy, nonatomic) NSString *svgId; // @dynamic svgId;

@end

