//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSRulerData.h>

@interface MSRulerData : _MSRulerData
{
}

- (void)setValue:(double)arg1 forGuideAtIndex:(unsigned long long)arg2;
- (void)replaceGuideAtIndex:(unsigned long long)arg1 withGuide:(id)arg2;
- (double)guideAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfGuides;
- (void)removeAllGuides;
- (void)removeGuide:(id)arg1;
- (void)removeGuideAtIndex:(unsigned long long)arg1;
- (void)addGuide:(id)arg1;
- (void)addGuideWithValue:(double)arg1;
- (void)addGuide;

@end

