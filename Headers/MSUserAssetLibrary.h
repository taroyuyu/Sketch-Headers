//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSAssetLibrary.h"

@class MSFileMonitor;

@interface MSUserAssetLibrary : MSAssetLibrary
{
    MSFileMonitor *_fileMonitor;
}

@property(retain, nonatomic) MSFileMonitor *fileMonitor; // @synthesize fileMonitor=_fileMonitor;
- (void).cxx_destruct;
- (void)resolveLocationOnDisk;
- (void)startMonitoring;
- (void)loadAsyncWithDispatchGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)loadSynchronously;
- (void)setEnabled:(BOOL)arg1;
- (unsigned long long)libraryType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

