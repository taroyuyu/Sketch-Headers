//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BCScreenGrab;

@interface BCCanvasGrabResult : NSObject
{
    BOOL _mouseIsOnCanvas;
    BCScreenGrab *_canvasGrab;
    long long _windowNumber;
}

@property(nonatomic) long long windowNumber; // @synthesize windowNumber=_windowNumber;
@property(nonatomic) BOOL mouseIsOnCanvas; // @synthesize mouseIsOnCanvas=_mouseIsOnCanvas;
@property(readonly, nonatomic) BCScreenGrab *canvasGrab; // @synthesize canvasGrab=_canvasGrab;
- (void).cxx_destruct;
- (id)initWithPreviousCanvasGrabResult:(id)arg1 mouseIsOnCanvas:(BOOL)arg2;
- (id)initWithCanvasGrab:(id)arg1 windowNumber:(long long)arg2 mouseIsOnCanvas:(BOOL)arg3;

@end

