//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSAvailableOverride, MSSymbolMaster, NSString;

@interface MSOverrideManagementItem : NSObject
{
    unsigned long long _indentationLevel;
    MSSymbolMaster *_symbolMaster;
    MSAvailableOverride *_availableOverride;
}

@property(retain, nonatomic) MSAvailableOverride *availableOverride; // @synthesize availableOverride=_availableOverride;
@property(retain, nonatomic) MSSymbolMaster *symbolMaster; // @synthesize symbolMaster=_symbolMaster;
@property(nonatomic) unsigned long long indentationLevel; // @synthesize indentationLevel=_indentationLevel;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *title;
- (id)initWithAvailableOverride:(id)arg1 onMaster:(id)arg2;

@end

