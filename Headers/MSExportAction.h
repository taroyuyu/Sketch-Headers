//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSDocumentAction.h"

@interface MSExportAction : MSDocumentAction
{
}

- (id)touchBarImage;
- (id)baseNameForSlice;
- (struct CGRect)rectForExportingEntirePage;
- (void)determineRectForInitialSliceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)createInitialSliceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showInspectorPanelIfNecessary;
- (BOOL)hasArtboardsWitNoExportFormats;
- (id)tooltip;
- (id)label;
- (void)doPerformAction:(id)arg1;
- (BOOL)validate;
- (void)export:(id)arg1;

@end

