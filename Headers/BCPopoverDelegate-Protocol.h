//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BCPopover, NSNotification, NSUndoManager;

@protocol BCPopoverDelegate <NSObject>

@optional
- (BOOL)popoverShouldTrackSuperviewOfAttachedToView:(BCPopover *)arg1;
- (NSUndoManager *)popoverWillReturnUndoManager:(BCPopover *)arg1;
- (BOOL)popoverShouldAnimateOnContentFrameDidChange:(NSNotification *)arg1;
- (BOOL)popoverShouldCauseExistingPopoversToClose:(BCPopover *)arg1;
- (BOOL)popoverShouldCloseWhenNewPopoverOpens:(BCPopover *)arg1 newPopover:(BCPopover *)arg2;
- (void)popoverWindowDidMove:(BCPopover *)arg1;
- (void)popoverWindowSizeDidChange:(BCPopover *)arg1;
- (void)popoverWillClose:(BCPopover *)arg1;
- (void)popoverWillShow:(NSNotification *)arg1;
- (double)minimumPopoverContentViewHeight:(BCPopover *)arg1;
@end

