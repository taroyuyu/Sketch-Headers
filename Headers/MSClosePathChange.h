//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSShapeChange.h"

@interface MSClosePathChange : MSShapeChange
{
}

+ (id)toggleClosePath;
- (id)titleForContext:(id)arg1;
- (BOOL)validateWithContext:(id)arg1;
- (id)pathByOpeningOrClosingPath:(id)arg1 close:(BOOL)arg2;
- (void)executeWithContext:(id)arg1;

@end

