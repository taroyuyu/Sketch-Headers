//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString;

@interface MSArtboardTitleItem : NSObject
{
    BOOL _isFlowHome;
    BOOL _isSymbolMaster;
    struct CGColor *_color;
    NSAttributedString *_attributedTitle;
    double _titleCompression;
    CDStruct_bf95b13b _bounds;
}

@property(nonatomic) BOOL isSymbolMaster; // @synthesize isSymbolMaster=_isSymbolMaster;
@property(nonatomic) double titleCompression; // @synthesize titleCompression=_titleCompression;
@property(nonatomic) BOOL isFlowHome; // @synthesize isFlowHome=_isFlowHome;
@property(retain, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(nonatomic) struct CGColor *color; // @synthesize color=_color;
@property(nonatomic) CDStruct_bf95b13b bounds; // @synthesize bounds=_bounds;
- (void).cxx_destruct;
- (BOOL)isEqualToItem:(id)arg1;
- (void)dealloc;

@end

