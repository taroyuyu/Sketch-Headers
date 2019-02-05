//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSNormalBaseEventHandler.h"

#import "MSAlignmentEngineDelegate-Protocol.h"
#import "NSTouchBarDelegate-Protocol.h"

@class MSAlignmentEngineResult, MSDragToMoveOrCopyGestureRecognizer, MSNormalEventData, MSRotationGestureInterpreter, NSArray, NSString;

@interface MSRotateEventHandler : MSNormalBaseEventHandler <MSAlignmentEngineDelegate, NSTouchBarDelegate>
{
    long long _startingDegrees;
    BOOL _exitOnMouseUp;
    BOOL _disableMoving;
    MSNormalEventData *_eventData;
    NSArray *_rotationItems;
    MSDragToMoveOrCopyGestureRecognizer *_dragGestureRecognizer;
    MSRotationGestureInterpreter *_cursorRotationInterpreter;
    MSRotationGestureInterpreter *_dragRotationInterpreter;
    unsigned long long _draggedComponent;
    MSAlignmentEngineResult *_centerPointSnaps;
    struct CGPoint _rotationCenterPoint;
}

+ (id)cursorForDegrees:(long long)arg1;
@property(retain, nonatomic) MSAlignmentEngineResult *centerPointSnaps; // @synthesize centerPointSnaps=_centerPointSnaps;
@property(nonatomic) unsigned long long draggedComponent; // @synthesize draggedComponent=_draggedComponent;
@property(readonly, nonatomic) MSRotationGestureInterpreter *dragRotationInterpreter; // @synthesize dragRotationInterpreter=_dragRotationInterpreter;
@property(readonly, nonatomic) MSRotationGestureInterpreter *cursorRotationInterpreter; // @synthesize cursorRotationInterpreter=_cursorRotationInterpreter;
@property(readonly, nonatomic) MSDragToMoveOrCopyGestureRecognizer *dragGestureRecognizer; // @synthesize dragGestureRecognizer=_dragGestureRecognizer;
@property(readonly, nonatomic) NSArray *rotationItems; // @synthesize rotationItems=_rotationItems;
@property(nonatomic) struct CGPoint rotationCenterPoint; // @synthesize rotationCenterPoint=_rotationCenterPoint;
@property(retain, nonatomic) MSNormalEventData *eventData; // @synthesize eventData=_eventData;
@property(nonatomic) BOOL disableMoving; // @synthesize disableMoving=_disableMoving;
@property(nonatomic) BOOL exitOnMouseUp; // @synthesize exitOnMouseUp=_exitOnMouseUp;
- (void).cxx_destruct;
- (void)refreshTouchBarItemWithIdentifier:(id)arg1;
- (void)rotationBarAction:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (void)drawRotationCenterAtZoomScale:(double)arg1;
- (void)drawInRect:(struct CGRect)arg1 context:(id)arg2;
- (double)alignDegreesTo15Angles:(double)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)dragLayer:(id)arg1;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (void)trackMouse:(id)arg1;
- (void)dragCenterPoint:(id)arg1;
- (void)handleDrag:(id)arg1;
- (void)handleRotation:(id)arg1;
- (unsigned long long)componentAtPoint:(struct CGPoint)arg1;
- (struct CGPoint)alignmentEngine:(id)arg1 alignPoint:(struct CGPoint)arg2;
- (struct CGPoint)rotationCenterPointForAnchorPoint:(struct CGPoint)arg1 layer:(id)arg2;
- (void)setRotationCenterPoint:(struct CGPoint)arg1 updateAnchorPoints:(BOOL)arg2;
- (void)resetWithSelection:(id)arg1;
- (void)selectionDidChangeTo:(id)arg1;
- (void)handlerWillLoseFocus;
- (void)handlerGotFocus;
- (id)initWithManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

