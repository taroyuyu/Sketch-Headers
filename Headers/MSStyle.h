//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSStyle.h"

#import "MSSharedObjectInstance-Protocol.h"
#import "NSCopying-Protocol.h"

@class MSTextStyle, NSString;

@interface MSStyle : _MSStyle <MSSharedObjectInstance, NSCopying>
{
}

- (void)syncWithTemplateInstance:(struct MSModelObject *)arg1;
- (id)addStylePartOfType:(unsigned long long)arg1;
- (id)stylePartsOfType:(unsigned long long)arg1;
@property(readonly, nonatomic) double thickestInnerStroke;
@property(readonly, nonatomic) BOOL hasMarkers;
@property(readonly, nonatomic) double thickestStroke;
- (BOOL)hasTextStyle;
- (unsigned long long)type;
- (id)parentStyle;
- (id)parentLayer;
@property(readonly, nonatomic) BOOL hasEnabledBackgroundBlur;
- (BOOL)supportsAdvancedBorderSettings;
- (void)multiplyBy:(double)arg1;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)object:(id)arg1 didChangeProperty:(id)arg2;
- (void)setTextStyle:(id)arg1;
@property(retain, nonatomic) MSTextStyle *primitiveTextStyle;
@property(retain, nonatomic) NSString *primitiveSharedObjectID;
- (void)setNilValueForKey:(id)arg1;
@property(readonly, nonatomic) BOOL hasBlending;
- (id)firstEnabledShadow;
- (id)firstEnabledFill;
- (id)firstEnabledBorder;
- (id)enabledInnerShadows;
- (id)enabledShadows;
- (id)enabledBorders;
- (id)enabledFills;
- (void)disableAllInnerShadows;
- (void)disableAllShadows;
- (void)disableAllFills;
- (void)disableAllBorders;
@property(readonly, nonatomic) BOOL hasEnabledBorder;
@property(readonly, nonatomic) BOOL hasMoreThanOneEnabledFill;
@property(readonly, nonatomic) BOOL hasEnabledFill;
@property(readonly, nonatomic) BOOL hasEnabledShadow;
- (long long)determineMaskingMode;
- (void)prepareAsMask;
- (void)generatePreviewWithImageSize:(struct CGSize)arg1 previewSize:(struct CGSize)arg2 colorSpace:(id)arg3 backingScale:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)prepareForPreviewingWithImageSize:(struct CGSize)arg1 previewSize:(struct CGSize)arg2;
- (id)shapeForPreviewWithSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *sharedObjectID;
@property(readonly) Class superclass;

@end

