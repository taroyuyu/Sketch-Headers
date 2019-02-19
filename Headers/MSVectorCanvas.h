//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSAlignmentEngineDelegate-Protocol.h"
#import "MSSelectVectorHandleGestureRecognizerDelegate-Protocol.h"

@class MSAlignmentEngine, MSAlignmentEngineResult, MSClickGestureRecognizer, MSContentDrawView, MSDragHandleGestureRecognizer, MSDragSegmentGestureRecognizer, MSDragToSelectGestureRecognizer, MSPathController, MSSelectVectorHandleGestureRecognizer, MSShapeEditingBehavior, MSShapeEventHandler, MSVectorHandleStateDecider, NSArray, NSBezierPath, NSIndexPath, NSMutableArray, NSString;
@protocol MSVectorCanvasDelegate;

@interface MSVectorCanvas : NSObject <MSSelectVectorHandleGestureRecognizerDelegate, MSAlignmentEngineDelegate>
{
    NSMutableArray *_selectedHandles;
    MSShapeEventHandler *_eventHandler;
    MSContentDrawView *_view;
    MSPathController *_pathController;
    NSArray *_selectedLayers;
    NSArray *_visibleLayers;
    MSShapeEditingBehavior *_editingBehavior;
    MSAlignmentEngineResult *_snaps;
    id <MSVectorCanvasDelegate> _delegate;
    MSDragToSelectGestureRecognizer *_dragToSelectGestureRecognizer;
    MSSelectVectorHandleGestureRecognizer *_clickToSelectGestureRecognizer;
    MSDragHandleGestureRecognizer *_dragHandleGestureRecognizer;
    MSDragSegmentGestureRecognizer *_dragSegmentGestureRecognizer;
    MSClickGestureRecognizer *_clickToEndEditingGestureRecognizer;
    unsigned long long _vectorTool;
    NSIndexPath *_activeIndexPath;
    unsigned long long _activeHandleBehavior;
    MSAlignmentEngine *_snapper;
    NSArray *_shapeCenterSnapTargets;
    NSBezierPath *_wireBezierPath;
    MSVectorHandleStateDecider *_handleStateDecider;
    struct CGPoint _insertionPoint;
}

