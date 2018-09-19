//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSBitmapEditor.h"

@class NSBezierPath;

@interface MSBitmapRectangleEditor : MSBitmapEditor
{
    BOOL _didDrag;
    long long _dragMode;
    NSBezierPath *_selectionBeforeDrag;
    struct CGPoint _mouseDownPoint;
    struct CGPoint _mouseEndPoint;
}

+ (id)accumulateSelectionWithPrevious:(id)arg1 draggingRect:(id)arg2 dragMode:(long long)arg3;
@property(retain, nonatomic) NSBezierPath *selectionBeforeDrag; // @synthesize selectionBeforeDrag=_selectionBeforeDrag;
@property(nonatomic) struct CGPoint mouseEndPoint; // @synthesize mouseEndPoint=_mouseEndPoint;
@property(nonatomic) struct CGPoint mouseDownPoint; // @synthesize mouseDownPoint=_mouseDownPoint;
@property(nonatomic) BOOL didDrag; // @synthesize didDrag=_didDrag;
@property(nonatomic) long long dragMode; // @synthesize dragMode=_dragMode;
- (void).cxx_destruct;
- (struct CGRect)rectFromDraggingPoints;
- (struct CGSize)sizeForLabel;
- (void)draw;
- (void)resetDraggingPoints;
- (void)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)mouseDragged:(struct CGPoint)arg1;
- (void)mouseDown:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (id)init;

@end

