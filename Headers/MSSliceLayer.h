//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSSliceLayer.h"

#import "MSColorConvertible-Protocol.h"
#import "MSLayerPreviewability-Protocol.h"
#import "MSLayerWithMutableBackgroundColor-Protocol.h"

@class MSColor, NSString;

@interface MSSliceLayer : _MSSliceLayer <MSLayerPreviewability, MSLayerWithMutableBackgroundColor, MSColorConvertible>
{
}

+ (id)sliceLayerFromLayer:(id)arg1;
- (void)convertColorsUsing:(id)arg1;
- (id)immutableBackgroundColor;
- (id)rootForNameUniquing;
- (BOOL)canRotate;
- (BOOL)canBeTransformed;
- (void)setName:(id)arg1;
- (BOOL)shouldDrawSelectionStroke;
- (BOOL)isActive;
- (unsigned long long)filterTypeMask;
- (BOOL)canChangeBooleanOperation;
- (id)interfaceImageIdentifier;
- (id)cacheOwner;
- (id)unselectedPreviewTemplateImage;
- (id)selectedPreviewTemplateImage;

// Remaining properties
@property(retain, nonatomic) MSColor *backgroundColor;
@property(readonly, nonatomic) unsigned long long badgeType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL hasBackgroundColor;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

