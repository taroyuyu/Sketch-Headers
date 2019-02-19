//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "MSAssetCollectionViewSourceDelegate-Protocol.h"
#import "MSAssetPickerControllerDelegate-Protocol.h"
#import "MSAssetPickerScrubberControllerDelegate-Protocol.h"
#import "MSCollapsibleHeaderInspectorItemTarget-Protocol.h"
#import "MSPreviewColorSpaceProvider-Protocol.h"
#import "NSTouchBarDelegate-Protocol.h"

@class MSAssetPickerController, MSAssetPickerScrubberController, MSCollapsibleHeaderInspectorItem, NSArray, NSString;
@protocol MSColorInspectorSectionDelegate;

@interface MSColorInspectorSection : NSViewController <MSPreviewColorSpaceProvider, MSAssetPickerControllerDelegate, MSAssetCollectionViewSourceDelegate, MSCollapsibleHeaderInspectorItemTarget, MSAssetPickerScrubberControllerDelegate, NSTouchBarDelegate>
{
    id <MSColorInspectorSectionDelegate> _delegate;
    NSArray *_styleParts;
    MSCollapsibleHeaderInspectorItem *_assetPickerHeaderItem;
    MSAssetPickerController *_assetPickerController;
    NSViewController *_noContentController;
    MSAssetPickerScrubberController *_assetPickerScrubberController;
}

+ (void)refreshColorPickerViewHeight:(id)arg1;
+ (void)drawCheckerboardBackgroundInRect:(struct CGRect)arg1 size:(double)arg2 foreColor:(struct CGColor *)arg3 backgroundColor:(struct CGColor *)arg4;
+ (id)presetPickerVisibilityDefaultsKey;
+ (void)initialize;
@property(retain, nonatomic) MSAssetPickerScrubberController *assetPickerScrubberController; // @synthesize assetPickerScrubberController=_assetPickerScrubberController;
@property(retain, nonatomic) NSViewController *noContentController; // @synthesize noContentController=_noContentController;
@property(retain, nonatomic) MSAssetPickerController *assetPickerController; // @synthesize assetPickerController=_assetPickerController;
@property(retain, nonatomic) MSCollapsibleHeaderInspectorItem *assetPickerHeaderItem; // @synthesize assetPickerHeaderItem=_assetPickerHeaderItem;
@property(copy, nonatomic) NSArray *styleParts; // @synthesize styleParts=_styleParts;
@property(nonatomic) __weak id <MSColorInspectorSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)assetPickerScrubberController:(id)arg1 didSelectAsset:(id)arg2;
- (id)makeTouchBarItemForIdentifier:(id)arg1;
- (id)customTouchBarItemIdentifiers;
- (void)collectionViewSourceDidMutate:(id)arg1;
- (void)adjustFirstResponder:(id)arg1;
- (void)assetPickerController:(id)arg1 didSelectDataSource:(id)arg2;
- (void)layoutChangedForAssetPickerCollection:(id)arg1;
- (id)createNewAssetForAssetPickerController:(id)arg1;
- (void)assetPickerController:(id)arg1 didSelectAsset:(id)arg2;
- (id)globalAssetPickerDataSourceWithAssetType:(unsigned long long)arg1 name:(id)arg2 title:(id)arg3;
- (id)documentAssetPickerDataSourceWithAssetType:(unsigned long long)arg1 name:(id)arg2 title:(id)arg3;
- (void)controlDidSelectAsset:(id)arg1;
- (id)allAssetPickerDataSources;
- (id)foreignAssetPickerDataSources;
- (id)assetPickerDataSources;
- (void)item:(id)arg1 wantsSectionToCollapse:(BOOL)arg2;
- (unsigned long long)assetType;
- (id)viewsWithColorPickerView:(id)arg1 headerAccessories:(id)arg2;
- (void)refreshAction:(id)arg1;
- (void)dealloc;
- (id)createPresetFromCurrentSelection;
- (id)previewColorSpaceForClient:(id)arg1;
- (void)colorPickerChangedTo:(id)arg1;
- (void)popoverWillClose;
- (void)validate;
- (BOOL)isEnabled;
- (unsigned long long)fillType;
- (double)minimumHeight;
- (id)scrollViewWithStackedViews:(id)arg1;
- (id)stackViewsInVerticalScrollView:(id)arg1 frame:(struct CGRect)arg2;
- (void)assetDataSourcesMighHaveChanged;
- (void)didMoveThroughHistory:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

