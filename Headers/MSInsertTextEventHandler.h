//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSEventHandler.h"

@class MSTextLayer;

@interface MSInsertTextEventHandler : MSEventHandler
{
    struct CGPoint mouseDownPoint;
    struct CGPoint mouseDraggedPoint;
    MSTextLayer *_textLayer;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) MSTextLayer *textLayer; // @synthesize textLayer=_textLayer;
- (void).cxx_destruct;
- (BOOL)allowsSwitchToInsertAction;
- (id)toolbarIdentifier;
- (struct CGRect)rectForInsertingDirectly:(struct CGPoint)arg1;
- (void)selectTextLayerAndEdit:(id)arg1;
- (id)textLayerAtPoint:(struct CGPoint)arg1 zoomValue:(double)arg2;
- (BOOL)tryToEditExistingTextLayer:(struct CGPoint)arg1 zoomValue:(double)arg2;
- (id)groupForInserting;
- (id)textLayerWithRect:(struct CGRect)arg1 type:(long long)arg2;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)drawInRect:(struct CGRect)arg1 context:(id)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (void)handlerWillLoseFocus;
- (void)handlerGotFocus;

@end

