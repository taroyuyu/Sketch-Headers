//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSDictionary, NSUUID;

@interface SMKConnectionInfo : NSObject <NSSecureCoding>
{
    NSUUID *_UUID;
    unsigned long long _status;
    unsigned long long _type;
    NSDictionary *_advertisement;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *advertisement; // @synthesize advertisement=_advertisement;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic, getter=isHidden) BOOL hidden;
- (long long)compareConnectionInfo:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

