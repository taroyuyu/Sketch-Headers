//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class QLPreviewPanel;
@protocol QLPreviewItem;

@protocol QLPreviewPanelDataSource
- (id <QLPreviewItem>)previewPanel:(QLPreviewPanel *)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(QLPreviewPanel *)arg1;
@end

