//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSTextFieldWithDropDownMenu.h"

@class NSArray;

@interface MSExportFormatNamingTextField : MSTextFieldWithDropDownMenu
{
    NSArray *_exportFormats;
}

+ (Class)cellClass;
@property(copy, nonatomic) NSArray *exportFormats; // @synthesize exportFormats=_exportFormats;
- (void).cxx_destruct;
- (void)applyNamingScheme:(id)arg1;
- (id)popupMenu;

@end

