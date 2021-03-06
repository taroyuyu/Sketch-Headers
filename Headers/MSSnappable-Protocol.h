//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchControllers/NSObject-Protocol.h>

@class MSLayer, MSLayoutDimension, MSLayoutPosition, NSString;
@protocol MSLayerCoordinateSpace;

@protocol MSSnappable <NSObject>
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) MSLayoutPosition *midXHeightAnchor;
@property(readonly, nonatomic) MSLayoutPosition *baselineAnchor;
@property(readonly, nonatomic) MSLayoutDimension *heightAnchor;
@property(readonly, nonatomic) MSLayoutDimension *widthAnchor;
@property(readonly, nonatomic) MSLayoutPosition *centerYAnchor;
@property(readonly, nonatomic) MSLayoutPosition *centerXAnchor;
@property(readonly, nonatomic) MSLayoutPosition *bottomAnchor;
@property(readonly, nonatomic) MSLayoutPosition *topAnchor;
@property(readonly, nonatomic) MSLayoutPosition *rightAnchor;
@property(readonly, nonatomic) MSLayoutPosition *leftAnchor;
@property(readonly, nonatomic) MSLayer *coordinateSpace;
- (struct CGRect)alignmentRectInCoordinateSpace:(id <MSLayerCoordinateSpace>)arg1 options:(unsigned long long)arg2;
@end

