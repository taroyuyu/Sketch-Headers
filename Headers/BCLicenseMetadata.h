//
//     Generated by class-dump 3.5 (64 bit).
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

@property(readonly, nonatomic) NSDate *updateExpirationDate; // @synthesize updateExpirationDate=_updateExpirationDate;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 applicationID:(id)arg2 publicCertificate:(id)arg3;
- (id)initWithUpdateExpirationDate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

