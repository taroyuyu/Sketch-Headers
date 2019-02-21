//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSArtboardInspectorSection.h"

#import "MSInspectorItemProvider-Protocol.h"
#import "MSInspectorTableViewManagerDelegate-Protocol.h"

@class MSCollapsibleHeaderInspectorItem, MSImmutableSymbolMaster, MSInspectorTableViewManager, MSOverrideManagementController, MSSymbolMaster, MSTableContainerInspectorItem;

@interface MSSymbolMasterSection : MSArtboardInspectorSection <MSInspectorTableViewManagerDelegate, MSInspectorItemProvider>
{
    MSCollapsibleHeaderInspectorItem *_headerItem;
    MSTableContainerInspectorItem *_overrideManagementContainer;
    MSInspectorTableViewManager *_tableViewManager;
    MSOverrideManagementController *_overrideManagementController;
    MSImmutableSymbolMaster *_immutableSymbolMaster;
}

@property(nonatomic) __weak MSImmutableSymbolMaster *immutableSymbolMaster; // @synthesize immutableSymbolMaster=_immutableSymbolMaster;
- (void).cxx_destruct;
- (double)heightOfItemViewAtIndex:(unsigned long long)arg1;
- (BOOL)wantSeparatorAtIndex:(unsigned long long)arg1;
- (void)recycleItem:(id)arg1;
- (id)vendItemAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfItems;
- (id)parentViewControllerForTableViewManager:(id)arg1;
- (id)sectionsForTableViewManager:(id)arg1;
- (void)item:(id)arg1 wantsSectionToCollapse:(BOOL)arg2;
- (void)refreshIfNecessary:(id)arg1;
- (void)updateItems;
@property(readonly, nonatomic) MSSymbolMaster *symbolMaster;
@property(readonly, nonatomic) MSOverrideManagementController *overrideManagementController; // @synthesize overrideManagementController=_overrideManagementController;
@property(readonly, nonatomic) MSTableContainerInspectorItem *overrideManagementContainer; // @synthesize overrideManagementContainer=_overrideManagementContainer;
@property(readonly, nonatomic) MSInspectorTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(readonly, nonatomic) MSCollapsibleHeaderInspectorItem *headerItem; // @synthesize headerItem=_headerItem;

@end

