//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchModel/BCJSONEncoding-Protocol.h>

@class NSDictionary, NSString;

@interface MSAttributedStringAttribute : NSObject <BCJSONEncoding>
{
    NSDictionary *_attributeDictionary;
    struct _NSRange _range;
}

@property(retain, nonatomic) NSDictionary *attributeDictionary; // @synthesize attributeDictionary=_attributeDictionary;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (void).cxx_destruct;
- (id)initWithJSONDecoder:(id)arg1;
- (void)encodeAsJSON:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

