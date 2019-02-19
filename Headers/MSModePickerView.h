//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSStackView.h>

@class NSArray, NSIndexSet;
@protocol MSModeModePickerDelegate;

@interface MSModePickerView : NSStackView
{
    id <MSModeModePickerDelegate> delegate;
    long long _pickerMode;
    NSIndexSet *_disabledModes;
}

@property(retain, nonatomic) NSIndexSet *disabledModes; // @synthesize disabledModes=_disabledModes;
@property(nonatomic) long long pickerMode; // @synthesize pickerMode=_pickerMode;
@property __weak id <MSModeModePickerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *buttons;
- (long long)modeForButton:(id)arg1;
- (id)buttonForMode:(long long)arg1;
- (id)labelForMode:(long long)arg1;
- (void)deselectAllButtons;
- (void)refreshButtonStates;
- (void)buttonAction:(id)arg1;
- (void)awakeFromNib;

@end

