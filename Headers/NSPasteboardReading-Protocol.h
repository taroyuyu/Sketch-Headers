//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSPasteboard, NSString;

@protocol NSPasteboardReading <NSObject>
+ (NSArray *)readableTypesForPasteboard:(NSPasteboard *)arg1;

@optional
+ (unsigned long long)readingOptionsForType:(NSString *)arg1 pasteboard:(NSPasteboard *)arg2;
- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(NSString *)arg2;
@end

