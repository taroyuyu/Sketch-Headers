//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BCFoundation/BCToolRunner.h>

@class NSOperationQueue, NSURL;

@interface BCSketchToolRunner : BCToolRunner
{
    NSURL *_sketchToolURL;
    NSOperationQueue *_sketchToolSubprocessQueue;
}

@property(readonly, nonatomic) NSOperationQueue *sketchToolSubprocessQueue; // @synthesize sketchToolSubprocessQueue=_sketchToolSubprocessQueue;
@property(readonly, nonatomic) NSURL *sketchToolURL; // @synthesize sketchToolURL=_sketchToolURL;
- (void).cxx_destruct;
- (void)exportPreviewImageForDocumentAtURL:(id)arg1 additionalArguments:(id)arg2 intoURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithSketchToolURL:(id)arg1 maximumConcurrentOperations:(long long)arg2;

@end

