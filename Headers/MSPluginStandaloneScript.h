//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSPluginScript.h"

@class NSString;

@interface MSPluginStandaloneScript : MSPluginScript
{
    NSString *_wrappedScript;
}

+ (id)wrappedScript:(id)arg1 handler:(id)arg2;
@property(copy, nonatomic) NSString *wrappedScript; // @synthesize wrappedScript=_wrappedScript;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *handler;
- (id)script;
@property(readonly, copy, nonatomic) NSString *rawScript;

@end

