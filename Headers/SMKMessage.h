//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SMKMessageCoding-Protocol.h"

@class NSData, NSDictionary, NSString;
@protocol SMKMessageCoding;

@interface SMKMessage : NSObject <SMKMessageCoding>
{
    NSString *_type;
    id <SMKMessageCoding> _content;
}

+ (Class)classForType:(id)arg1;
+ (id)messageFromData:(id)arg1;
@property(retain, nonatomic) id <SMKMessageCoding> content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(id)arg1;
@property(readonly, nonatomic) Class contentClass;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
@property(readonly, nonatomic) NSData *messageData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

