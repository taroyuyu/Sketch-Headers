//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSTextFieldWithDropDownMenuCell.h"

@interface MSExportFormatNamingTextFieldCell : MSTextFieldWithDropDownMenuCell
{
    double _layerNamePlaceholderWidth;
}

@property(nonatomic) double layerNamePlaceholderWidth; // @synthesize layerNamePlaceholderWidth=_layerNamePlaceholderWidth;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) BOOL isPrefixed;
@property(readonly, nonatomic) long long namingScheme;
- (void)controlTextDidChange:(id)arg1;
- (void)dealloc;
- (void)setupExportFormatNamingTextFieldCell;
- (id)initTextCell:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

