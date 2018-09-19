//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MSMenuItemHelper : NSObject
{
    BOOL _isSeparator;
    NSString *_title;
    long long _tag;
}

+ (id)separator;
+ (id)itemWithTitle:(id)arg1;
+ (id)itemWithTitle:(id)arg1 tag:(long long)arg2;
@property(nonatomic) BOOL isSeparator; // @synthesize isSeparator=_isSeparator;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)menuItem;

@end

