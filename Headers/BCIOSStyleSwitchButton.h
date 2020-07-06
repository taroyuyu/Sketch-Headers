//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class CALayer;

@interface BCIOSStyleSwitchButton : NSButton
{
    CALayer *_backgroundOn;
    CALayer *_backgroundOff;
    CALayer *_knob;
    CALayer *_knobPressed;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *knobPressed; // @synthesize knobPressed=_knobPressed;
@property(retain, nonatomic) CALayer *knob; // @synthesize knob=_knob;
@property(retain, nonatomic) CALayer *backgroundOff; // @synthesize backgroundOff=_backgroundOff;
@property(retain, nonatomic) CALayer *backgroundOn; // @synthesize backgroundOn=_backgroundOn;
- (void)moveLayer:(id)arg1 toX:(double)arg2;
- (void)performAnimated:(BOOL)arg1 block:(CDUnknownBlockType)arg2;
- (id)layerWithImageNamed:(id)arg1;
- (void)setState:(long long)arg1;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)mouseDown:(id)arg1;
- (void)reflectStateAnimated:(BOOL)arg1;
- (void)awakeFromNib;

@end
