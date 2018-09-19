//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BCSketchToolRunner, NSOperationQueue, NSString, NSURL;

@interface MSPreviewImageCache : NSObject
{
    NSURL *_directoryURL;
    NSOperationQueue *_fetchQueue;
    BCSketchToolRunner *_sketchToolRunner;
    NSString *_subdirectoryName;
}

+ (id)bundledSketchToolURL;
@property(readonly, copy, nonatomic) NSString *subdirectoryName; // @synthesize subdirectoryName=_subdirectoryName;
@property(readonly, nonatomic) BCSketchToolRunner *sketchToolRunner; // @synthesize sketchToolRunner=_sketchToolRunner;
@property(readonly, nonatomic) NSOperationQueue *fetchQueue; // @synthesize fetchQueue=_fetchQueue;
@property(readonly, nonatomic) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
- (void).cxx_destruct;
- (void)exportPreviewImageForDocumentFileURL:(id)arg1 maximumPixelSize:(double)arg2 handler:(CDUnknownBlockType)arg3;
- (id)cachedPreviewImageForDocumentFileURL:(id)arg1 maximumPixelSize:(double)arg2 error:(id *)arg3;
- (id)cachedPreviewImageURLForDocumentFileURL:(id)arg1 maximumPixelSize:(double)arg2 createDirectoriesIfNeeded:(BOOL)arg3 error:(id *)arg4;
- (id)directoryURLCreateIfNeeded:(BOOL)arg1 error:(id *)arg2;
- (void)fetchPreviewImageForDocumentAtURL:(id)arg1 maximumPixelSize:(double)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithSubdirectoryName:(id)arg1;

@end

