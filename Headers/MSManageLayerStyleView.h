//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSManageSharedObjectBaseViewController.h"

@class NSMutableDictionary;

@interface MSManageLayerStyleView : MSManageSharedObjectBaseViewController
{
    NSMutableDictionary *_layerStylePreviews;
}

@property(retain, nonatomic) NSMutableDictionary *layerStylePreviews; // @synthesize layerStylePreviews=_layerStylePreviews;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)generateSymbolPreviews;
- (void)awakeFromNib;
- (void)removeSharedObject:(id)arg1;
- (id)sharedObjectsSortedByName;

@end

