//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSDragToInsertLayerEventHandler.h"

@class NSArray;

@interface MSInsertSliceEventHandler : MSDragToInsertLayerEventHandler
{
    NSArray *_allSlices;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *allSlices; // @synthesize allSlices=_allSlices;
- (id)toolbarIdentifier;
- (id)performActionWithRect:(struct CGRect)arg1 fromLayer:(id)arg2 constrainProportions:(BOOL)arg3;
- (id)cursorForInsertingFromExisting;
- (unsigned long long)layerSelectionOptionsForInsertingFromExistingLayer;
- (BOOL)allowsInsertLayerFromExistingLayer;

@end

