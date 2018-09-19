//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CALayer, MSGPUArtboardShadow, NSColor;
@protocol MSGPUTexture;

@protocol MSGPURenderer
- (void)unlockTextures;
- (void)lockTextures;
- (BOOL)requiresSynchronousRendering;
- (CALayer *)layer;
- (id <MSGPUTexture>)createTextureWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)resetScissorRect;
- (void)setScissorRectWithX:(int)arg1 y:(int)arg2 width:(int)arg3 height:(int)arg4;
- (void)drawShadowForArtboardInRect:(struct CGRect)arg1 selected:(BOOL)arg2 shadow:(MSGPUArtboardShadow *)arg3;
- (void)drawTexturedQuadInDestinationRect:(struct CGRect)arg1 sourceTexture:(id <MSGPUTexture>)arg2 sourceRect:(struct CGRect)arg3 bilinearFilter:(BOOL)arg4;
- (void)drawTexturedQuadInDestinationRect:(struct CGRect)arg1 sourceTexture:(id <MSGPUTexture>)arg2 bilinearFilter:(BOOL)arg3;
- (void)drawColorTriangleMesh:(const CDStruct_e817f9f7 *)arg1;
- (void)drawColorQuadInRect:(struct CGRect)arg1 color:(CDStruct_0b1c536a)arg2;
- (void)endFrame;
- (BOOL)beginFrameWithClearColor:(NSColor *)arg1 drawableSize:(struct CGSize)arg2 backingScaleFactor:(double)arg3 colorSpace:(struct CGColorSpace *)arg4;
- (void)scheduleDrawBlock:(void (^)(void))arg1;
@end

