#import "SVGElement.h"

@class NSAffineTransform, SVGClipPath, SVGFill, SVGFont, SVGMask, SVGStroke;

@interface _SVGDrawableElement : SVGElement
{
    BOOL _clips;
    BOOL _hidden;
    SVGClipPath *_clip;
    SVGFill *_fill;
    SVGFont *_font;
    SVGMask *_mask;
    SVGStroke *_stroke;
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
