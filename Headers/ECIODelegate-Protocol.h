//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSError, NSString, NSURL;

@protocol ECIODelegate <NSObject>
- (void)closeInfoGroup;
- (void)openInfoGroupWithKey:(NSString *)arg1;
- (void)outputInfo:(id)arg1 withKey:(NSString *)arg2;
- (void)outputFormat:(NSString *)arg1;
- (void)outputError:(NSError *)arg1;
- (void)outputErrorWithDomain:(NSString *)arg1 code:(unsigned long long)arg2 info:(NSDictionary *)arg3 format:(NSString *)arg4;
- (NSURL *)urlOptionForKey:(NSString *)arg1 defaultingToWorkingDirectory:(BOOL)arg2;
- (double)doubleOptionForKey:(NSString *)arg1;
- (NSArray *)arrayOptionForKey:(NSString *)arg1 separator:(NSString *)arg2;
- (BOOL)boolOptionForKey:(NSString *)arg1;
- (NSString *)stringOptionForKey:(NSString *)arg1;
- (id)optionForKey:(NSString *)arg1;
@end

