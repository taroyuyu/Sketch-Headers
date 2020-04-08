//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class MSCanvasView, MSDocument, MSRulerData, MSRulerViewLayer, NSNumberFormatter;

@interface MSRulerView : NSView
{
    BOOL _mouseDidDrag;
    MSDocument *_document;
    MSCanvasView *_contentView;
    unsigned long long _axis;
    MSRulerViewLayer *_rulerViewLayer;
    unsigned long long _dragIndex;
    double _baseOffset;
    double _previousBase;
    NSNumberFormatter *_metricsFormatter;
    struct CGPoint _mouseDownPoint;
}

+ (BOOL)rulerDraggingLocked;
+ (void)setRulerDraggingLocked:(BOOL)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSNumberFormatter *metricsFormatter; // @synthesize metricsFormatter=_metricsFormatter;
@property(nonatomic) double previousBase; // @synthesize previousBase=_previousBase;
@property(nonatomic) double baseOffset; // @synthesize baseOffset=_baseOffset;
@property(nonatomic) unsigned long long dragIndex; // @synthesize dragIndex=_dragIndex;
@property(retain, nonatomic) MSRulerViewLayer *rulerViewLayer; // @synthesize rulerViewLayer=_rulerViewLayer;
@property(nonatomic) unsigned long long axis; // @synthesize axis=_axis;
@property(nonatomic) struct CGPoint mouseDownPoint; // @synthesize mouseDownPoint=_mouseDownPoint;
@property(nonatomic) BOOL mouseDidDrag; // @synthesize mouseDidDrag=_mouseDidDrag;
@property(nonatomic) __weak MSCanvasView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak MSDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (long long)rulerHeight;
- (long long)rulerLength;
- (double)zoomValue;
- (struct CGPoint)scrollOrigin;
- (id)occupiedRegionForRect:(struct CGRect)arg1 withOffset:(long long)arg2 zoom:(double)arg3;
- (void)setHidden:(BOOL)arg1;
- (double)baseLineIncludingScrollOrigin:(BOOL)arg1;
- (double)baseLine;
- (struct CGPoint)mouseEventToPoint:(id)arg1;
- (void)turnAlignmentGuidesBackOn;
- (void)mouseUp:(id)arg1;
- (struct CGRect)rulerBasedRectForLayer:(id)arg1;
- (double)snapGuideToSelectedLayers:(double)arg1;
- (double)guidePositionForMouse:(struct CGPoint)arg1;
- (void)setDragCursor;
- (void)setResizeCursor;
- (void)updateCursorForDragingGuideToPoint:(struct CGPoint)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)dragSelectedGuideWithMouse:(struct CGPoint)arg1;
- (struct CGPoint)distanceFromDragOrigin:(struct CGPoint)arg1;
- (void)dragRulerBaseWithMouse:(struct CGPoint)arg1 modifierFlags:(unsigned long long)arg2;
- (void)mouseDragged:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (unsigned long long)indexOfGuideAtMousePoint:(struct CGPoint)arg1;
- (void)addNewGuideAtMousePoint:(struct CGPoint)arg1;
- (void)mouseDown:(id)arg1;
- (double)otherAxisForPoint:(struct CGPoint)arg1;
- (double)relevantAxisForPoint:(struct CGPoint)arg1;
- (void)refreshGuide:(double)arg1;
- (void)refreshTemporaryRulerGuide;
@property(nonatomic) double temporaryRulerGuide;
@property(readonly, nonatomic) MSRulerData *rulerData;
- (void)mouseMoved:(id)arg1;
- (BOOL)isEventInView:(id)arg1;
- (void)removeAllGuides:(id)arg1;
- (void)removeGuide:(id)arg1;
- (void)addAction:(id)arg1 toMenu:(id)arg2;
- (id)titleForRemoveAllGuidesMenuItem;
- (id)menuForEvent:(id)arg1;
- (void)didMoveThroughHistory:(id)arg1;
- (void)unregisterObservers;
- (void)registerObservers;
- (void)setFrame:(struct CGRect)arg1;
- (id)guides;
- (struct CGRect)occupiedRegion;
- (void)prepareRulerViewLayer:(struct CGRect)arg1;
- (Class)rulerViewLayerClass;
- (id)makeRulerViewLayer;
- (void)calculateContentsScale;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidChangeBackingProperties;
- (void)awakeFromNib;

@end

