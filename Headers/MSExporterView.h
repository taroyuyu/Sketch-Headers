//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class MSExporter;

@interface MSExporterView : NSView
{
    MSExporter *_renderer;
}

+ (id)exportViewWithRenderer:(id)arg1;
@property(nonatomic) __weak MSExporter *renderer; // @synthesize renderer=_renderer;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (void)drawRect:(struct CGRect)arg1;

@end

