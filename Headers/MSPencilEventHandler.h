//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSEventHandler.h"

@class MSLayerGroup, MSShapePathLayer;

@interface MSPencilEventHandler : MSEventHandler
{
    BOOL _isDragging;
    MSShapePathLayer *_shape;
    MSLayerGroup *_currentGroup;
    struct CGPoint _lastMouse;
}

@property(nonatomic) struct CGPoint lastMouse; // @synthesize lastMouse=_lastMouse;
@property(nonatomic) BOOL isDragging; // @synthesize isDragging=_isDragging;
@property(retain, nonatomic) MSLayerGroup *currentGroup; // @synthesize currentGroup=_currentGroup;
@property(retain, nonatomic) MSShapePathLayer *shape; // @synthesize shape=_shape;
- (void).cxx_destruct;
- (BOOL)mouseDraggedOutsideViewShouldMoveScrollOrigin;
- (BOOL)absoluteMouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)addCurvePoint:(id)arg1;
- (void)addPoint:(struct CGPoint)arg1;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (BOOL)mouseDownEvent:(id)arg1;
- (BOOL)pathShouldClose;
- (void)removeRedundantPoints:(id)arg1;
- (id)fittedBezierPathFromShapePath:(id)arg1;
- (void)unflattenResult;
- (void)selectShape;
- (void)removeShape;
- (void)finishShapeOrRemoveIfEmpty;
- (void)handlerWillLoseFocus;
- (id)toolbarIdentifier;
- (void)handlerGotFocus;
- (void)adjustStyleForGroup:(id)arg1;
- (void)insertNewShapeForEditingAtPoint:(struct CGPoint)arg1;

@end

