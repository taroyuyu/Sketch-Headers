//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSLayerSelectionDrawing : NSObject
{
}

+ (double)strokeWidthForZoomValue:(double)arg1;
+ (void)drawBorderWithRect:(struct CGRect)arg1 zoomValue:(double)arg2;
+ (void)drawSelectionHandlesForLayer:(id)arg1 zoomValue:(double)arg2;
+ (void)drawResizingHandle:(long long)arg1 ofRect:(struct CGRect)arg2 zoomScale:(double)arg3;
+ (void)drawHandlesWithRect:(struct CGRect)arg1 zoomScale:(double)arg2;
+ (struct CGRect)drawFramesForLayers:(id)arg1 zoomScale:(double)arg2;
+ (void)drawSelectionForLayers:(id)arg1 zoomScale:(double)arg2;
+ (void)drawFramesForLayer:(id)arg1 zoomScale:(double)arg2;
+ (void)drawSelectionForLayer:(id)arg1 hideHandles:(BOOL)arg2 zoomValue:(double)arg3;

@end

