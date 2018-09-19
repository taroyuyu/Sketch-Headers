//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSCloudBaseViewController.h"

@class NSArray, NSButton, NSPopUpButton, NSStackView;

@interface MSCloudInitialViewController : MSCloudBaseViewController
{
    NSArray *_organizations;
    NSStackView *_actionStackView;
    NSStackView *_organizationStackView;
    NSButton *_uploadButton;
    NSPopUpButton *_organizationButton;
}

@property(retain, nonatomic) NSPopUpButton *organizationButton; // @synthesize organizationButton=_organizationButton;
@property(retain, nonatomic) NSButton *uploadButton; // @synthesize uploadButton=_uploadButton;
@property(retain, nonatomic) NSStackView *organizationStackView; // @synthesize organizationStackView=_organizationStackView;
@property(retain, nonatomic) NSStackView *actionStackView; // @synthesize actionStackView=_actionStackView;
@property(retain, nonatomic) NSArray *organizations; // @synthesize organizations=_organizations;
- (void).cxx_destruct;
- (void)upload:(id)arg1;
- (void)updateOrganizationButton;
- (void)viewDidLoad;
- (void)loadView;
- (void)reloadOrganizations;

@end

