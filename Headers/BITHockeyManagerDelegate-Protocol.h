//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BITCrashManagerDelegate-Protocol.h"
#import "NSObject-Protocol.h"

@class BITHockeyBaseManager, BITHockeyManager, NSString;

@protocol BITHockeyManagerDelegate <NSObject, BITCrashManagerDelegate>

@optional
- (NSString *)userEmailForHockeyManager:(BITHockeyManager *)arg1 componentManager:(BITHockeyBaseManager *)arg2;
- (NSString *)userNameForHockeyManager:(BITHockeyManager *)arg1 componentManager:(BITHockeyBaseManager *)arg2;
- (NSString *)userIDForHockeyManager:(BITHockeyManager *)arg1 componentManager:(BITHockeyBaseManager *)arg2;
@end

