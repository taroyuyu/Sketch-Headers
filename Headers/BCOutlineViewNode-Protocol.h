//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSLayerBadgeImages, NSImage, NSMenu, NSString;

@protocol BCOutlineViewNode <NSObject>
@property(readonly, nonatomic) BOOL isExpanded;
@property(readonly, nonatomic) unsigned long long selectedBadgeMenuItemIndex;
@property(readonly, nonatomic) MSLayerBadgeImages *badgeImages;
@property(readonly, nonatomic) BOOL hasBadgedIcon;
@property(readonly, nonatomic) BOOL isEditableInLayerList;
@property(readonly, nonatomic) BOOL isActive;
@property(retain, nonatomic) NSString *nodeName;
@property(readonly, nonatomic) unsigned long long filterTypeMask;
@property(readonly, nonatomic) unsigned long long displayType;
- (NSMenu *)badgeMenu;
- (NSImage *)maskIconWithState:(unsigned long long)arg1;
- (NSImage *)previewIconWithState:(unsigned long long)arg1;
@end

