//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSDragRectEventHandler.h"

@class MSLayer;

@interface MSInsertLayerEventHandler : MSDragRectEventHandler
{
    MSLayer *_prototypeLayer;
    CDUnknownBlockType _completionBlock;
    MSLayer *_insertedLayer;
}

@property(retain, nonatomic) MSLayer *insertedLayer; // @synthesize insertedLayer=_insertedLayer;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) MSLayer *prototypeLayer; // @synthesize prototypeLayer=_prototypeLayer;
- (void).cxx_destruct;
- (BOOL)allowsSwitchToInsertAction;
- (void)resizeLayer:(id)arg1 toRect:(struct CGRect)arg2;
- (id)currentGroup;
- (void)insertNewLayerInCurrentGroup:(id)arg1;
- (id)insertAsNewLayer:(struct CGRect)arg1;
- (id)performActionWithRect:(struct CGRect)arg1 fromLayer:(id)arg2 constrainProportions:(BOOL)arg3;
- (id)pathForPrototypeLayer;
- (void)drawRectPreview;
- (void)setInsertionRect:(struct CGRect)arg1;
- (id)imageName;
- (void)handlerWillLoseFocus;
- (void)handlerGotFocus;
- (id)applicableActionItemIdentifier;

@end

