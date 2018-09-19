//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

@interface MSStackView : NSView
{
    BOOL _autoupdatesMaximumHeight;
    long long _maximumHeight;
    double _minimumHeight;
    NSColor *_backgroundColor;
    id _keyResponder;
}

@property(nonatomic) __weak id keyResponder; // @synthesize keyResponder=_keyResponder;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(nonatomic) long long maximumHeight; // @synthesize maximumHeight=_maximumHeight;
@property(nonatomic) BOOL autoupdatesMaximumHeight; // @synthesize autoupdatesMaximumHeight=_autoupdatesMaximumHeight;
- (void).cxx_destruct;
- (void)keyDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (void)adjustHeight:(unsigned long long)arg1 hasScrollViews:(BOOL)arg2;
- (unsigned long long)doStack;
- (long long)totalRequiredHeight;
- (BOOL)adjustScrollViewsToFitMaximumHeight;
- (struct CGRect)adjustScroll:(struct CGRect)arg1;
- (double)refreshMaximumHeightFromSubviews;
- (void)stack:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)awakeFromNib;

@end

