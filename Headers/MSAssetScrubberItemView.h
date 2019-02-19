//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSScrubberItemView.h>

@class MSColor, MSGradient, MSImageData, NSColorSpace, NSImage;

@interface MSAssetScrubberItemView : NSScrubberItemView
{
    BOOL _isFirstInCollection;
    BOOL _isLastInCollection;
    MSColor *_color;
    NSColorSpace *_canvasColorSpace;
    MSGradient *_gradient;
    MSImageData *_pattern;
    double _tailPadding;
    NSImage *_cachedPreviewImage;
}

@property(nonatomic) __weak NSImage *cachedPreviewImage; // @synthesize cachedPreviewImage=_cachedPreviewImage;
@property(readonly, nonatomic) double tailPadding; // @synthesize tailPadding=_tailPadding;
@property(readonly, nonatomic) BOOL isLastInCollection; // @synthesize isLastInCollection=_isLastInCollection;
@property(readonly, nonatomic) BOOL isFirstInCollection; // @synthesize isFirstInCollection=_isFirstInCollection;
@property(readonly, nonatomic) MSImageData *pattern; // @synthesize pattern=_pattern;
@property(readonly, nonatomic) MSGradient *gradient; // @synthesize gradient=_gradient;
@property(readonly, nonatomic) NSColorSpace *canvasColorSpace; // @synthesize canvasColorSpace=_canvasColorSpace;
@property(readonly, nonatomic) MSColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)patternPreviewImageWithDrawingBounds:(struct CGRect)arg1;
- (id)gradientPreviewImageWithDrawingBounds:(struct CGRect)arg1;
- (id)colorPreviewImageWithDrawingBounds:(struct CGRect)arg1;
- (id)previewImage;
- (struct CGRect)deviceColorPreviewRectForRect:(struct CGRect)arg1 drawingBorder:(BOOL)arg2;
- (id)clipPathForRect:(struct CGRect)arg1 cornerRadius:(double)arg2;
- (id)clipPath;
- (struct CGRect)drawingBounds;
- (BOOL)shouldDrawBorderForColor:(id)arg1;
- (id)initWithAsset:(id)arg1 canvasColorSpace:(id)arg2 isFirst:(BOOL)arg3 isLast:(BOOL)arg4 tailPadding:(double)arg5;

@end

