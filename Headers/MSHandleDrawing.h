//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSHandleDrawing : NSObject
{
}

+ (void)resetZoomValue;
+ (void)setZoomValue:(double)arg1;
+ (double)zoomValue;
+ (void)drawWithTransformStruct:(struct _CHTransformStruct)arg1 aroundPoint:(struct CGPoint)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (void)drawShadowForHover:(BOOL)arg1 inBlock:(CDUnknownBlockType)arg2;
+ (id)gradient;
+ (id)shadowForHover:(BOOL)arg1;
+ (void)drawBezier:(id)arg1;
+ (void)drawRectAtPoint:(struct CGPoint)arg1 ofType:(long long)arg2;
+ (void)drawGradientHandleAtPoint:(struct CGPoint)arg1 color:(id)arg2 selected:(BOOL)arg3;
+ (void)drawAtPoint:(struct CGPoint)arg1 ofType:(long long)arg2 state:(unsigned long long)arg3;
+ (double)dotSizeForType:(long long)arg1;
+ (void)load;

@end

