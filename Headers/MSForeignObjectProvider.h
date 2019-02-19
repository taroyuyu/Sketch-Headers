//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSForeignObjectProvider-Protocol.h"

@class MSAssetLibraryController, MSDocument, MSDocumentData, NSArray;

@interface MSForeignObjectProvider : NSObject <MSForeignObjectProvider>
{
    MSDocument *_document;
}

+ (id)providerForLayers:(id)arg1 inDocument:(id)arg2;
@property(readonly, nonatomic) __weak MSDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (BOOL)masterIsOutOfSyncWithInstance:(id)arg1;
@property(readonly, nonatomic) unsigned long long objectType;
- (struct MSModelObject *)shareableObjectForInstance:(id)arg1 inContainerOfType:(unsigned long long)arg2;
- (struct MSModelObject *)masterObjectForInstance:(id)arg1;
- (id)localObjectsForDocument:(id)arg1;
- (BOOL)currentDocumentIsLibrary:(id)arg1;
@property(readonly, nonatomic) MSDocumentData *currentDocument;
@property(readonly, nonatomic) MSAssetLibraryController *libraryController;
@property(readonly, nonatomic) NSArray *foreignObjects;
- (id)tempDocument;
- (id)initWithDocument:(id)arg1;

@end

