//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSWindowDelegate-Protocol.h"

@class NSButton, NSString, NSTextField;

@interface MSUnavailableUpdatesWindowController : NSWindowController <NSWindowDelegate>
{
    NSTextField *_descriptionTextField;
    NSTextField *_headerTextField;
    NSButton *_confirmationButton;
    NSString *_lastVersion;
    NSString *_lastBuildNumber;
    long long _blockedUpdateReason;
}

+ (void)showModalWithVersion:(id)arg1 buildNumber:(id)arg2 reason:(long long)arg3;
@property(nonatomic) long long blockedUpdateReason; // @synthesize blockedUpdateReason=_blockedUpdateReason;
@property(retain, nonatomic) NSString *lastBuildNumber; // @synthesize lastBuildNumber=_lastBuildNumber;
@property(retain, nonatomic) NSString *lastVersion; // @synthesize lastVersion=_lastVersion;
@property(nonatomic) __weak NSButton *confirmationButton; // @synthesize confirmationButton=_confirmationButton;
@property(nonatomic) __weak NSTextField *headerTextField; // @synthesize headerTextField=_headerTextField;
@property(nonatomic) __weak NSTextField *descriptionTextField; // @synthesize descriptionTextField=_descriptionTextField;
- (void).cxx_destruct;
- (void)learnMore:(id)arg1;
- (void)openUpdatesPage:(id)arg1;
- (void)confirmationAction:(id)arg1;
- (BOOL)renewalRequired;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
- (id)initWithWindowNibName:(id)arg1 version:(id)arg2 buildNumber:(id)arg3 reason:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

