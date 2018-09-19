//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_TtC17SketchControllers10ResizeItem.h"

#import "MSLayerCoordinateSpace-Protocol.h"

@protocol MSLayerCoordinateSpace;

@interface _TtC17SketchControllers10ResizeItem (SketchControllers1) <MSLayerCoordinateSpace>
@property(nonatomic, readonly) struct CGAffineTransform transformForConvertingFromParentCoordinateSpace;
@property(nonatomic, readonly) struct CGAffineTransform transformForConvertingToParentCoordinateSpace;
@property(nonatomic, readonly) id <MSLayerCoordinateSpace> parentCoordinateSpace;
- (struct CGAffineTransform)transformForConvertingFromCoordinateSpace:(id)arg1;
- (struct CGAffineTransform)transformForConvertingToCoordinateSpace:(id)arg1;
- (struct CGVector)convertVector:(struct CGVector)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGVector)convertVector:(struct CGVector)arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;
@end

