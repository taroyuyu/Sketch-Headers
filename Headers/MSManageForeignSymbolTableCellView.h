//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class MSSharedObjectView, NSTextField;

@interface MSManageForeignSymbolTableCellView : NSTableCellView
{
    NSTextField *_secondaryTextField;
    MSSharedObjectView *_sharedObjectView;
}

@property(retain, nonatomic) MSSharedObjectView *sharedObjectView; // @synthesize sharedObjectView=_sharedObjectView;
@property(retain, nonatomic) NSTextField *secondaryTextField; // @synthesize secondaryTextField=_secondaryTextField;
- (void).cxx_destruct;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setObjectValue:(id)arg1;

@end

