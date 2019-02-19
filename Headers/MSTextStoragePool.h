//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BCFoundation/BCObjectPool.h>

#import "MSFirstLineTypesetterDelegate-Protocol.h"

@class NSString;

@interface MSTextStoragePool : BCObjectPool <MSFirstLineTypesetterDelegate>
{
    double _baselineAdjustmentForLayoutManager;
}

@property(nonatomic) double baselineAdjustmentForLayoutManager; // @synthesize baselineAdjustmentForLayoutManager=_baselineAdjustmentForLayoutManager;
- (double)baselineAdjustmentForLayoutManager:(id)arg1;
- (id)removeAllObjects;
- (void)recycleTextStorage:(id)arg1;
- (id)vendTextStorage;
- (id)initWithTextLayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

