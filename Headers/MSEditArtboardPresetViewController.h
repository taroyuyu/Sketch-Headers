//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSTouchBarDelegate-Protocol.h"

@class MSArtboardPreset, NSButton, NSString;
@protocol MSEditArtboardPresetViewControllerDelegate;

@interface MSEditArtboardPresetViewController : NSViewController <NSTouchBarDelegate>
{
    MSArtboardPreset *_preset;
    id <MSEditArtboardPresetViewControllerDelegate> _delegate;
    NSButton *_confirmButton;
    NSButton *_cancelButton;
}

@property(retain, nonatomic) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NSButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) __weak id <MSEditArtboardPresetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MSArtboardPreset *preset; // @synthesize preset=_preset;
- (void).cxx_destruct;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (void)confirm:(id)arg1;
- (void)cancel:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

