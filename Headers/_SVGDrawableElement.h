//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SVGElement.h"

@class NSAffineTransform, NSString, SVGClipPath, SVGFill, SVGFont, SVGMask, SVGStroke;

@interface _SVGDrawableElement : SVGElement
{
    BOOL _clips;
    BOOL _hidden;
    SVGClipPath *_clip;
    SVGFill *_fill;
    SVGFont *_font;
    SVGMask *_mask;
    SVGStroke *_stroke;
    NSString *_blendMode;
    double _opacity;
    NSAffineTransform *_transform;
    struct CGRect _rect;
}

+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(retain, nonatomic) NSAffineTransform *transform; // @synthesize transform=_transform;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic) BOOL clips; // @synthesize clips=_clips;
@property(retain, nonatomic) NSString *blendMode; // @synthesize blendMode=_blendMode;
@property(retain, nonatomic) SVGStroke *stroke; // @synthesize stroke=_stroke;
@property(retain, nonatomic) SVGMask *mask; // @synthesize mask=_mask;
@property(retain, nonatomic) SVGFont *font; // @synthesize font=_font;
@property(retain, nonatomic) SVGFill *fill; // @synthesize fill=_fill;
@property(retain, nonatomic) SVGClipPath *clip; // @synthesize clip=_clip;
- (void).cxx_destruct;
- (void)primitiveSetStroke:(id)arg1;
- (void)primitiveSetMask:(id)arg1;
- (void)primitiveSetFont:(id)arg1;
- (void)primitiveSetFill:(id)arg1;
- (void)primitiveSetClip:(id)arg1;

@end

