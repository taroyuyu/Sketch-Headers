//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface MSTextPreviewData : NSObject
{
    NSMapTable *_table;
}

+ (id)sharedPreviewData;
@property(readonly, nonatomic) NSMapTable *table; // @synthesize table=_table;
- (void).cxx_destruct;
- (struct CGPDFPage *)findPreviewPageForDocument:(id)arg1 layer:(id)arg2;
- (id)init;

@end

