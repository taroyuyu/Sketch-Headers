//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSLayer, NSArray;

@interface MSLayerMeasurementTarget : NSObject
{
    MSLayer *_layer;
    NSArray *_guideLines;
}

@property(readonly, copy, nonatomic) NSArray *guideLines; // @synthesize guideLines=_guideLines;
@property(readonly, nonatomic) MSLayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
- (id)initWithLayer:(id)arg1 guides:(id)arg2;

@end

