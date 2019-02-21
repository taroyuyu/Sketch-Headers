//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSGradientEventHandler.h"

@interface MSRadialGradientEventHandler : MSGradientEventHandler
{
    BOOL ellipseSelected;
    struct CGSize deltaBetweenRadialPointBeforeDrag;
}

- (void)setEllipsePoint:(struct CGPoint)arg1;
- (struct CGPoint)ellipsePoint;
- (id)ovalPath;
- (void)replacePointAtIndex:(long long)arg1 withPoint:(struct CGPoint)arg2;
- (void)drawInRect:(struct CGRect)arg1 context:(id)arg2;
- (BOOL)absoluteMouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)hasSelectedPoint;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (BOOL)mouseIsNearEllipsePoint:(struct CGPoint)arg1;

@end

