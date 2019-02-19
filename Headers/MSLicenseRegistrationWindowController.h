//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSWindowDelegate-Protocol.h"

@class NSButton, NSDate, NSImageView, NSString, NSTextField, NSView;

@interface MSLicenseRegistrationWindowController : NSWindowController <NSWindowDelegate>
{
    BOOL _shouldQuitOnWindowClose;
    BOOL _checkForAvailableUpdates;
    BOOL _runningAsModal;
    NSTextField *_titleTextField;
    NSTextField *_descriptionTextField;
    NSView *_contentView;
    NSView *_licenseView;
    NSImageView *_backgroundImageView;
    NSView *_registrationCompletionView;
    NSImageView *_registrationCompletionBackgroundView;
    NSTextField *_licenseTextField;
    NSTextField *_licenseDescriptionField;
    NSView *_buttonFooterView;
    NSView *_defaultButtons;
    NSView *_registrationCompletionButtons;
    NSView *_notSupportedVersionButtons;
    NSView *_tooManyDevicesButtons;
    NSView *_invalidLicenseButtons;
    NSButton *_registerButton;
    NSButton *_cloudButton;
    NSDate *_licenseUpdateExpirationDate;
}

+ (void)registerWithKey:(id)arg1;
+ (void)showRegistrationWindow;
+ (void)showTrialExpiredModal;
@property(retain, nonatomic) NSDate *licenseUpdateExpirationDate; // @synthesize licenseUpdateExpirationDate=_licenseUpdateExpirationDate;
@property(retain, nonatomic) NSButton *cloudButton; // @synthesize cloudButton=_cloudButton;
@property(retain, nonatomic) NSButton *registerButton; // @synthesize registerButton=_registerButton;
@property(retain, nonatomic) NSView *invalidLicenseButtons; // @synthesize invalidLicenseButtons=_invalidLicenseButtons;
@property(retain, nonatomic) NSView *tooManyDevicesButtons; // @synthesize tooManyDevicesButtons=_tooManyDevicesButtons;
@property(retain, nonatomic) NSView *notSupportedVersionButtons; // @synthesize notSupportedVersionButtons=_notSupportedVersionButtons;
@property(retain, nonatomic) NSView *registrationCompletionButtons; // @synthesize registrationCompletionButtons=_registrationCompletionButtons;
@property(retain, nonatomic) NSView *defaultButtons; // @synthesize defaultButtons=_defaultButtons;
@property(retain, nonatomic) NSView *buttonFooterView; // @synthesize buttonFooterView=_buttonFooterView;
@property(retain, nonatomic) NSTextField *licenseDescriptionField; // @synthesize licenseDescriptionField=_licenseDescriptionField;
@property(retain, nonatomic) NSTextField *licenseTextField; // @synthesize licenseTextField=_licenseTextField;
@property(retain, nonatomic) NSImageView *registrationCompletionBackgroundView; // @synthesize registrationCompletionBackgroundView=_registrationCompletionBackgroundView;
@property(retain, nonatomic) NSView *registrationCompletionView; // @synthesize registrationCompletionView=_registrationCompletionView;
@property(retain, nonatomic) NSImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) NSView *licenseView; // @synthesize licenseView=_licenseView;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSTextField *descriptionTextField; // @synthesize descriptionTextField=_descriptionTextField;
@property(retain, nonatomic) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(readonly, nonatomic) BOOL runningAsModal; // @synthesize runningAsModal=_runningAsModal;
@property(nonatomic) BOOL checkForAvailableUpdates; // @synthesize checkForAvailableUpdates=_checkForAvailableUpdates;
@property(nonatomic) BOOL shouldQuitOnWindowClose; // @synthesize shouldQuitOnWindowClose=_shouldQuitOnWindowClose;
- (void).cxx_destruct;
- (void)openLicenseManager:(id)arg1;
- (void)renewLicense:(id)arg1;
- (void)downloadPreviousVersion:(id)arg1;
- (void)openLicenseRecoveryPage:(id)arg1;
- (void)signInToCloud:(id)arg1;
- (void)visitStore:(id)arg1;
- (void)registerLicense:(id)arg1;
- (void)didCloseAllDocuments:(id)arg1;
- (void)closeDocumentsAndQuit;
- (void)showContentView:(id)arg1;
- (void)renameButtonsToQuit:(id)arg1;
- (void)showButtonSet:(id)arg1;
- (void)showCompletedRegistration;
- (void)showCopyForActiveLicense;
- (void)showCopyForTrialExpired;
- (void)windowWillClose:(id)arg1;
- (void)loadInitialView;
- (void)windowDidLoad;
- (void)licenseChanged:(id)arg1;
- (void)transformToModal;
- (void)dealloc;
- (id)initWithWindowNibName:(id)arg1 modal:(BOOL)arg2 quitOnClose:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

