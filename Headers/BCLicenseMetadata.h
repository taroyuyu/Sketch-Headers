//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BCLicenseOperationResult-Protocol.h"

@class NSDate, NSString;

@interface BCLicenseMetadata : NSObject <BCLicenseOperationResult>
{
    NSDate *_updateExpirationDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *updateExpirationDate; // @synthesize updateExpirationDate=_updateExpirationDate;
- (id)initWithDictionary:(id)arg1 applicationID:(id)arg2 publicCertificate:(id)arg3;
- (id)initWithUpdateExpirationDate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

