//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSPreferencePane.h"

#import "MSDropableViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"

@class MSDataSupplierManager, MSDataTableView, NSArray, NSArrayController, NSButton, NSMenu, NSPredicate, NSSearchField, NSString, NSWindow;

@interface MSDataPreferencePane : MSPreferencePane <MSDropableViewDelegate, NSTableViewDelegate, NSTableViewDataSource, NSTextFieldDelegate>
{
    BOOL _shouldEnableCogMenu;
    BOOL _enableShowInFinder;
    MSDataTableView *_tableView;
    NSArrayController *_dataArrayController;
    NSMenu *_contextMenu;
    NSArray *_data;
    NSWindow *_chooseDataPanelWindow;
    NSArray *_selectedItemIdentifiers;
    NSButton *_spyglassFilterButton;
    NSSearchField *_filterTextField;
    NSPredicate *_dataFilterPredicate;
}

+ (id)toolbarIcon;
+ (id)title;
+ (id)identifier;
@property(copy, nonatomic) NSPredicate *dataFilterPredicate; // @synthesize dataFilterPredicate=_dataFilterPredicate;
@property(retain, nonatomic) NSSearchField *filterTextField; // @synthesize filterTextField=_filterTextField;
@property(retain, nonatomic) NSButton *spyglassFilterButton; // @synthesize spyglassFilterButton=_spyglassFilterButton;
@property(copy, nonatomic) NSArray *selectedItemIdentifiers; // @synthesize selectedItemIdentifiers=_selectedItemIdentifiers;
@property(nonatomic) __weak NSWindow *chooseDataPanelWindow; // @synthesize chooseDataPanelWindow=_chooseDataPanelWindow;
@property(copy, nonatomic) NSArray *data; // @synthesize data=_data;
@property(nonatomic) BOOL enableShowInFinder; // @synthesize enableShowInFinder=_enableShowInFinder;
@property(nonatomic) BOOL shouldEnableCogMenu; // @synthesize shouldEnableCogMenu=_shouldEnableCogMenu;
@property(retain, nonatomic) NSMenu *contextMenu; // @synthesize contextMenu=_contextMenu;
@property(retain, nonatomic) NSArrayController *dataArrayController; // @synthesize dataArrayController=_dataArrayController;
@property(nonatomic) __weak MSDataTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)setSelectedIndexesFromSelectionIdentifierArray;
- (void)setSelectionIdentifierArrayFromSelectionIndexes;
- (void)didSwitchToPane;
- (void)selectionDidChange;
- (void)reloadData;
- (void)learnMore:(id)arg1;
- (void)viewDidAppear;
- (void)showContextMenu:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateShowPluginMenuItem:(id)arg1;
- (BOOL)validateRevealInFinderMenuItem:(id)arg1;
- (void)revealInFinder:(id)arg1;
- (void)showPlugin:(id)arg1;
- (void)revealLocalDataItemInFinder:(id)arg1;
- (void)revealInFinderAction:(id)arg1;
- (unsigned long long)view:(id)arg1 draggingUpdated:(id)arg2;
- (unsigned long long)view:(id)arg1 draggingEntered:(id)arg2;
- (id)draggedURLsFromPasteboard:(id)arg1;
- (BOOL)view:(id)arg1 performDragOperation:(id)arg2;
- (id)draggedTypesForView:(id)arg1;
- (void)dismissAlertSheet;
- (BOOL)validateRemoveDataMenuItem:(id)arg1;
- (id)alertMessageTextForRemovingDataSuppliers:(id)arg1;
- (void)removeDataAction:(id)arg1;
- (void)importLocalData:(id)arg1;
- (void)showAddLocalDataErrorWithMessage:(id)arg1 info:(id)arg2;
- (void)showFailedToAddDataSupplierFromURL:(id)arg1;
- (void)showDataSupplierGroupAlreadyAddedMessage:(id)arg1;
- (void)removeLocalDataSupplierGroupsContainedByURL:(id)arg1;
- (void)addLocalDataFromURLs:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (id)searchString;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)activateSearchField:(id)arg1;
@property(readonly, nonatomic) NSArray *selectedData;
@property(readonly, nonatomic) MSDataSupplierManager *dataSupplierManager;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

