//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "MSInspectorItemDelegate-Protocol.h"
#import "MSInspectorSection-Protocol.h"

@class MSLayerArray, NSArray, NSString;
@protocol MSInspectorSectionDelegate;

@interface MSBaseInspectorSection : NSViewController <MSInspectorSection, MSInspectorItemDelegate>
{
    BOOL _valuesPossiblyDirty;
    MSLayerArray *_layers;
    id <MSInspectorSectionDelegate> _delegate;
    NSArray *_items;
}

@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <MSInspectorSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL valuesPossiblyDirty; // @synthesize valuesPossiblyDirty=_valuesPossiblyDirty;
@property(retain, nonatomic) MSLayerArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (id)documentForInspectorItem:(id)arg1;
- (void)valuesPossiblyChanged:(id)arg1;
- (void)itemDidResize:(id)arg1;
- (void)refreshIfNecessary:(id)arg1;
- (void)valuesPossiblyChanged;
- (struct NSEdgeInsets)separatorInset;
- (BOOL)wantsSeparatorAfterViews;
- (void)assignItemLayers;
- (void)updateItems;
- (void)sectionWithIdentifierWillCollapse:(id)arg1;
@property(readonly, nonatomic) BOOL selectionContainsChildrenOfCompoundPath;
- (id)views;
- (void)viewDidLoad;
- (void)loadView;
- (void)changeTextLayerFont:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

