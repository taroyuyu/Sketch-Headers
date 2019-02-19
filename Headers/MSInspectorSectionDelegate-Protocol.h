//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSDocument, NSString, NSViewController;

@protocol MSInspectorSectionDelegate <NSObject>
- (void)reloadItemsForSection:(NSViewController *)arg1;
- (void)persistentlyCollapse:(BOOL)arg1 sectionWithIdentifier:(NSString *)arg2 reloadTarget:(NSViewController *)arg3;
- (BOOL)isSectionWithIdentifierCollapsed:(NSString *)arg1 default:(BOOL)arg2;
- (BOOL)isSectionWithIdentifierCollapsed:(NSString *)arg1;
- (MSDocument *)documentForInspectorSection:(NSViewController *)arg1;
- (void)sectionDidResize:(NSViewController *)arg1;
@end

