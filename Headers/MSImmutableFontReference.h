//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSImmutableFontReference.h>

#import <SketchModel/_TtP8Chocolat27MSEmbeddedFontRepresentable_-Protocol.h>

@class NSData, NSString;

@interface MSImmutableFontReference : _MSImmutableFontReference <_TtP8Chocolat27MSEmbeddedFontRepresentable_>
{
}

+ (BOOL)persistsObjectID;
@property(readonly, nonatomic) BOOL shouldStoreFontData;
@property(readonly, nonatomic, getter=isForeign) BOOL foreign;
@property(readonly, nonatomic, getter=isEmbedded) BOOL embedded;
@property(readonly, nonatomic, getter=isUsed) BOOL used;
@property(readonly, copy, nonatomic) NSData *fontFileData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *fontFamilyName;
@property(readonly, copy, nonatomic) NSString *fontFileName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

