//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSInspectorItem.h"

@class MSTextLayerItem, NSMenuItem, NSPopUpButton, NSSegmentedControl;

@interface MSParagraphStyleItem : MSInspectorItem
{
    MSTextLayerItem *_textItem;
    NSPopUpButton *_decorationButton;
    NSSegmentedControl *_transformControl;
    NSMenuItem *_titleItem;
}

@property(retain, nonatomic) NSMenuItem *titleItem; // @synthesize titleItem=_titleItem;
@property(retain, nonatomic) NSSegmentedControl *transformControl; // @synthesize transformControl=_transformControl;
@property(retain, nonatomic) NSPopUpButton *decorationButton; // @synthesize decorationButton=_decorationButton;
@property(nonatomic) __weak MSTextLayerItem *textItem; // @synthesize textItem=_textItem;
- (void).cxx_destruct;
- (id)firstOccurrenceOfAttributeWithName:(id)arg1;
- (void)changeFontPropertiesOfTextObjectsInBlock:(CDUnknownBlockType)arg1;
- (void)transformPopUpAction:(id)arg1;
- (void)prepareTransformPopUpButton;
- (void)decorationButtonAction:(id)arg1;
- (void)prepareDecorationButton;
- (void)updateDisplayedValues;
- (void)dealloc;
- (void)awakeFromNib;
- (void)viewDidLoad;
- (id)init;

@end

