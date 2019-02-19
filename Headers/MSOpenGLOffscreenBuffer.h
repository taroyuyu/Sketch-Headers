//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOpenGLContext;

@interface MSOpenGLOffscreenBuffer : NSObject
{
    int _width;
    int _height;
    unsigned int _texture;
    unsigned int _FBO;
    NSOpenGLContext *_context;
    CDUnknownBlockType _completionHandler;
    struct CGColorSpace *_colorspace;
}

@property(nonatomic) unsigned int FBO; // @synthesize FBO=_FBO;
@property(nonatomic) unsigned int texture; // @synthesize texture=_texture;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(nonatomic) struct CGColorSpace *colorspace; // @synthesize colorspace=_colorspace;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSOpenGLContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)endRendering;
- (void)beginRendering:(int)arg1 height:(int)arg2;
- (void)_destroyObjects;
- (void)dealloc;
- (id)init;

@end

