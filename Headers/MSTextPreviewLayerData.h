//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MSTextPreviewLayerData : NSObject
{
    struct CGPDFDocument *_document;
    NSDictionary *_objectIDToPageNumberDictionary;
}

- (void).cxx_destruct;
- (struct CGPDFPage *)findPageWithTitle:(id)arg1;
- (void)dealloc;
- (id)initWithPDFData:(id)arg1;

@end

