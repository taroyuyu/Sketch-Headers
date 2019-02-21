//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSRenderingDriver;
@protocol MSHighLevelExportDelegate;

@interface MSHighLevelExporter : NSObject
{
    id <MSHighLevelExportDelegate> _delegate;
    MSRenderingDriver *_driver;
}

+ (id)exporterWithDelegate:(id)arg1;
@property(readonly, nonatomic) MSRenderingDriver *driver; // @synthesize driver=_driver;
@property(nonatomic) __weak id <MSHighLevelExportDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)export:(id)arg1;
- (void)prepareExportRequest:(id)arg1 layer:(id)arg2;
- (id)exportRequestsForLayer:(id)arg1 inRect:(struct CGRect)arg2 exportFormats:(id)arg3;
- (BOOL)exportLayers:(id)arg1;
- (BOOL)exportPage:(id)arg1;
- (id)formatsToExport;
- (id)suffixForScale:(double)arg1;
- (struct CGRect)rectToExportForPage:(id)arg1;
- (BOOL)outputFileWithName:(id)arg1 URL:(id *)arg2 existing:(id *)arg3;
- (id)initWithDelegate:(id)arg1 driver:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

