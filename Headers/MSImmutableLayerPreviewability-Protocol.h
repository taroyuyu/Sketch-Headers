//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MSImmutableDocumentData;
@protocol MSInterfaceImageOwner;

@protocol MSImmutableLayerPreviewability
- (void)refreshPreviewImagesWithDocumentData:(MSImmutableDocumentData *)arg1 forOwner:(id <MSInterfaceImageOwner>)arg2;
- (BOOL)previewImagesRequireRefreshWithDocumentData:(MSImmutableDocumentData *)arg1 forOwner:(id <MSInterfaceImageOwner>)arg2;
@end

