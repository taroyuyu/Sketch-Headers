//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BCFoundation/BCOperation.h>

@class NSURLSession;

@interface BCURLOperation : BCOperation
{
    NSURLSession *_urlSession;
}

+ (id)defaultURLSession;
@property(retain) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
- (void).cxx_destruct;
- (id)init;

@end

