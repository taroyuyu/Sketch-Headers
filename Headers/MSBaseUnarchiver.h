//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface MSBaseUnarchiver : NSObject
{
    BOOL _corruptionDetected;
    long long _currentVersion;
    long long _archiveVersion;
    NSArray *_actualSymbolIDs;
}

+ (id)unarchiveObjectWithData:(id)arg1 asVersion:(long long)arg2 corruptionDetected:(char *)arg3 error:(id *)arg4;
+ (id)unarchiveObjectWithData:(id)arg1 actualVersion:(long long *)arg2 error:(id *)arg3;
+ (id)unarchiveObjectWithData:(id)arg1;
@property(retain, nonatomic) NSArray *actualSymbolIDs; // @synthesize actualSymbolIDs=_actualSymbolIDs;
@property(nonatomic) BOOL corruptionDetected; // @synthesize corruptionDetected=_corruptionDetected;
@property(nonatomic) long long archiveVersion; // @synthesize archiveVersion=_archiveVersion;
@property(nonatomic) long long currentVersion; // @synthesize currentVersion=_currentVersion;
- (void).cxx_destruct;
- (id)instanciateObject:(id)arg1;
- (struct CGSize)decodeSizeForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (struct CGPoint)decodePointForKey:(id)arg1;
- (struct CGRect)decodeRectForKey:(id)arg1;
- (BOOL)decodeBoolForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (BOOL)containsValueForKey:(id)arg1;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)init;
- (id)unarchiveObjectAsVersion:(long long)arg1 corruptionDetected:(char *)arg2 error:(id *)arg3;
- (id)decodeRoot;
- (id)initForReadingWithData:(id)arg1;

@end
