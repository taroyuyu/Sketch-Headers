//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSTintedImages, NSImage, NSString;
@protocol BCOutlineViewPopupConfigurator;

@protocol BCOutlineViewNode <NSObject>
@property(readonly, nonatomic) BOOL isExpanded;
@property(readonly, nonatomic) MSTintedImages *badgeImages;
@property(readonly, nonatomic) BOOL hasBadgedIcon;
@property(readonly, nonatomic) BOOL isEditableInLayerList;
@property(readonly, nonatomic) BOOL isActive;
@property(retain, nonatomic) NSString *nodeName;
@property(readonly, nonatomic) unsigned long long filterTypeMask;
@property(readonly, nonatomic) unsigned long long displayType;
@property(readonly, nonatomic) NSString *outlineViewNodeIdentifier;
- (id <BCOutlineViewPopupConfigurator>)badgeMenuConfigurator;
- (NSImage *)maskIconWithState:(unsigned long long)arg1;
- (NSImage *)previewIconWithState:(unsigned long long)arg1;
@end