@property(readonly, nonatomic) MSVectorHandleStateDecider *handleStateDecider; // @synthesize handleStateDecider=_handleStateDecider;
@property(retain, nonatomic) NSBezierPath *wireBezierPath; // @synthesize wireBezierPath=_wireBezierPath;
@property(copy, nonatomic) NSArray *shapeCenterSnapTargets; // @synthesize shapeCenterSnapTargets=_shapeCenterSnapTargets;
@property(retain, nonatomic) MSAlignmentEngine *snapper; // @synthesize snapper=_snapper;
@property(nonatomic) unsigned long long activeHandleBehavior; // @synthesize activeHandleBehavior=_activeHandleBehavior;
@property(readonly, nonatomic) struct CGPoint insertionPoint; // @synthesize insertionPoint=_insertionPoint;
@property(readonly, copy, nonatomic) NSIndexPath *activeIndexPath; // @synthesize activeIndexPath=_activeIndexPath;
@property(readonly, nonatomic) unsigned long long vectorTool; // @synthesize vectorTool=_vectorTool;
@property(readonly, nonatomic) MSClickGestureRecognizer *clickToEndEditingGestureRecognizer; // @synthesize clickToEndEditingGestureRecognizer=_clickToEndEditingGestureRecognizer;
@property(readonly, nonatomic) MSDragSegmentGestureRecognizer *dragSegmentGestureRecognizer; // @synthesize dragSegmentGestureRecognizer=_dragSegmentGestureRecognizer;
@property(readonly, nonatomic) MSDragHandleGestureRecognizer *dragHandleGestureRecognizer; // @synthesize dragHandleGestureRecognizer=_dragHandleGestureRecognizer;
@property(readonly, nonatomic) MSSelectVectorHandleGestureRecognizer *clickToSelectGestureRecognizer; // @synthesize clickToSelectGestureRecognizer=_clickToSelectGestureRecognizer;
@property(readonly, nonatomic) MSDragToSelectGestureRecognizer *dragToSelectGestureRecognizer; // @synthesize dragToSelectGestureRecognizer=_dragToSelectGestureRecognizer;
@property(nonatomic) __weak id <MSVectorCanvasDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) MSAlignmentEngineResult *snaps; // @synthesize snaps=_snaps;
@property(retain, nonatomic) MSShapeEditingBehavior *editingBehavior; // @synthesize editingBehavior=_editingBehavior;
@property(readonly, copy, nonatomic) NSArray *visibleLayers; // @synthesize visibleLayers=_visibleLayers;
@property(copy, nonatomic) NSArray *selectedLayers; // @synthesize selectedLayers=_selectedLayers;
@property(retain, nonatomic) MSPathController *pathController; // @synthesize pathController=_pathController;
@property(nonatomic) MSContentDrawView *view; // @synthesize view=_view;
@property(nonatomic) __weak MSShapeEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (struct CGPoint)alignmentEngine:(id)arg1 alignPoint:(struct CGPoint)arg2;
- (BOOL)gestureRecognizerShouldDelaySelectionUntilMouseUp:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldAttemptToRecognizeAtPoint:(struct CGPoint)arg2 modifierFlags:(unsigned long long)arg3;
- (void)setNeedsUpdateCursor;
- (void)updateCursor;
- (void)trackMouse:(id)arg1;
- (void)clickToEndEditing:(id)arg1;
- (void)dragSegment:(id)arg1;
- (void)prepareToDragSegmentWithMouseLocation:(struct CGPoint)arg1 modiferFlags:(unsigned long long)arg2;
- (id)locationForAddingPoint:(struct CGPoint)arg1 modifierFlags:(unsigned long long)arg2;
- (id)insertPointWithModifierFlags:(unsigned long long)arg1;
- (void)selectHandle:(id)arg1;
- (void)moveCurveAdjustmentHandleToPoint:(struct CGPoint)arg1 didChangeCurveMode:(char *)arg2;
- (void)toggleCurveModeOfPointAtIndexPath:(id)arg1 modifierFlags:(unsigned long long)arg2;
- (struct CGPoint)determineLocationAndSnappingOfDrag:(id)arg1;
- (void)dragHandle:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)dragToSelect:(id)arg1;
- (void)clickToSelect:(id)arg1;
- (void)mouseUpAtPoint:(struct CGPoint)arg1;
- (id)segmentAtIndexPath:(id)arg1;
- (void)doubleMouseDownAtPoint:(struct CGPoint)arg1 modifierFlags:(unsigned long long)arg2;
- (void)singleMouseDownAtPoint:(struct CGPoint)arg1 modifierFlags:(unsigned long long)arg2;
- (void)delete:(id)arg1;
- (void)adjustHandle:(id)arg1 toValue:(double)arg2 onAxis:(unsigned long long)arg3;
- (void)adjustHandlesToValue:(double)arg1 onAxis:(unsigned long long)arg2;
- (void)distributeVectorPointsToAxis:(unsigned long long)arg1;
- (void)alignVectorPointsToKey:(id)arg1;
- (void)changeToCurveMode:(long long)arg1;
- (id)indexPathsForHandlesInRect:(struct CGRect)arg1;
- (id)indexPathOfSegmentAtPoint:(struct CGPoint)arg1;
- (id)indexPathOfHandleAtPoint:(struct CGPoint)arg1;
- (struct CGRect)overlayDrawingRectForLayer:(id)arg1;
- (void)setOverlayNeedsDisplay;
- (struct CGPoint)convertPointToView:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (void)drawHandles;
- (struct CGRect)drawingRectForInsertionAtPoint:(struct CGPoint)arg1;
- (void)drawInsertionPoint;
- (void)drawHighlightedSegment;
- (void)drawSnaps;
- (void)drawWire;
- (void)drawHairline;
- (id)makeWireBezierPathForClosingPath:(BOOL)arg1 indexPathForSelectedHandle:(id)arg2;
- (void)updateWire;
- (void)addGuidesToSnapper:(id)arg1;
- (void)addOtherLayersToSnapper:(id)arg1;
- (void)includePointForSnapping:(struct CGPoint)arg1 inPathLayer:(id)arg2;
- (void)addHandlesToSnapperForDragging:(BOOL)arg1;
- (void)addTargetsToSnapperForDragging:(BOOL)arg1;
- (void)prepareSnapper;
- (id)changeContext;
@property(readonly, nonatomic, getter=isInteractivelySelecting) BOOL interactivelySelecting;
- (void)toggleSelectionOfHandleAtIndexPath:(id)arg1 notifyDelegate:(BOOL)arg2;
- (void)didChangeSelection;
- (void)deselectHandleAtIndexPath:(id)arg1;
- (void)selectHandlesAtIndexPaths:(id)arg1 notifyDelegate:(BOOL)arg2;
- (void)selectHandlesAtIndexPaths:(id)arg1;
- (id)selectHandleAtIndexPath:(id)arg1 extendSelection:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (void)selectHandleAtIndexPath:(id)arg1 extendSelection:(BOOL)arg2;
@property(readonly, copy, nonatomic) NSIndexPath *indexPathForHighlightedComponent;
@property(readonly, copy, nonatomic) NSArray *indexPathsForSelectedHandles;
- (void)didChangeAllowSelectionOnly;
- (void)updateToolStateWithMouseLocation:(struct CGPoint)arg1 modifierFlags:(unsigned long long)arg2;
- (void)setVectorTool:(unsigned long long)arg1 indexPath:(id)arg2 insertionPoint:(struct CGPoint)arg3;
- (void)selectLayers:(id)arg1 extendSelection:(BOOL)arg2;
- (id)pathLayersForLayer:(id)arg1;
- (void)rebuildVisibleLayersMaintainingSelection:(BOOL)arg1;
- (void)setVisibleLayers:(id)arg1;
- (void)registerWithEventHandler:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

