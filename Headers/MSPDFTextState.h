//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class MSPDFState, NSAffineTransform, NSDictionary, NSFont, NSMutableAttributedString, NSString;

@interface MSPDFTextState : NSObject <NSCopying>
{
    double _characterSpacing;
    NSFont *_font;
    NSString *_fontName;
    NSDictionary *_fontInfo;
    double _leading;
    NSAffineTransform *_lineTransform;
    unsigned long long _mode;
    double _offset;
    NSAffineTransform *_renderingTransform;
    double _rise;
    double _scale;
    double _size;
    MSPDFState *_state;
    NSMutableAttributedString *_text;
    NSAffineTransform *_transform;
    double _wordSpacing;
}

+ (id)textStateWithState:(id)arg1;
@property(nonatomic) double wordSpacing; // @synthesize wordSpacing=_wordSpacing;
@property(retain, nonatomic) NSAffineTransform *transform; // @synthesize transform=_transform;
@property(retain, nonatomic) NSMutableAttributedString *text; // @synthesize text=_text;
@property(nonatomic) __weak MSPDFState *state; // @synthesize state=_state;
@property(nonatomic) double size; // @synthesize size=_size;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double rise; // @synthesize rise=_rise;
@property(retain, nonatomic) NSAffineTransform *renderingTransform; // @synthesize renderingTransform=_renderingTransform;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSAffineTransform *lineTransform; // @synthesize lineTransform=_lineTransform;
@property(nonatomic) double leading; // @synthesize leading=_leading;
@property(retain, nonatomic) NSDictionary *fontInfo; // @synthesize fontInfo=_fontInfo;
@property(retain, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(retain, nonatomic) NSFont *font; // @synthesize font=_font;
@property(nonatomic) double characterSpacing; // @synthesize characterSpacing=_characterSpacing;
- (void).cxx_destruct;
- (void)appendText:(id)arg1;
- (id)attributes;
- (void)setTransform:(id)arg1 resettingLineTransform:(BOOL)arg2;
- (void)resetRenderingTransform;
- (BOOL)shouldClip;
- (BOOL)shouldStroke;
- (BOOL)shouldFill;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

