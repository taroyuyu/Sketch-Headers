//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSLayerArray;

@interface MSLayerSelector : NSObject
{
    MSLayerArray *_initialSelection;
}

@property(copy, nonatomic) MSLayerArray *initialSelection; // @synthesize initialSelection=_initialSelection;
- (void).cxx_destruct;
- (BOOL)shouldUseArtboardSelectionModeForRect:(struct CGRect)arg1 page:(id)arg2 extendSelection:(BOOL)arg3 options:(unsigned long long)arg4;
- (void)updateSelectionWithRect:(struct CGRect)arg1 page:(id)arg2 extendSelection:(BOOL)arg3 options:(unsigned long long)arg4;

@end

