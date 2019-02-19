//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface MSPluginScript : NSObject
{
    NSURL *_URL;
    NSString *_filename;
    NSString *_script;
}

@property(readonly, copy, nonatomic) NSString *script; // @synthesize script=_script;
@property(readonly, copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)reload;
- (BOOL)loadWithError:(id *)arg1;
- (id)initWithString:(id)arg1 filename:(id)arg2;
- (id)initWithURL:(id)arg1 error:(id *)arg2;

@end

