//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchModel/MSStyle.h>

@interface MSStyle (MSPreviewGeneration)
- (id)debugQuickLookObject;
- (void)generatePreviewWithImageSize:(struct CGSize)arg1 previewSize:(struct CGSize)arg2 colorSpace:(id)arg3 backingScale:(double)arg4 concurrentCancelBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)generatePreviewWithImageSize:(struct CGSize)arg1 previewSize:(struct CGSize)arg2 colorSpace:(id)arg3 backingScale:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)prepareForPreviewingWithImageSize:(struct CGSize)arg1 previewSize:(struct CGSize)arg2;
- (id)shapeForPreviewWithSize:(struct CGSize)arg1;
@end
