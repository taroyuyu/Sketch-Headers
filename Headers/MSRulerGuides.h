//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSRulerGuides : NSObject
{
}

+ (struct CGRect)absoluteFrameOfSelectedLayersOnPage:(id)arg1;
+ (id)snapGuidesForRulerData:(id)arg1 axis:(unsigned long long)arg2;
+ (id)verticalGuidesForGrid:(id)arg1 ruler:(id)arg2 mask:(unsigned long long)arg3 inRect:(struct CGRect)arg4 zoomScale:(double)arg5;
+ (id)verticalGuidesForHorizontalRulerOnPage:(id)arg1 mask:(unsigned long long)arg2 inRect:(struct CGRect)arg3 zoomScale:(double)arg4;
+ (id)verticalGuidesForHorizontalRulerOnPage:(id)arg1 mask:(unsigned long long)arg2 zoomScale:(double)arg3;
+ (id)horizontalGuidesForGrid:(id)arg1 ruler:(id)arg2 mask:(unsigned long long)arg3 inRect:(struct CGRect)arg4 zoomScale:(double)arg5;
+ (id)horizontalGuidesForVerticalRulerOnPage:(id)arg1 mask:(unsigned long long)arg2 inRect:(struct CGRect)arg3 zoomScale:(double)arg4;
+ (id)horizontalGuidesForVerticalRulerOnPage:(id)arg1 mask:(unsigned long long)arg2 zoomScale:(double)arg3;
+ (id)findHoverGuidesOnPage:(id)arg1 mouse:(struct CGPoint)arg2 mask:(unsigned long long)arg3 zoomScale:(double)arg4;

@end

