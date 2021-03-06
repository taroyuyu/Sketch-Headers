//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSOperationQueue;

@interface MSPasteboardLayerProvider : NSObject
{
    NSOperationQueue *_queue;
    NSData *_data;
}

+ (id)providerForDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void)pasteboard:(id)arg1 provideDataForType:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

