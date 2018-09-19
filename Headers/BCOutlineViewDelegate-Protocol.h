//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BCOutlineViewDataController, NSArray, NSPasteboard, NSURL;

@protocol BCOutlineViewDelegate <NSObject>
- (void)dataController:(BCOutlineViewDataController *)arg1 refreshPreviewsOnNode:(id)arg2;
- (void)dataController:(BCOutlineViewDataController *)arg1 handleBadgePressedOnNode:(id)arg2 withAltState:(BOOL)arg3;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 copyFromPasteboard:(NSPasteboard *)arg2 toParent:(id)arg3 after:(id)arg4;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 moveFromPasteboard:(NSPasteboard *)arg2 toParent:(id)arg3 after:(id)arg4;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 canCopyFromPasteboard:(NSPasteboard *)arg2 toParent:(id)arg3 after:(id)arg4;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 canMoveFromPasteboard:(NSPasteboard *)arg2 toParent:(id)arg3 after:(id)arg4;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 writeNodes:(NSArray *)arg2 toPasteboard:(NSPasteboard *)arg3;
- (NSArray *)dragTypesForDataController:(BCOutlineViewDataController *)arg1;
- (NSArray *)dataController:(BCOutlineViewDataController *)arg1 exportNodes:(NSArray *)arg2 toFolder:(NSURL *)arg3;
- (void)dataController:(BCOutlineViewDataController *)arg1 updateNode:(id)arg2 expandedState:(unsigned long long)arg3;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 isNodeHighlighted:(id)arg2;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 isNodeExpandable:(id)arg2;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 isNodeExpanded:(id)arg2;
- (void)dataController:(BCOutlineViewDataController *)arg1 changeSelectionTo:(NSArray *)arg2;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 nodeHasSharedStyle:(id)arg2;
- (BOOL)multipleNodesSelectedForDataController:(BCOutlineViewDataController *)arg1;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 isNodeLockedOnCanvas:(id)arg2;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 isAncestorOfNodeHiddenOnCanvas:(id)arg2;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 isNodeHiddenOnCanvas:(id)arg2;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 isNodeSelected:(id)arg2;

@optional
- (void)dataController:(BCOutlineViewDataController *)arg1 hoverNodeDidChangeTo:(id)arg2;
- (NSArray *)dataController:(BCOutlineViewDataController *)arg1 menuItemsForSelectedObjects:(NSArray *)arg2;
@end

