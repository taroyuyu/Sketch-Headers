//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "BCPopoverDelegate-Protocol.h"
#import "MSColorInspectorSectionDelegate-Protocol.h"
#import "MSColorModePickerControllerDelegate-Protocol.h"
#import "MSColorPickerViewControllerDelegate-Protocol.h"
#import "MSStylePartPreviewButtonDelegate-Protocol.h"
#import "NSTouchBarDelegate-Protocol.h"

@class MSColorInspectorSectionColor, MSColorInspectorSectionGradient, MSColorInspectorSectionPattern, MSColorModePickerController, MSColorPickerViewController, MSDocument, MSEventHandlerManager, MSLibraryAssetCollectionsController, MSPersistentAssetCollection, MSStackView, NSArray, NSString, NSTextField;
@protocol MSColorInspectorDelegate;

@interface MSColorInspector : NSViewController <MSColorInspectorSectionDelegate, BCPopoverDelegate, NSTouchBarDelegate, MSStylePartPreviewButtonDelegate, MSColorPickerViewControllerDelegate, MSColorModePickerControllerDelegate>
{
    BOOL _displayingDiverseStyles;
    NSArray *_styleParts;
    id <MSColorInspectorDelegate> _delegate;
    MSColorModePickerController *_colorModePickerController;
    MSColorInspectorSectionColor *_colorSection;
    MSColorInspectorSectionGradient *_gradientSection;
    MSColorInspectorSectionPattern *_patternSection;
    MSEventHandlerManager *_eventHandlerManager;
    MSDocument *_document;
    MSPersistentAssetCollection *_globalAssets;
    MSStackView *_stackView;
    MSLibraryAssetCollectionsController *_libraryAssetsController;
    MSColorPickerViewController *_colorPickerController;
    NSTextField *_textFieldToContinueEditing;
}

+ (id)presentColorInspectorPopoverForViewController:(id)arg1 delegate:(id)arg2 document:(id)arg3 globalAssets:(id)arg4 relativeToView:(id)arg5 setupHandler:(CDUnknownBlockType)arg6;
+ (id)presentColorInspectorPopoverWithDelegate:(id)arg1 document:(id)arg2 globalAssets:(id)arg3 relativeToView:(id)arg4 setupHandler:(CDUnknownBlockType)arg5;
+ (id)presentColorInspectorPopoverForViewController:(id)arg1 document:(id)arg2 globalAssets:(id)arg3 relativeToView:(id)arg4 setupHandler:(CDUnknownBlockType)arg5;
@property(nonatomic) __weak NSTextField *textFieldToContinueEditing; // @synthesize textFieldToContinueEditing=_textFieldToContinueEditing;
@property(retain, nonatomic) MSColorPickerViewController *colorPickerController; // @synthesize colorPickerController=_colorPickerController;
@property(retain, nonatomic) MSLibraryAssetCollectionsController *libraryAssetsController; // @synthesize libraryAssetsController=_libraryAssetsController;
@property(retain, nonatomic) MSStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) BOOL displayingDiverseStyles; // @synthesize displayingDiverseStyles=_displayingDiverseStyles;
@property(retain, nonatomic) MSPersistentAssetCollection *globalAssets; // @synthesize globalAssets=_globalAssets;
@property(retain, nonatomic) MSDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) MSEventHandlerManager *eventHandlerManager; // @synthesize eventHandlerManager=_eventHandlerManager;
@property(retain, nonatomic) MSColorInspectorSectionPattern *patternSection; // @synthesize patternSection=_patternSection;
@property(retain, nonatomic) MSColorInspectorSectionGradient *gradientSection; // @synthesize gradientSection=_gradientSection;
@property(retain, nonatomic) MSColorInspectorSectionColor *colorSection; // @synthesize colorSection=_colorSection;
@property(retain, nonatomic) MSColorModePickerController *colorModePickerController; // @synthesize colorModePickerController=_colorModePickerController;
@property(nonatomic) __weak id <MSColorInspectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *styleParts; // @synthesize styleParts=_styleParts;
- (void).cxx_destruct;
- (void)touchBarColorAction:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)customTouchBarItemIdentifiers;
- (id)makeTouchBar;
- (double)minimumPopoverContentViewHeight:(id)arg1;
- (id)popoverWillReturnUndoManager:(id)arg1;
- (BOOL)popoverShouldTrackSuperviewOfAttachedToView:(id)arg1;
- (void)adjustInspectorToColorPopoverIfNeeded:(id)arg1;
- (void)popoverWindowDidMove:(id)arg1;
- (void)popoverWindowSizeDidChange:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)colorMagnifierAction:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)modeDidChangeToFillType:(unsigned long long)arg1 gradientType:(long long)arg2;
- (void)reloadTouchBarsAfterSelectionChange:(id)arg1;
- (void)reloadTouchBars;
- (void)revertToDefaultFirstResponder;
- (void)adjustFirstResponder;
- (void)refreshTabbingCycle;
- (void)colorPickerController:(id)arg1 didChangeFillType:(unsigned long long)arg2 gradientType:(long long)arg3;
- (id)filteredStyleParts:(id)arg1;
- (void)reflectEffectiveStyleParts;
- (void)close;
- (void)refreshAction:(id)arg1;
- (void)colorChangedTo:(id)arg1;
- (void)subviewsChangedInColorPickerController:(id)arg1;
- (id)documentColorSpaceForClient:(id)arg1;
- (id)previewColorSpaceForClient:(id)arg1;
- (void)colorPickerController:(id)arg1 colorDidChange:(id)arg2;
- (void)setColorWithoutNotifying:(id)arg1;
- (void)setColor:(id)arg1;
- (void)changeColor:(id)arg1;
- (id)stylePartPreviewButtonPreviewColorSpace:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (id)documentRedoAction;
- (id)documentUndoAction;
- (void)viewWillDisappear;
- (void)setMaximumAvailableHeight:(long long)arg1;
- (void)validateEnableButtons;
- (id)currentSection;
- (long long)colorTypePickerModeForStyle:(id)arg1;
- (void)stack;
- (BOOL)stylePartIsGradient:(id)arg1;
- (void)findFrequentImages;
- (void)findFrequentColors;
- (void)findFrequentObjects;
- (void)prepareForDisplay;
- (void)setInitialColor:(id)arg1;
- (void)inspectorSectionDidUpdate:(id)arg1;
- (id)documentAssets;
- (void)didRemoveAssetOfType:(unsigned long long)arg1;
- (void)didAddAsset:(id)arg1;
- (void)setModePickerInitialMode;
- (void)updateModePickerForCurrentStyles;
- (void)colorDidChangeTo:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSender:(id)arg1 document:(id)arg2 handlerManager:(id)arg3 globalAssets:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

