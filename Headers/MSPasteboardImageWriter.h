//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSPasteboardWriter-Protocol.h"

@class NSString;

@interface MSPasteboardImageWriter : NSObject <MSPasteboardWriter>
{
}

- (id)includedObjectIDsForLayers:(id)arg1;
- (BOOL)containsSingleArtboard:(id)arg1;
- (struct CGRect)bitmapRectForLayers:(id)arg1;
- (id)exportRequestForPasteboardLayers:(id)arg1;
- (void)writeData:(id)arg1 toPasteboard:(id)arg2;
- (id)supportedPasteboardTypes;
- (BOOL)canWriteDataToPasteboard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

