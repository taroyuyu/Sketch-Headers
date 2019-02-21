//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString, NSURL, PDFScanner;

@protocol PDFParser <NSObject>
- (NSString *)name;
- (unsigned long long)pageCount;
- (void)parsePastedDocument;
- (void)parseWithProgress:(void (^)(void))arg1;
- (void)loadDocumentFromData:(NSData *)arg1;
- (void)loadDocumentFromURL:(NSURL *)arg1;
- (id)initWithScanner:(PDFScanner *)arg1;
@end

