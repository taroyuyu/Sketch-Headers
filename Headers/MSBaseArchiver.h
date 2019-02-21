//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MSBaseArchiver : NSObject
{
    BOOL _archiveObjectIDs;
    NSMutableDictionary *_references;
}

+ (id)archivedDataWithHeaderAndRootObject:(id)arg1;
+ (id)archivedDataWithRootObject:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSMutableDictionary *references; // @synthesize references=_references;
@property(nonatomic) BOOL archiveObjectIDs; // @synthesize archiveObjectIDs=_archiveObjectIDs;
- (void).cxx_destruct;
- (void)encodeSize:(struct CGSize)arg1 forKey:(id)arg2;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodePoint:(struct CGPoint)arg1 forKey:(id)arg2;
- (void)encodeRect:(struct CGRect)arg1 forKey:(id)arg2;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (id)referenceObjectForObject:(id)arg1;
- (BOOL)shouldEncodeAsReference:(id)arg1;
- (void)archiveRootObject:(id)arg1;
- (id)archivedDataWithRootObject:(id)arg1 error:(id *)arg2;
- (id)init;

@end

