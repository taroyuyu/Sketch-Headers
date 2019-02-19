//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "MSModeModePickerDelegate-Protocol.h"

@class MSModePickerView, NSArray, NSString;
@protocol MSColorModePickerControllerDelegate;

@interface MSColorModePickerController : NSViewController <MSModeModePickerDelegate>
{
    id <MSColorModePickerControllerDelegate> _delegate;
    NSArray *_styleParts;
    MSModePickerView *_modePicker;
    unsigned long long _fillType;
    long long _gradientType;
}

@property(nonatomic) long long gradientType; // @synthesize gradientType=_gradientType;
@property(nonatomic) unsigned long long fillType; // @synthesize fillType=_fillType;
@property(retain, nonatomic) MSModePickerView *modePicker; // @synthesize modePicker=_modePicker;
@property(retain, nonatomic) NSArray *styleParts; // @synthesize styleParts=_styleParts;
@property(nonatomic) __weak id <MSColorModePickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateAllowedModes;
- (long long)modeForFillType:(unsigned long long)arg1 gradientType:(long long)arg2;
- (void)getFillType:(unsigned long long *)arg1 gradientType:(long long *)arg2 forPickerMode:(long long)arg3;
- (void)updateWithPickerMode:(long long)arg1;
- (void)viewDidLoad;
- (id)pickerView:(id)arg1 labelForMode:(long long)arg2;
- (void)pickerViewDidChangeMode:(id)arg1;
- (unsigned long long)colorTabIndex;
- (void)switchToColorTabAtIndex:(unsigned long long)arg1;
- (void)setFillType:(unsigned long long)arg1 gradientType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

