//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSImmutableSliceLayer.h>

#import <SketchModel/MSLayerWithBackgroundColor-Protocol.h>

@class NSString;

@interface MSImmutableSliceLayer : _MSImmutableSliceLayer <MSLayerWithBackgroundColor>
{
}

+ (id)defaultName;
+ (unsigned long long)traits;
- (struct CGRect)absoluteInfluenceRectForAncestorGroups:(id)arg1 document:(id)arg2;
- (id)immutableBackgroundColor;
- (BOOL)shouldBeIncludedInParentPath;
- (BOOL)isLayerExportable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL hasBackgroundColor;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

