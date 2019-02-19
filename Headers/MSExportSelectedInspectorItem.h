//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSInspectorItem.h"

@class MSShareButtonHandler, NSButton;

@interface MSExportSelectedInspectorItem : MSInspectorItem
{
    NSButton *_exportButton;
    MSShareButtonHandler *_shareButtonHandler;
    NSButton *_shareButton;
}

@property(retain, nonatomic) NSButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) MSShareButtonHandler *shareButtonHandler; // @synthesize shareButtonHandler=_shareButtonHandler;
@property(retain, nonatomic) NSButton *exportButton; // @synthesize exportButton=_exportButton;
- (void).cxx_destruct;
- (void)shareAction:(id)arg1;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

