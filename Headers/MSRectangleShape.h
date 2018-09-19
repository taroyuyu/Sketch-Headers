//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSRectangleShape.h"

@class NSString;

@interface MSRectangleShape : _MSRectangleShape
{
}

+ (BOOL)validateComponentString:(id)arg1;
+ (id)componentStringWithValues:(id)arg1;
+ (BOOL)looksLikeComponentString:(id)arg1;
+ (BOOL)useSmoothCorners;
+ (double)lastUsedCornerRadius;
- (BOOL)canFlatten;
- (void)multiplyBy:(double)arg1;
- (void)resetPointsIfNecessary;
- (void)resetPathsToRoundedRect;
@property(readonly, nonatomic) double maximumAllowedRadius;
- (void)resetPathsToRect;
- (void)resetPoints;
- (void)adjustAfterInsert;
- (id)bezierPathForCursorPreview;
- (id)inspectorViewControllerItemClasses;
- (void)resetPointsBasedOnUserInteraction;
@property(readonly, nonatomic) BOOL smoothCornersAllowed;
@property(nonatomic) BOOL hasSmoothCorners;
- (void)didChangeValues;
- (void)willChangeValues;
- (double)floatFromNumbers:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setCornerRadiusFromSimpleString:(id)arg1;
- (void)setCornerRadiusFromComponents:(id)arg1;
@property(copy, nonatomic) NSString *cornerRadiusString;
- (id)rectangleNumberFormatter;
@property(nonatomic) double cornerRadiusFloat;
@property(nonatomic) double normalizedExponentialCornerRadius;
- (BOOL)validateProposedCornerRadiusWithFloat:(double)arg1;
- (BOOL)validateProposedCornerRadiusSizeWithString:(id)arg1;

@end

