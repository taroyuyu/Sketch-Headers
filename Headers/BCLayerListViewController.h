//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BCLayerList/BCOutlineViewController.h>

@interface BCLayerListViewController : BCOutlineViewController
{
    id _floatingGroupRowItemToScrollToAfterCollapse;
}

+ (id)itemForExpansionStateNotification:(id)arg1;
@property(retain, nonatomic) id floatingGroupRowItemToScrollToAfterCollapse; // @synthesize floatingGroupRowItemToScrollToAfterCollapse=_floatingGroupRowItemToScrollToAfterCollapse;
- (void).cxx_destruct;
- (void)refreshRowHeightOfGroupItem:(id)arg1 didExpand:(BOOL)arg2;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemWillCollapse:(id)arg1;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;

@end

