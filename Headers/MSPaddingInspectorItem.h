//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSInspectorItem.h"

@interface MSPaddingInspectorItem : MSInspectorItem
{
    BOOL _wantsSeparator;
    BOOL _wantsInsetSeparator;
}

+ (id)paddingWithHeight:(double)arg1;
@property(nonatomic) BOOL wantsInsetSeparator; // @synthesize wantsInsetSeparator=_wantsInsetSeparator;
@property(nonatomic) BOOL wantsSeparator; // @synthesize wantsSeparator=_wantsSeparator;
- (void)updateView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

