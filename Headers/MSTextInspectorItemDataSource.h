//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSAutoSelectingArrayController, NSTextView;

@interface MSTextInspectorItemDataSource : NSObject
{
    MSAutoSelectingArrayController *_fontsController;
    MSAutoSelectingArrayController *_kerningController;
    MSAutoSelectingArrayController *_paragraphStylesController;
    MSAutoSelectingArrayController *_colorController;
    MSAutoSelectingArrayController *_strikethroughController;
    MSAutoSelectingArrayController *_underlineController;
    MSAutoSelectingArrayController *_transformController;
    NSTextView *_sourceTextView;
}

+ (id)selectedParagraphsOfTextView:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSTextView *sourceTextView; // @synthesize sourceTextView=_sourceTextView;
@property(retain, nonatomic) MSAutoSelectingArrayController *transformController; // @synthesize transformController=_transformController;
@property(retain, nonatomic) MSAutoSelectingArrayController *underlineController; // @synthesize underlineController=_underlineController;
@property(retain, nonatomic) MSAutoSelectingArrayController *strikethroughController; // @synthesize strikethroughController=_strikethroughController;
@property(retain, nonatomic) MSAutoSelectingArrayController *colorController; // @synthesize colorController=_colorController;
@property(retain, nonatomic) MSAutoSelectingArrayController *paragraphStylesController; // @synthesize paragraphStylesController=_paragraphStylesController;
@property(retain, nonatomic) MSAutoSelectingArrayController *kerningController; // @synthesize kerningController=_kerningController;
@property(retain, nonatomic) MSAutoSelectingArrayController *fontsController; // @synthesize fontsController=_fontsController;
- (void)reloadFromTextView:(id)arg1 orLayers:(id)arg2 includeAdvanced:(BOOL)arg3;
- (id)init;

@end

