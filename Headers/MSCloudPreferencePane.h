//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSPreferencePane.h"

@class MSCloudPreferencesViewController, MSCloudSigninWindowController, NSStoryboard;

@interface MSCloudPreferencePane : MSPreferencePane
{
    NSStoryboard *_cloudStoryboard;
    MSCloudPreferencesViewController *_currentViewController;
    MSCloudSigninWindowController *_signinSheet;
}

+ (void)showAndSignIn;
+ (id)toolbarIcon;
+ (id)title;
+ (id)identifier;
@property(retain, nonatomic) MSCloudSigninWindowController *signinSheet; // @synthesize signinSheet=_signinSheet;
@property(retain, nonatomic) MSCloudPreferencesViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) NSStoryboard *cloudStoryboard; // @synthesize cloudStoryboard=_cloudStoryboard;
- (void).cxx_destruct;
- (id)willPresentError:(id)arg1;
- (void)platformDidChangeNotification:(id)arg1;
- (void)userDidChangeNotification:(id)arg1;
- (void)userDidSignIn;
- (void)signIn;
- (void)fixFirstResponder;
- (void)updateWindowFrame;
- (void)showRootViewController;
- (void)showAccountViewController;
- (void)showIntroViewController;
- (void)showCloudViewControllerOfClass:(Class)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;

@end

