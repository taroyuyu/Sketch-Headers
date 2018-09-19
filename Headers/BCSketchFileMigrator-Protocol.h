//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData;

@protocol BCSketchFileMigrator <NSObject>
- (void)migrateResourcesNamed:(NSArray *)arg1 inFolderAtBookmark:(NSData *)arg2 withReply:(void (^)(BCSketchFileMigratorError *))arg3;
- (void)migrateDocumentAtBookmark:(NSData *)arg1 intoFolderAtBookmark:(NSData *)arg2 withReply:(void (^)(BCSketchFileMigratorError *))arg3;
- (void)validateDocumentAtBookmark:(NSData *)arg1 withReply:(void (^)(BCSketchFileMigratorError *))arg2;
@end

