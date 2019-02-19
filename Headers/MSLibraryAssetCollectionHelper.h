//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSImmutableAssetCollection, NSIndexSet, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface MSLibraryAssetCollectionHelper : NSObject
{
    BOOL _markedAsRead;
    NSString *_libraryIdentifier;
    MSImmutableAssetCollection *_assetCollection;
    NSString *_name;
    unsigned long long _assetType;
    NSURL *_dataURL;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id _lastReadData;
    NSIndexSet *_updatedIndexes;
}

+ (id)hashableRepresentationForAsset:(id)arg1 withName:(id)arg2;
+ (void)gatherSetForType:(unsigned long long)arg1 fromCollection:(id)arg2 andWriteToURL:(id)arg3;
+ (id)readSetFromURL:(id)arg1;
+ (id)indexesOfAssetsInCollection:(id)arg1 ofType:(unsigned long long)arg2 notContainedIn:(id)arg3;
@property(nonatomic) BOOL markedAsRead; // @synthesize markedAsRead=_markedAsRead;
@property(retain, nonatomic) NSIndexSet *updatedIndexes; // @synthesize updatedIndexes=_updatedIndexes;
@property(retain, nonatomic) id lastReadData; // @synthesize lastReadData=_lastReadData;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSURL *dataURL; // @synthesize dataURL=_dataURL;
@property(nonatomic) unsigned long long assetType; // @synthesize assetType=_assetType;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) MSImmutableAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(retain, nonatomic) NSString *libraryIdentifier; // @synthesize libraryIdentifier=_libraryIdentifier;
- (void).cxx_destruct;
- (void)readLastReadAssetsIfNecessary:(CDUnknownBlockType)arg1;
- (void)updateNewIndexesIfNecessary:(CDUnknownBlockType)arg1;
- (void)markCollectionAsRead:(CDUnknownBlockType)arg1;
- (void)getIndexesOfNewAssets:(CDUnknownBlockType)arg1;
- (id)initWithCollection:(id)arg1 libraryIdentifier:(id)arg2 name:(id)arg3 assetType:(unsigned long long)arg4 dataURL:(id)arg5 ioQueue:(id)arg6;
- (void)collectionViewSourceMarkUpdatedIndexesAsRead:(id)arg1;
- (void)collectionViewSourceDidMutate:(id)arg1;
- (void)collectionViewSource:(id)arg1 getUpdatedIndexes:(CDUnknownBlockType)arg2;
- (id)dataSource;

@end

