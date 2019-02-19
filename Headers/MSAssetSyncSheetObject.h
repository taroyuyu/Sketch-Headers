//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSAssetSyncSheetItem-Protocol.h"

@class MSAssetLibrary, MSForeignObject, MSModelObject, NSString;
@protocol BCSortable><MSSharedObjectStyling;

@interface MSAssetSyncSheetObject : NSObject <MSAssetSyncSheetItem>
{
    BOOL _shouldSync;
    MSAssetLibrary *library;
    MSForeignObject *_foreignObject;
    MSModelObject<BCSortable><MSSharedObjectStyling> *_libraryMaster;
}

@property(nonatomic) BOOL shouldSync; // @synthesize shouldSync=_shouldSync;
@property(retain, nonatomic) MSModelObject<BCSortable><MSSharedObjectStyling> *libraryMaster; // @synthesize libraryMaster=_libraryMaster;
@property(retain, nonatomic) MSForeignObject *foreignObject; // @synthesize foreignObject=_foreignObject;
@property(retain, nonatomic) MSAssetLibrary *library; // @synthesize library;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *tooltipForRemote;
@property(readonly, nonatomic) NSString *tooltipForLocal;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) unsigned long long type;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

