//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSBaseInspectorSection.h"

@class MSInspectorItem;

@interface MSSingleItemInspectorSection : MSBaseInspectorSection
{
    MSInspectorItem *_item;
}

+ (BOOL)canHandleLayer:(id)arg1;
+ (Class)itemClass;
@property(retain, nonatomic) MSInspectorItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)updateItems;

@end

