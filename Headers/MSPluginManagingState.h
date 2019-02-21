//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

@interface MSPluginManagingState : NSObject
{
    NSURL *_metadataURL;
    NSDictionary *_metadata;
    NSDictionary *_incompatiblePluginVersions;
}

+ (id)incompatiblePlugins;
+ (id)existingDownloadededBlacklistURL;
@property(readonly, copy, nonatomic) NSDictionary *incompatiblePluginVersions; // @synthesize incompatiblePluginVersions=_incompatiblePluginVersions;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSURL *metadataURL; // @synthesize metadataURL=_metadataURL;
- (void).cxx_destruct;
- (void)removeIncompatibilityRegistrations;
- (void)removeDisableOverrides;
- (BOOL)registerIncompatibilityForPluginIdentifier:(id)arg1 withVersion:(id)arg2;
- (BOOL)setMetadataValue:(id)arg1 forKey:(id)arg2 identifier:(id)arg3;
- (id)metadataValueForKey:(id)arg1 identifier:(id)arg2;
- (BOOL)setPluginMetadaDictionary:(id)arg1 forIdentifier:(id)arg2;
- (BOOL)isPluginVersion:(id)arg1 incompatibleWithVersion:(id)arg2;
- (BOOL)isPluginWithIdentifier:(id)arg1 incompatibleWithVersion:(id)arg2;
- (long long)registerPluginIncompatibilityForVersions:(id)arg1;
- (void)updateMetadataWithPluginIndentifiers:(id)arg1;
- (BOOL)shouldEnablePluginIdentifier:(id)arg1 withVersion:(id)arg2;
- (void)setEnabled:(BOOL)arg1 forPluginIdentifier:(id)arg2 withVersion:(id)arg3;
- (void)resetIncompatiblePluginMetadata;
- (id)initWithMetadataURL:(id)arg1 incompatiblePlugins:(id)arg2;

@end

