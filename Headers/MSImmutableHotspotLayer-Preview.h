//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSImmutableHotspotLayer.h>

#import "MSImmutableLayerPreviewability-Protocol.h"

@interface MSImmutableHotspotLayer (Preview) <MSImmutableLayerPreviewability>
- (void)refreshPreviewImagesWithDocumentData:(id)arg1 forOwner:(id)arg2;
- (BOOL)previewImagesRequireRefreshWithDocumentData:(id)arg1 forOwner:(id)arg2;
- (void)drawPreviewInRect:(struct CGRect)arg1 selected:(BOOL)arg2 bezier:(id)arg3;
@end

