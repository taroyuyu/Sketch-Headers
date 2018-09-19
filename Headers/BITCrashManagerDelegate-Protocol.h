//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BITCrashManager, BITHockeyAttachment, NSError, NSString;

@protocol BITCrashManagerDelegate <NSObject>

@optional
- (void)crashManagerDidFinishSendingCrashReport:(BITCrashManager *)arg1;
- (void)crashManager:(BITCrashManager *)arg1 didFailWithError:(NSError *)arg2;
- (void)crashManagerWillSendCrashReport:(BITCrashManager *)arg1;
- (void)crashManagerWillCancelSendingCrashReport:(BITCrashManager *)arg1;
- (void)crashManagerWillShowSubmitCrashReportAlert:(BITCrashManager *)arg1;
- (BITHockeyAttachment *)attachmentForCrashManager:(BITCrashManager *)arg1;
- (NSString *)applicationLogForCrashManager:(BITCrashManager *)arg1;
- (void)showMainApplicationWindowForCrashManager:(BITCrashManager *)arg1;
@end

