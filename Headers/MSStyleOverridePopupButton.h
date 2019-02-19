//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPopUpButton.h>

@class MSAssetLibraryController, MSForeignObjectMenuBuilder, MSSharedStyleReference;

@interface MSStyleOverridePopupButton : NSPopUpButton
{
    MSForeignObjectMenuBuilder *_menuBuilder;
    MSSharedStyleReference *_originalSharedStyle;
    MSSharedStyleReference *_currentSharedStyle;
    MSSharedStyleReference *_symbolDefaultSharedStyle;
    MSSharedStyleReference *_importableDefaultSharedStyle;
}

@property(retain, nonatomic) MSSharedStyleReference *importableDefaultSharedStyle; // @synthesize importableDefaultSharedStyle=_importableDefaultSharedStyle;
@property(retain, nonatomic) MSSharedStyleReference *symbolDefaultSharedStyle; // @synthesize symbolDefaultSharedStyle=_symbolDefaultSharedStyle;
@property(retain, nonatomic) MSSharedStyleReference *currentSharedStyle; // @synthesize currentSharedStyle=_currentSharedStyle;
@property(retain, nonatomic) MSSharedStyleReference *originalSharedStyle; // @synthesize originalSharedStyle=_originalSharedStyle;
@property(retain, nonatomic) MSForeignObjectMenuBuilder *menuBuilder; // @synthesize menuBuilder=_menuBuilder;
- (void).cxx_destruct;
- (void)buildMenuForOverride:(id)arg1 withMenuBuilder:(id)arg2 document:(id)arg3 imageCallback:(CDUnknownBlockType)arg4;
- (void)setupResetMenuForPrimaryOverride:(id)arg1 document:(id)arg2;
- (void)applyPreviewImage:(id)arg1;
- (void)setupButtonTitleWithPrimaryOverride:(id)arg1 document:(id)arg2 imageCallback:(CDUnknownBlockType)arg3;
- (void)addMenuItemForStyle:(id)arg1 withName:(id)arg2 document:(id)arg3 imageCallback:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) MSAssetLibraryController *libraryController;

@end

