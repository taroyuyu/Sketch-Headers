//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSExportFormat.h"

#import "MSExportFormat.h"

@class NSObject<NSCopying><NSCoding>, NSString;

@interface MSExportFormat : _MSExportFormat <MSExportFormat>
{
}

+ (id)migrateExportFormatsWithName:(id)arg1 currentResolution:(long long)arg2 includeRetinaVersion:(BOOL)arg3;
+ (id)validFormats;
+ (id)formatWithScale:(double)arg1 name:(id)arg2 fileFormat:(id)arg3;
@property(readonly, copy) NSString *description;
@property(readonly) NSString *fileName;
@property(readonly) NSString *baseFileName;
- (id)defaultName;
- (void)remove;
- (id)parentLayer;
- (id)initWithScale:(double)arg1 name:(id)arg2 fileFormat:(id)arg3;
- (BOOL)isScalableExport;
- (BOOL)isVectorExport;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSString *fileFormat;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly, nonatomic) double scale;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long visibleScaleType;

@end
