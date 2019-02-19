//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSRenderingDriver, NSColorSpace;

@interface MSExportManager : NSObject
{
    NSColorSpace *_colorSpace;
    CDUnknownBlockType _sliceCompletionBlock;
    MSRenderingDriver *_driver;
}

@property(retain, nonatomic) MSRenderingDriver *driver; // @synthesize driver=_driver;
@property(copy, nonatomic) CDUnknownBlockType sliceCompletionBlock; // @synthesize sliceCompletionBlock=_sliceCompletionBlock;
@property(readonly, nonatomic) NSColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
- (void).cxx_destruct;
- (id)savePanelWithDefaultFilename:(id)arg1;
- (void)showSavePanelToExportIndividualSlice:(id)arg1;
- (id)openPanelForRequests:(id)arg1;
- (void)showSaveToFolderPanelToExportSlices:(id)arg1;
- (void)displayNoSlicesWarning;
- (id)destinationForRequest:(id)arg1 inFolder:(id)arg2;
- (void)warnBeforeOverwritingAndSaveSlices:(id)arg1 toFolder:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)saveSlices:(id)arg1 toFolder:(id)arg2;
- (id)strippedSliceName:(id)arg1;
- (void)exportSlice:(id)arg1;
- (void)exportFilesForRequests:(id)arg1;
- (void)exportFileForRequest:(id)arg1 toFileURL:(id)arg2;
- (id)exportedDataForRequest:(id)arg1;
- (id)rendererForRequest:(id)arg1;
- (id)init;

@end

