//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_TtC6Sketch28MSSelectionOverlayController.h"

@class NSArray;

@interface _TtC6Sketch28MSSelectionOverlayController (Sketch2)
@property(nonatomic, readonly) BOOL shouldShowSelectedOverrides;
@property(nonatomic) BOOL preferencesWantSelection;
@property(nonatomic) BOOL currentEventHandlerWantsStandardSelectionControls;
- (void)beginToolWithHandleOfKind:(id)arg1;
- (void)beginToolWithHandle:(long long)arg1;
- (void)beginToolWithHiddenHandles;
- (void)resetMode;
- (BOOL)isStackSpacingHandleAtPoint:(struct CGPoint)arg1;
@property(nonatomic, copy) NSArray *selectedLayers;
@end
