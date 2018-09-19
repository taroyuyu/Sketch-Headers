//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSInspectorItem.h"

@class MSHeaderInspectorItem, NSArray, NSButton, NSLayoutConstraint, NSTextField, NSView;

@interface MSExportInspectorViewController : MSInspectorItem
{
    NSView *_bottomLabelView;
    NSButton *_addExportFormatButton;
    NSButton *_knifeButton;
    NSButton *_exportPresetsMenuButton;
    NSTextField *_exportFormatLabelTextField;
    NSTextField *_headerLabel;
    NSLayoutConstraint *_textLabelRightConstraint;
    NSView *_nameView;
    NSArray *_formatViewControllers;
    double _textLabelRightConstraintExpandedWidth;
    MSHeaderInspectorItem *_headerItem;
}

+ (BOOL)canHandleLayer:(id)arg1;
@property(retain, nonatomic) MSHeaderInspectorItem *headerItem; // @synthesize headerItem=_headerItem;
@property(nonatomic) double textLabelRightConstraintExpandedWidth; // @synthesize textLabelRightConstraintExpandedWidth=_textLabelRightConstraintExpandedWidth;
@property(copy, nonatomic) NSArray *formatViewControllers; // @synthesize formatViewControllers=_formatViewControllers;
@property(retain, nonatomic) NSView *nameView; // @synthesize nameView=_nameView;
@property(retain, nonatomic) NSLayoutConstraint *textLabelRightConstraint; // @synthesize textLabelRightConstraint=_textLabelRightConstraint;
@property(retain, nonatomic) NSTextField *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) NSTextField *exportFormatLabelTextField; // @synthesize exportFormatLabelTextField=_exportFormatLabelTextField;
@property(retain, nonatomic) NSButton *exportPresetsMenuButton; // @synthesize exportPresetsMenuButton=_exportPresetsMenuButton;
@property(retain, nonatomic) NSButton *knifeButton; // @synthesize knifeButton=_knifeButton;
@property(retain, nonatomic) NSButton *addExportFormatButton; // @synthesize addExportFormatButton=_addExportFormatButton;
@property(retain, nonatomic) NSView *bottomLabelView; // @synthesize bottomLabelView=_bottomLabelView;
- (void).cxx_destruct;
- (id)firstResponderIgnoringFieldEditor;
- (void)editExportPresets:(id)arg1;
- (void)addExportPreset:(id)arg1;
- (void)unApplyAllExportPresets:(id)arg1;
- (void)applyExportPreset:(id)arg1;
- (id)findExportFormatAmong:(id)arg1 equalToFormat:(id)arg2;
- (BOOL)exportPresetAppliesToSelectedLayers:(id)arg1;
- (void)showExportPresetMenu:(id)arg1;
- (void)createSliceAction:(id)arg1;
- (id)document;
- (void)addExportFormat:(id)arg1;
@property(readonly, nonatomic) NSArray *views;
@property(readonly, nonatomic) BOOL hasExports;
- (BOOL)hasEnabledStyle;
- (void)prepare;
- (void)setLayers:(id)arg1;
- (void)viewDidLoad;

@end

