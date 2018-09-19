//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class MSFolderMonitor, NSString, NSURL;

@interface MSAssetLibraryUpdatingInfo : NSObject <NSCoding>
{
    NSURL *_downloadURL;
    NSString *_versionNumberForUpdate;
    unsigned long long _downloadSize;
    NSString *_libraryName;
    NSURL *_imageURL;
    MSFolderMonitor *_folderMonitor;
    NSString *_downloadTaskIdentifier;
    NSURL *_shareLink;
}

@property(readonly, nonatomic) NSURL *shareLink; // @synthesize shareLink=_shareLink;
@property(copy, nonatomic) NSString *downloadTaskIdentifier; // @synthesize downloadTaskIdentifier=_downloadTaskIdentifier;
@property(retain, nonatomic) MSFolderMonitor *folderMonitor; // @synthesize folderMonitor=_folderMonitor;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) NSString *libraryName; // @synthesize libraryName=_libraryName;
@property(readonly, nonatomic) unsigned long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(readonly, nonatomic) NSString *versionNumberForUpdate; // @synthesize versionNumberForUpdate=_versionNumberForUpdate;
@property(readonly, nonatomic) NSURL *downloadURL; // @synthesize downloadURL=_downloadURL;
- (void).cxx_destruct;
- (BOOL)isHigherVersionThan:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAssetLibraryUpdatingInfo:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDownloadURL:(id)arg1 libraryName:(id)arg2 imageURL:(id)arg3 newVersionNumber:(id)arg4 shareLink:(id)arg5 downloadSize:(unsigned long long)arg6;

@end

