//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSImmutableStylePart.h"

@interface _MSImmutableStyleBlur : MSImmutableStylePart
{
    struct CGPoint _center;
    double _motionAngle;
    double _radius;
    double _saturation;
    unsigned long long _type;
}

+ (Class)mutableClass;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) double saturation; // @synthesize saturation=_saturation;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) double motionAngle; // @synthesize motionAngle=_motionAngle;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
- (id)keysDifferingFromObject:(id)arg1;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)decodePropertiesWithUnarchiver:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;

@end

