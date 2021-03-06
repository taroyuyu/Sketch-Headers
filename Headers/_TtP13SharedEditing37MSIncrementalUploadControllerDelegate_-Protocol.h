//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSCloudExportableDocument-Protocol.h"

@class MSCollaborationStatusInfo, MSImmutableDocumentData, MSPatch, MSPatchContainer, NSError, NSString, _TtC13SharedEditing29MSIncrementalUploadController;

@protocol _TtP13SharedEditing37MSIncrementalUploadControllerDelegate_ <MSCloudExportableDocument>
- (MSImmutableDocumentData *)newExportableImmutableData;
- (void)presentCollaborationDebugMessageWithErrorWithError:(NSError *)arg1;
- (void)presentCollaborationErrorWithError:(NSError *)arg1;
- (void)uploadStateDidChangeWithController:(_TtC13SharedEditing29MSIncrementalUploadController *)arg1;
- (void)patchReceived:(MSPatch *)arg1 statusInfo:(MSCollaborationStatusInfo *)arg2;
- (void)resetPatchInfo;
@property(nonatomic, readonly) NSString *lastIntegratedPatchID;
@property(nonatomic, readonly) MSPatchContainer *patchContainer;
@property(nonatomic, readonly) NSString *documentIdentifier;
@end

