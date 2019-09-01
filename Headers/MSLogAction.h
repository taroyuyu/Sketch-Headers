//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchControllers/MSAction.h>

#import "MSPluginLogAction-Protocol.h"

@class NSDictionary, NSMutableDictionary;

@interface MSLogAction : MSAction <MSPluginLogAction>
{
    NSMutableDictionary *_logs;
    NSDictionary *_latestLog;
}

@property(retain, nonatomic) NSDictionary *latestLog; // @synthesize latestLog=_latestLog;
@property(retain, nonatomic) NSMutableDictionary *logs; // @synthesize logs=_logs;
- (void).cxx_destruct;
- (id)label;
- (id)contextForActionObservers;
- (id)URLForLogFile;
- (id)URLForLogFolder;
- (void)writeToLogFile:(id)arg1;
- (void)doPerformAction:(id)arg1;
- (id)logStringFor:(id)arg1;
- (void)clearLogFor:(id)arg1;
- (void)log:(id)arg1 from:(id)arg2;
- (id)init;

@end
