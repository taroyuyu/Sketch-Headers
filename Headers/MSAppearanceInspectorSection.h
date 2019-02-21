//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSBaseInspectorSection.h"

@class MSCollapsibleHeaderInspectorItem, MSOpacityBlendingInspectorItem, MSSharedStylesInspectorItem;

@interface MSAppearanceInspectorSection : MSBaseInspectorSection
{
    MSCollapsibleHeaderInspectorItem *_headerItem;
    MSSharedStylesInspectorItem *_sharedStyleItem;
    MSOpacityBlendingInspectorItem *_opacityItem;
}

@property(retain, nonatomic) MSOpacityBlendingInspectorItem *opacityItem; // @synthesize opacityItem=_opacityItem;
@property(retain, nonatomic) MSSharedStylesInspectorItem *sharedStyleItem; // @synthesize sharedStyleItem=_sharedStyleItem;
@property(retain, nonatomic) MSCollapsibleHeaderInspectorItem *headerItem; // @synthesize headerItem=_headerItem;
- (void).cxx_destruct;
- (void)item:(id)arg1 wantsSectionToCollapse:(BOOL)arg2;
- (void)refreshIfNecessary:(id)arg1;
- (void)beginRenameSharedObject:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateItems;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

