//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHTTPURLResponse, NSString, NSURL;

@interface AFAmazonS3ResponseObject : NSObject
{
    NSHTTPURLResponse *_originalResponse;
}

+ (id)responseObject:(id)arg1;
@property(retain, nonatomic) NSHTTPURLResponse *originalResponse; // @synthesize originalResponse=_originalResponse;
- (void).cxx_destruct;
- (id)description;
@property(readonly, copy, nonatomic) NSString *ETag;
@property(readonly, copy, nonatomic) NSURL *URL;

@end

