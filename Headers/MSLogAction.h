//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSAction.h"

#import "MSPluginLogAction-Protocol.h"

@class NSMutableArray;

@interface MSLogAction : MSAction <MSPluginLogAction>
{
    NSMutableArray *_logs;
}

@property(retain, nonatomic) NSMutableArray *logs; // @synthesize logs=_logs;
- (void).cxx_destruct;
- (id)contextForActionObservers;
- (id)URLForLogFile;
- (void)writeToLogFile:(id)arg1;
- (void)doPerformAction:(id)arg1;
- (id)logString;
- (void)clearLog;
- (void)log:(id)arg1;
- (id)init;

@end

