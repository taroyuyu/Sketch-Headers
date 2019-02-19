//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSTabViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"

@class MSDocument, NSArray, NSMenu, NSString, NSTableView;

@interface MSManageForeignSymbolsView : NSViewController <NSTableViewDataSource, NSTabViewDelegate>
{
    BOOL _cogEnabled;
    MSDocument *_document;
    NSTableView *_tableView;
    NSArray *_symbols;
    NSMenu *_contextMenu;
}

@property(retain, nonatomic) NSMenu *contextMenu; // @synthesize contextMenu=_contextMenu;
@property(nonatomic) BOOL cogEnabled; // @synthesize cogEnabled=_cogEnabled;
@property(retain, nonatomic) NSArray *symbols; // @synthesize symbols=_symbols;
@property(retain, nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MSDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (void)unlinkFromLibrary:(id)arg1;
- (void)editInLibrary:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)showContextMenu:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)buildSymbolList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

