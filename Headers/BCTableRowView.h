//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class BCOutlineView, BCTableCellView, NSColor, NSObject;
@protocol BCOutlineViewNode, BCTableRowViewDelegate;

@interface BCTableRowView : NSTableRowView
{
    BOOL _isDrawingHighlight;
    NSObject<BCOutlineViewNode> *_node;
    NSObject<BCTableRowViewDelegate> *_delegate;
    unsigned long long _expansionState;
}

@property(nonatomic) BOOL isDrawingHighlight; // @synthesize isDrawingHighlight=_isDrawingHighlight;
@property(nonatomic) unsigned long long expansionState; // @synthesize expansionState=_expansionState;
@property(nonatomic) __weak NSObject<BCTableRowViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<BCOutlineViewNode> *node; // @synthesize node=_node;
- (void).cxx_destruct;
@property(readonly, nonatomic) BCOutlineView *outlineView;
- (void)mouseDown:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)drawDraggingDestinationFeedbackInRect:(struct CGRect)arg1;
- (void)doDrawHighlight;
- (void)drawHighlight;
- (void)drawSelectionInRect:(struct CGRect)arg1;
- (void)drawBackgroundInRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)fillSelectionInRect:(struct CGRect)arg1;
- (BOOL)hasBottomPaddingApplied;
- (BOOL)hasTopPaddingApplied;
- (BOOL)isArtboardRow;
- (void)drawArtboardItemBordersIfNeeded;
- (BOOL)drawsBottomBorder;
- (BOOL)drawsTopBorder;
- (void)viewWillDraw;
- (void)refresh;
- (void)refreshBackgroundStyle;
- (void)fillBackgroundInRect:(struct CGRect)arg1;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, nonatomic) BCTableCellView *tableCellView;
- (id)backgroundColor;
- (void)setSelected:(BOOL)arg1;
@property(readonly, nonatomic) NSColor *selectedBackgroundColor;
@property(readonly, nonatomic) NSColor *highlightColor;
@property(readonly, nonatomic) unsigned long long displayType;
@property(readonly, nonatomic) BOOL highlighted;
- (void)highlightDidChange:(id)arg1;
@property(readonly, nonatomic, getter=isNodeExpanded) BOOL nodeExpanded;
@property(readonly, nonatomic, getter=isNodeSelected) BOOL nodeSelected;
- (void)didAddSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

