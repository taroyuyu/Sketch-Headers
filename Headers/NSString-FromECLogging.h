//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (FromECLogging)
- (BOOL)matchesString:(id)arg1 divergingAtLine1:(unsigned long long *)arg2 andLine2:(unsigned long long *)arg3 diverged:(id *)arg4 expected:(id *)arg5 window:(long long)arg6;
- (BOOL)matchesString:(id)arg1 divergingAtLine1:(unsigned long long *)arg2 andLine2:(unsigned long long *)arg3 diverged:(id *)arg4 expected:(id *)arg5;
- (id)linesFrom:(long long)arg1 to:(long long)arg2 lines:(id)arg3;
- (BOOL)matchesString:(id)arg1 divergingAtLine:(unsigned long long *)arg2 after:(id *)arg3 diverged:(id *)arg4 expected:(id *)arg5;
- (BOOL)matchesString:(id)arg1 divergingAfter:(id *)arg2 atIndex:(unsigned long long *)arg3 divergentChar:(unsigned short *)arg4 expectedChar:(unsigned short *)arg5;
- (id)firstLines:(unsigned long long)arg1;
- (id)lastLines:(unsigned long long)arg1;
- (id)stringBySplittingMixedCaps;
- (id)componentsSeparatedByMixedCaps;
@end

