//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSDocumentAction.h"

@interface MSToggleVisibilityAction : MSDocumentAction
{
}

- (id)tabbedWindows;
- (void)doPerformAction:(id)arg1;
- (BOOL)shouldRunForAllTabsInWindow;
- (void)prepareForNewWindow;
- (id)defaultsKey;
- (void)hide;
- (void)show;
@property(readonly, nonatomic) BOOL isActive;

@end

