//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSDataSupplierGroup.h"

@class NSArray, NSString;

@interface MSPluginDataSupplierGroup : MSDataSupplierGroup
{
}

- (id)dataSupplierSubgroupsForDataSuppliers:(id)arg1;
- (id)dataSupplierMenuItemForDataType:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *pluginIdentifier;
@property(readonly, nonatomic) NSArray *pluginDataSuppliers;
- (BOOL)valid;
- (id)makeGroupIdentifier;
- (id)groupName;
- (BOOL)postDecodingInitializingWithDelegate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPluginDataSuppliers:(id)arg1 delegate:(id)arg2;

@end

