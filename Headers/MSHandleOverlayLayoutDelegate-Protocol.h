//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtP6Sketch23MSHandleOverlayDelegate_-Protocol.h"

@class MSHandleOverlayLayout, MSPath, NSIndexPath, _TtC17SketchControllers19MSCollectionOverlay;

@protocol MSHandleOverlayLayoutDelegate <_TtP6Sketch23MSHandleOverlayDelegate_>
- (struct CGPoint)handleOverlay:(_TtC17SketchControllers19MSCollectionOverlay *)arg1 layout:(MSHandleOverlayLayout *)arg2 locationOfHandleAtIndexPath:(NSIndexPath *)arg3;

@optional
- (MSPath *)handleOverlay:(_TtC17SketchControllers19MSCollectionOverlay *)arg1 layout:(MSHandleOverlayLayout *)arg2 pathForConnectingHandlesInSection:(long long)arg3;
@end
