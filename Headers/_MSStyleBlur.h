//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSStylePart.h"

@interface _MSStyleBlur : MSStylePart
{
    struct CGPoint _center;
    double _motionAngle;
    double _radius;
    double _saturation;
    unsigned long long _type;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) double saturation; // @synthesize saturation=_saturation;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) double motionAngle; // @synthesize motionAngle=_motionAngle;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

