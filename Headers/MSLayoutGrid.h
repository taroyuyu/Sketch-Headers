//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSLayoutGrid.h>

@interface MSLayoutGrid : _MSLayoutGrid
{
}

- (void)setColumnWidth:(double)arg1;
- (void)setGutterWidth:(double)arg1;
- (long long)totalNumberOfGutters;
- (void)setGuttersOutside:(BOOL)arg1;
- (void)setTotalWidth:(double)arg1;
- (void)setNumberOfColumns:(double)arg1;
- (void)determineAppropriateColumnWidth;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

