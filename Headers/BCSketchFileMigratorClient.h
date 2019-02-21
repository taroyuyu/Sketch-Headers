//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol BCSketchFileMigrator, OS_dispatch_semaphore;

@interface BCSketchFileMigratorClient : NSObject
{
    NSXPCConnection *_connection;
    id <BCSketchFileMigrator> _proxy;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    CDUnknownBlockType _reply;
}

@property(copy, nonatomic) CDUnknownBlockType reply; // @synthesize reply=_reply;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) id <BCSketchFileMigrator> proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)handleXPCError:(id)arg1;
- (void)waitUntilDoneIfSynchronous;
- (void)sendReplyWithError:(id)arg1 options:(unsigned long long)arg2;
- (void)invalidate;
- (void)migrateResourcesWithNames:(id)arg1 atURL:(id)arg2 options:(unsigned long long)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)migrateDocumentAtURL:(id)arg1 intoFolderAtURL:(id)arg2 options:(unsigned long long)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)validateDocumentAtURL:(id)arg1 options:(unsigned long long)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end

