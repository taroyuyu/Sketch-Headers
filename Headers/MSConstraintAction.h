//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSDocumentAction.h"

@class NSString;

@interface MSConstraintAction : MSDocumentAction
{
}

- (void)doPerformAction:(id)arg1;
- (BOOL)validate;
- (long long)stateForConstraint;
- (BOOL)isActive;
@property(readonly, nonatomic) NSString *validationKeyPath;
@property(readonly, nonatomic) NSString *actionKeyPath;

@end

