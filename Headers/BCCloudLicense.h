//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BCLicense-Protocol.h"
#import "BCLicenseOperationResult-Protocol.h"

@class BCNetworkTime, NSArray, NSDate, NSString, SCKJWT;

@interface BCCloudLicense : NSObject <BCLicenseOperationResult, BCLicense>
{
    SCKJWT *_jwt;
    BCNetworkTime *_networkTime;
}

+ (long long)provider;
@property(retain, nonatomic) BCNetworkTime *networkTime; // @synthesize networkTime=_networkTime;
@property(readonly, copy, nonatomic) SCKJWT *jwt; // @synthesize jwt=_jwt;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *variants;
@property(readonly, nonatomic) BOOL updatesHaveExpired;
@property(readonly, nonatomic) NSDate *updateExpirationDate;
@property(readonly, nonatomic) BOOL isAboutToExpire;
@property(readonly, nonatomic) BOOL shouldTryToRequestNewTrialLicense;
@property(readonly, nonatomic) BOOL requiresRefresh;
@property(readonly, nonatomic) BOOL shouldRefresh;
@property(readonly, nonatomic) double remainingTimeInterval;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) BOOL isValid;
@property(readonly, nonatomic) NSString *deviceID;
@property(readonly, nonatomic) NSString *email;
@property(readonly, nonatomic) NSString *licenseID;
@property(readonly, copy, nonatomic) NSString *userID;
- (void)log;
- (BOOL)saveToURL:(id)arg1 error:(id *)arg2;
- (id)initWithToken:(id)arg1;
- (id)initWithDictionary:(id)arg1 applicationID:(id)arg2 publicCertificate:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
