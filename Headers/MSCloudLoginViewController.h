//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSCloudPreferenceViewController.h"

@class NSButton, NSProgressIndicator, NSTextField;

@interface MSCloudLoginViewController : MSCloudPreferenceViewController
{
    NSTextField *_emailTextField;
    NSTextField *_passwordTextField;
    NSTextField *_titleLabel;
    NSButton *_loginButton;
    NSButton *_registerButton;
    NSProgressIndicator *_loginProgressIndicator;
}

@property(retain, nonatomic) NSProgressIndicator *loginProgressIndicator; // @synthesize loginProgressIndicator=_loginProgressIndicator;
@property(retain, nonatomic) NSButton *registerButton; // @synthesize registerButton=_registerButton;
@property(retain, nonatomic) NSButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSTextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(retain, nonatomic) NSTextField *emailTextField; // @synthesize emailTextField=_emailTextField;
- (void).cxx_destruct;
- (void)userDidLogout;
- (void)userDidLogin;
- (void)login:(id)arg1;
- (void)enableLoginFields:(BOOL)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)textDidChange:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;

@end
