//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSToolbarPopoverContentViewController.h"

@class MSCloudAction, MSCloudViewController;

@interface MSCloudBaseViewController : MSToolbarPopoverContentViewController
{
}

- (void)dismissPopoverIfCommandKeyDown;
- (void)cloudBaseViewControllerDidAppear;
@property(readonly, nonatomic) MSCloudViewController *cloudViewController;
@property(readonly, nonatomic) MSCloudAction *cloudAction;
- (id)initWithAction:(id)arg1;

@end

