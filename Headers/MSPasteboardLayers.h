//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchModel/MSLayerTraits-Protocol.h>

@class MSLayerArray, NSArray, NSDictionary, NSString;

@interface MSPasteboardLayers : NSObject <MSLayerTraits>
{
    MSLayerArray *_layers;
    NSArray *_sharedStyles;
    NSDictionary *_localSymbols;
    NSDictionary *_foreignSymbols;
    unsigned long long _parentTraits;
    struct CGPoint _suggestedPosition;
}

+ (struct CGPoint)originForLayer:(id)arg1 rootIsPage:(BOOL)arg2;
+ (struct CGPoint)suggestedOriginForLayers:(id)arg1 rootIsPage:(BOOL)arg2;
+ (unsigned long long)parentTraitsForLayers:(id)arg1;
+ (id)pasteboardLayersWithLayers:(id)arg1;
+ (id)pasteboardLayersWithForeignLayers:(id)arg1;
+ (unsigned long long)traitsForPropertyName:(id)arg1;
+ (unsigned long long)traits;
@property(nonatomic) unsigned long long parentTraits; // @synthesize parentTraits=_parentTraits;
@property(nonatomic) struct CGPoint suggestedPosition; // @synthesize suggestedPosition=_suggestedPosition;
@property(retain, nonatomic) NSDictionary *foreignSymbols; // @synthesize foreignSymbols=_foreignSymbols;
@property(retain, nonatomic) NSDictionary *localSymbols; // @synthesize localSymbols=_localSymbols;
@property(retain, nonatomic) NSArray *sharedStyles; // @synthesize sharedStyles=_sharedStyles;
@property(retain, nonatomic) MSLayerArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (struct CGRect)suggestedRect;
- (id)insertInGroup:(id)arg1 atPosition:(struct CGPoint)arg2 afterLayer:(id)arg3 viewport:(id)arg4 fitToParent:(BOOL)arg5;
- (id)insertOnPage:(id)arg1 viewport:(id)arg2 hint:(id)arg3;
- (id)layerPositionsRelativeToUnion;
- (struct CGSize)unionSize;
- (BOOL)canBeContainedInLayer:(id)arg1;
- (unsigned long long)traits;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

