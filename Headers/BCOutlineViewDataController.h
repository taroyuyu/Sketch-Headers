//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BCCache, BCFilterInfo, NSArray;
@protocol BCOutlineViewDataControllerDataSource, BCOutlineViewDataControllerDelegate;

@interface BCOutlineViewDataController : NSObject
{
    NSObject<BCOutlineViewDataControllerDelegate> *_delegate;
    NSObject<BCOutlineViewDataControllerDataSource> *_dataSource;
    BCFilterInfo *_filter;
    BCCache *_cachedChildrenOfNodesByFilterCacheGeneration;
}

@property(readonly, nonatomic) BCCache *cachedChildrenOfNodesByFilterCacheGeneration; // @synthesize cachedChildrenOfNodesByFilterCacheGeneration=_cachedChildrenOfNodesByFilterCacheGeneration;
@property(retain, nonatomic) BCFilterInfo *filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) NSObject<BCOutlineViewDataControllerDataSource> *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSObject<BCOutlineViewDataControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) id rootObject;
- (void)refreshPreviewsOnNode:(id)arg1;
- (void)handleBadgePressedOnNode:(id)arg1 withAltState:(BOOL)arg2;
- (BOOL)isNodeHighlighted:(id)arg1;
- (void)hoverNodeDidChangeTo:(id)arg1;
- (id)menuItemsForSelectedObjects:(id)arg1;
@property(readonly, nonatomic) BOOL canProvideContextMenuItems;
@property(readonly, nonatomic) NSArray *dragTypes;
- (void)updateNode:(id)arg1 expandedState:(unsigned long long)arg2;
- (BOOL)isNodeExpandable:(id)arg1;
- (BOOL)multipleNodesSelected;
- (BOOL)isNodeExpanded:(id)arg1;
- (BOOL)nodeHasSharedStyle:(id)arg1;
- (BOOL)isNodeLockedOnCanvas:(id)arg1;
- (BOOL)isAncestorOfNodeHiddenOnCanvas:(id)arg1;
- (BOOL)isNodeHiddenOnCanvas:(id)arg1;
- (BOOL)isNodeSelected:(id)arg1;
- (void)changeSelectionTo:(id)arg1;
- (BOOL)handleDragWithPasteboard:(id)arg1 forProposedItem:(id)arg2 proposedChildIndex:(long long)arg3 copying:(BOOL)arg4 validationOnly:(BOOL)arg5;
- (BOOL)writeNodes:(id)arg1 toPasteboard:(id)arg2;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1 forDraggedItems:(id)arg2;
- (BOOL)shouldExpandNode:(id)arg1;
- (id)childOfNode:(id)arg1 atIndex:(long long)arg2;
- (unsigned long long)numberOfChildrenOfNode:(id)arg1;
- (id)childrenOfNode:(id)arg1;
- (id)keyForCachingChildrenOfNode:(id)arg1;
- (BOOL)nodeOrChildMatchesFilter:(id)arg1;
- (void)willReloadNodes;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2;
- (id)init;

@end

