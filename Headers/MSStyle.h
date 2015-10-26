#import "_MSStyle.h"

#import "MSSharedObjectInstance.h"
#import "MSStylePartDelegate.h"
#import "NSCopying.h"

@class MSStyleBorder, MSStyleFill, MSStyleShadow, NSString;

@interface MSStyle : _MSStyle <MSStylePartDelegate, MSSharedObjectInstance, NSCopying>
{
    BOOL _lightweightHasBitmapStylesEnabled;
}

+ (id)keyPathForStylePartType:(unsigned long long)arg1;
+ (id)layerStyles;
@property(nonatomic) BOOL lightweightHasBitmapStylesEnabled; // @synthesize lightweightHasBitmapStylesEnabled=_lightweightHasBitmapStylesEnabled;
- (id)stylePartsOfType:(unsigned long long)arg1;
- (double)thickestOuterStroke;
- (double)thickestInnerStroke;
- (BOOL)hasDecorations;
- (double)thickestStroke;
- (BOOL)hasTextStyle;
- (unsigned long long)type;
- (id)parentStyle;
- (id)parentLayer;
- (BOOL)hasActiveBackgroundBlur;
- (BOOL)supportsAdvancedBorderSettings;
- (void)multiplyBy:(double)arg1;
- (void)prepareObjectCopy:(id)arg1;
- (BOOL)hasBitmapStylesEnabled;
- (void)invalidateLightweightCopy:(id)arg1;
- (void)setTextStyle:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (BOOL)hasBlending;
- (id)firstEnabledShadow;
- (id)enabledStyleParts:(id)arg1;
- (id)enabledInnerShadows;
- (id)enabledShadows;
- (id)enabledBorders;
- (id)enabledFills;
- (BOOL)hasEnabledBorder;
- (BOOL)hasMoreThanOneEnabledFill;
- (BOOL)hasEnabledFill;
- (BOOL)hasEnabledShadow;
@property(readonly, nonatomic) __weak MSStyleShadow *innerShadow;
@property(readonly, nonatomic) __weak MSStyleShadow *shadow;
@property(retain, nonatomic) MSStyleFill *fill;
@property(retain, nonatomic) MSStyleBorder *border;
- (long long)determineMaskingMode;
- (void)prepareAsMask;
- (id)renderBitmapEffects:(id)arg1;
- (unsigned long long)maxLevels;
- (void)addSVGFilterAttributes:(id)arg1 exporter:(id)arg2;
- (id)filtersForBlur:(id)arg1 exporter:(id)arg2;
- (id)filtersForShadow:(id)arg1 exporter:(id)arg2 isInner:(BOOL)arg3 index:(unsigned long long)arg4;
- (void)addSVGAttributes:(id)arg1 forExporter:(id)arg2 level:(unsigned long long)arg3 defaultNone:(BOOL)arg4;
- (id)itemFromCollection:(id)arg1 atLevel:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *sharedObjectID;
@property(readonly) Class superclass;

@end
