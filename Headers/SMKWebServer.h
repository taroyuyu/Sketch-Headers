//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCDWebServerDelegate-Protocol.h"
#import "SMKDiskCacheDelegate-Protocol.h"

@class GCDWebServer, NSArray, NSDictionary, NSString, NSURL, SMKDiskCache;
@protocol SMKWebServerDataSource;

@interface SMKWebServer : NSObject <GCDWebServerDelegate, SMKDiskCacheDelegate>
{
    id <SMKWebServerDataSource> _dataSource;
    GCDWebServer *_server;
    SMKDiskCache *_diskCache;
    NSArray *_cachedExports;
    NSDictionary *_assetAccounts;
}

@property(copy) NSDictionary *assetAccounts; // @synthesize assetAccounts=_assetAccounts;
@property(copy) NSArray *cachedExports; // @synthesize cachedExports=_cachedExports;
@property(retain, nonatomic) SMKDiskCache *diskCache; // @synthesize diskCache=_diskCache;
@property(retain, nonatomic) GCDWebServer *server; // @synthesize server=_server;
@property(nonatomic) __weak id <SMKWebServerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)diskCache:(id)arg1 dataForKey:(id)arg2;
- (void)webServerDidStop:(id)arg1;
- (void)webServerDidStart:(id)arg1;
- (id)dataFromImage:(id)arg1;
- (id)artboardThumbnailFromPath:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (id)renderedDataForExportRequest:(id)arg1;
- (id)dataForExportRequest:(id)arg1;
- (void)invalidateAllArtboards;
- (void)invalidateArtboardID:(id)arg1;
- (id)cachedExportRequestsWithArtboardID:(id)arg1;
- (id)artboardResponseForRequest:(id)arg1;
- (id)resourceResponseForRequest:(id)arg1;
- (id)defaultWebServerFilePath;
- (id)resourcesPath;
- (void)deauthorizeAdvertisementID:(id)arg1;
- (id)tokenForAdvertisementID:(id)arg1;
- (BOOL)isTokenValid:(id)arg1;
- (id)authorizeAdvertisementID:(id)arg1;
@property(readonly, nonatomic) unsigned long long port;
@property(readonly, nonatomic) NSURL *URL;
- (id)bonjourName;
- (void)stop;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

