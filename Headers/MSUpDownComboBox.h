//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSComboBox.h>

#import "MSUpDownProtocol-Protocol.h"
#import "NSTextViewDelegate-Protocol.h"

@class MSUpDownController, NSString;

@interface MSUpDownComboBox : NSComboBox <NSTextViewDelegate, MSUpDownProtocol>
{
    id _refreshDelegate;
    MSUpDownController *_upDownController;
    double _minimumIncrementValue;
}

@property(nonatomic) double minimumIncrementValue; // @synthesize minimumIncrementValue=_minimumIncrementValue;
@property(retain, nonatomic) MSUpDownController *upDownController; // @synthesize upDownController=_upDownController;
@property(nonatomic) __weak id refreshDelegate; // @synthesize refreshDelegate=_refreshDelegate;
- (void).cxx_destruct;
- (void)textDidEndEditing:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)textView:(id)arg1 shouldChangeTextInRanges:(id)arg2 replacementStrings:(id)arg3;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)keyUp:(id)arg1;
- (double)incrementValue;
- (id)maximum;
- (id)minimum;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

