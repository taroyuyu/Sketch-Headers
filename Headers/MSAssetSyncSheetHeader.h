//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSAssetSyncSheetItem-Protocol.h"

@class MSAssetLibrary, NSString;

@interface MSAssetSyncSheetHeader : NSObject <MSAssetSyncSheetItem>
{
    MSAssetLibrary *library;
}

@property(retain, nonatomic) MSAssetLibrary *library; // @synthesize library;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL shouldSync;
@property(readonly, nonatomic) NSString *modifiedDateString;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) unsigned long long type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

