//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSPointsEventHandler.h"

#import "MSGradientPointArrayDelegate-Protocol.h"

@class MSStyleBasicFill, NSCursor, NSString;
@protocol MSGradientEventHandlerDelegate;

@interface MSGradientEventHandler : MSPointsEventHandler <MSGradientPointArrayDelegate>
{
    MSStyleBasicFill *_stylePart;
    id <MSGradientEventHandlerDelegate> _gradientDelegate;
    NSCursor *_selectPointCursor;
    NSCursor *_insertPointCursor;
}

+ (id)gradientHandlerForStylePart:(id)arg1 manager:(id)arg2;
@property(retain, nonatomic) NSCursor *insertPointCursor; // @synthesize insertPointCursor=_insertPointCursor;
@property(retain, nonatomic) NSCursor *selectPointCursor; // @synthesize selectPointCursor=_selectPointCursor;
@property(nonatomic) __weak id <MSGradientEventHandlerDelegate> gradientDelegate; // @synthesize gradientDelegate=_gradientDelegate;
@property(retain, nonatomic) MSStyleBasicFill *stylePart; // @synthesize stylePart=_stylePart;
- (void).cxx_destruct;
- (BOOL)canDuplicate;
- (void)selectionDidChangeTo:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)cursorWithDrawingBlock:(CDUnknownBlockType)arg1;
- (BOOL)useSnaps;
- (BOOL)shouldDisplayMessageForSelectedStop;
- (id)previousStop;
- (id)nextStop;
- (id)selectedStop;
- (void)centerStopBetween;
- (void)setSelectedStopToPercentage:(long long)arg1;
- (void)keyDown:(id)arg1;
- (void)delete:(id)arg1;
- (void)setIndexForSelectedPoint:(long long)arg1;
- (BOOL)hasSelectedPoint;
- (BOOL)canInsertPointAtMouse:(struct CGPoint)arg1;
- (void)replacePointAtIndex:(long long)arg1 withPoint:(struct CGPoint)arg2;
- (BOOL)absoluteMouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (id)handleLinesColor;
- (void)drawHandleLines;
- (long long)addStopAtPosition:(struct CGPoint)arg1;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (void)repairGradientIfNecessary;
- (void)colorMagnifierAction:(id)arg1;
- (id)gradient;
- (void)gradientPointArray:(id)arg1 didReplacePointAtIndex:(unsigned long long)arg2 withPoint:(struct CGPoint)arg3;
- (id)points;
- (void)drawHandleAtPoint:(struct CGPoint)arg1 index:(long long)arg2 selected:(BOOL)arg3;
- (void)handlerWillLoseFocus;
- (void)returnToDefaultHandlerByClickingOutside;
- (void)handlerGotFocus;
- (void)didMoveThroughHistory:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

