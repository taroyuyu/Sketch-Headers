//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BCFoundation/BCRect.h>

@interface MSAlignLayersUnion : BCRect
{
    id _layers;
}

+ (id)unionWithLayers:(id)arg1;
@property(retain, nonatomic) id layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (void)makeOriginIntegral;
- (id)frame;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)absoluteRect;
- (BOOL)isLocked;

@end

