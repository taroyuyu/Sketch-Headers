//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSImmutableDocumentData, MSImmutableLayer;
@protocol MSRenderingContextCacheProvider;

@interface MSRenderingRequest : NSObject
{
    id <MSRenderingContextCacheProvider> _cacheProvider;
    struct CGColorSpace *_colorSpace;
    MSImmutableDocumentData *_document;
    double _pointScale;
    double _zoomLevel;
    MSImmutableLayer *_backgroundBlurLayer;
    unsigned long long _options;
}

@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) MSImmutableLayer *backgroundBlurLayer; // @synthesize backgroundBlurLayer=_backgroundBlurLayer;
@property(readonly, nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(readonly, nonatomic) double pointScale; // @synthesize pointScale=_pointScale;
@property(readonly, nonatomic) MSImmutableDocumentData *document; // @synthesize document=_document;
@property(readonly, nonatomic) struct CGColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(retain, nonatomic) id <MSRenderingContextCacheProvider> cacheProvider; // @synthesize cacheProvider=_cacheProvider;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL skipLayerInclusionTests;
@property(readonly, nonatomic) BOOL shouldFlipShadows;
@property(readonly, nonatomic, getter=isPrinting) BOOL printing;
@property(readonly, nonatomic) BOOL includeArtboardBackground;
@property(readonly, nonatomic) BOOL willDrawPixelated;
@property(readonly, nonatomic, getter=isDrawingPixelated) BOOL drawingPixelated;
@property(readonly, nonatomic, getter=isDrawingMask) BOOL drawingMask;
@property(readonly, nonatomic, getter=isExporting) BOOL exporting;
- (void)dealloc;
- (id)requestWithOptions:(unsigned long long)arg1;
- (id)initWithDocument:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 pointScale:(double)arg3 zoomLevel:(double)arg4 cacheProvider:(id)arg5 options:(unsigned long long)arg6;
- (id)initWithDocument:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 pointScale:(double)arg3 zoomLevel:(double)arg4 cacheProvider:(id)arg5 backgroundBlurLayer:(id)arg6 options:(unsigned long long)arg7;
- (id)init;

@end

