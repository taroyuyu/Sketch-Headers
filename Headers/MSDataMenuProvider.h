//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSMenuDelegate-Protocol.h"

@class MSDataSupplierManager, NSString;
@protocol MSDataMenuProviderDelegate;

@interface MSDataMenuProvider : NSObject <NSMenuDelegate>
{
    MSDataSupplierManager *_dataManager;
    id <MSDataMenuProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <MSDataMenuProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MSDataSupplierManager *dataManager; // @synthesize dataManager=_dataManager;
- (void).cxx_destruct;
- (void)menuNeedsUpdate:(id)arg1;
- (id)pluginKeysDictionaryFromDataSuppliers:(id)arg1;
- (id)pluginNameForIdentifier:(id)arg1;
- (id)sortedMenuItems:(id)arg1;
- (id)dataSuppliersForDataType:(unsigned long long)arg1;
- (id)menuItemsForDataType:(unsigned long long)arg1 indentationLevel:(long long)arg2;
- (id)menuItemsForGroups:(id)arg1 indentationLevel:(long long)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)menuItemAction:(id)arg1;
- (id)shadowImageFromImage:(id)arg1;
- (id)addImageToMenuItems:(id)arg1;
- (BOOL)addDataSuppliersForType:(unsigned long long)arg1 toMenu:(id)arg2 typeTitle:(id)arg3;
- (void)updateMenu:(id)arg1;
- (void)addMenusForMultipleTypesToMenu:(id)arg1;
- (void)updateOverridesMenu:(id)arg1;
- (id)refreshDataMenuItemsWithOverridesMenu:(BOOL)arg1 displayKeyboardShortcuts:(BOOL)arg2;
- (id)clearDataMenuItem;
- (id)overridesMenu;
- (id)menu;
- (id)initWithDataManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

