//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSBuiltinDataSupplierGroup, MSDataSupplierGroup, MSDataTableCellView, MSLocalDataSupplierGroup, MSPluginBundle, MSPluginDataSupplierGroup, NSColor, NSImage, NSString;

@interface MSDataPreferenceItem : NSObject
{
    MSDataSupplierGroup *_dataGroup;
    NSImage *_preview;
    MSDataTableCellView *_cellView;
    NSString *_modificationDate;
    NSString *_secondaryTitle;
}

+ (id)keyPathsForValuesAffectingSecondaryTitle;
+ (id)keyPathsForValuesAffectingSecondaryTextFieldColor;
+ (id)keyPathsForValuesAffectingPrimaryTextFieldColor;
+ (id)preferenceItemForLocalData:(id)arg1;
@property(retain, nonatomic) NSString *secondaryTitle; // @synthesize secondaryTitle=_secondaryTitle;
@property(readonly, nonatomic) NSString *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(nonatomic) __weak MSDataTableCellView *cellView; // @synthesize cellView=_cellView;
@property(retain, nonatomic) NSImage *preview; // @synthesize preview=_preview;
@property(readonly, nonatomic) MSDataSupplierGroup *dataGroup; // @synthesize dataGroup=_dataGroup;
- (void).cxx_destruct;
- (id)dataTypeString;
@property(readonly, nonatomic) NSColor *secondaryTextFieldColor;
@property(readonly, nonatomic) NSColor *primaryTextFieldColor;
@property(readonly, nonatomic) NSImage *pluginBundleIcon;
@property(readonly, nonatomic) MSPluginBundle *pluginBundle;
@property(readonly, nonatomic) BOOL canRevealInFinder;
- (id)commaSeperatedListOfDataSupplierNames:(id)arg1;
@property(readonly, nonatomic) NSString *namePlusPluginName;
@property(readonly) BOOL canBeDeleted;
@property(nonatomic) BOOL enabled;
@property(readonly, nonatomic) BOOL valid;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) MSBuiltinDataSupplierGroup *builtinDataGroup;
@property(readonly, nonatomic) MSPluginDataSupplierGroup *pluginDataGroup;
@property(readonly, nonatomic) MSLocalDataSupplierGroup *localDataGroup;
- (id)initWithData:(id)arg1;

@end

