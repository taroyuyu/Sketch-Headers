//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSLayoutAnchor : NSObject
{
    id _item;
    unsigned long long _attribute;
}

@property(readonly, nonatomic) unsigned long long attribute; // @synthesize attribute=_attribute;
@property(readonly, nonatomic) __weak id item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) unsigned long long axis;
- (id)initWithItem:(id)arg1 attribute:(unsigned long long)arg2;

@end

