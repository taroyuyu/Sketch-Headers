//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchControllers/MSDataSupplier.h>

@class MSFolderMonitor, NSArray, NSURL;

@interface MSLocalDataSupplier : MSDataSupplier
{
    NSURL *_dataSource;
    NSArray *_data;
    MSFolderMonitor *_folderMonitor;
}

+ (id)validImageFileUTIs;
+ (id)identifierForURL:(id)arg1;
+ (id)imageFileNamesFromFolderURL:(id)arg1;
+ (id)textDataFromFileURL:(id)arg1;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) MSFolderMonitor *folderMonitor; // @synthesize folderMonitor=_folderMonitor;
- (void).cxx_destruct;
- (void)respondToContentChanged;
- (id)shuffleArray:(id)arg1 truncateToLength:(unsigned long long)arg2;
- (id)shuffledArrayWithCount:(unsigned long long)arg1 fromArray:(id)arg2;
- (void)makeTextDataFileSystemMonitor;
- (void)makeImageDataFileSystemMonitor;
- (void)makeFolderMonitor;
- (void)generateDataForCount:(unsigned long long)arg1 dataApplier:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSURL *dataSource;
- (id)imageFileURLForDataItem:(id)arg1;
- (void)generateDataForOverrides:(id)arg1 dataSupplierManager:(id)arg2 dataApplier:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)generateDataForLayers:(id)arg1 dataSupplierManager:(id)arg2 dataApplier:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)encodeWithCoder:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)valid;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileSystemURL:(id)arg1;

@end
