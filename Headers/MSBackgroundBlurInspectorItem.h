//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSBaseBlurInspectorItem.h"

@class MSInlineUpDownTextField, MSMathInspectorValueAdaptor, NSSlider;

@interface MSBackgroundBlurInspectorItem : MSBaseBlurInspectorItem
{
    MSInlineUpDownTextField *_saturationField;
    NSSlider *_saturationSlider;
    MSMathInspectorValueAdaptor *_saturationAdapter;
}

@property(retain, nonatomic) MSMathInspectorValueAdaptor *saturationAdapter; // @synthesize saturationAdapter=_saturationAdapter;
@property(retain, nonatomic) NSSlider *saturationSlider; // @synthesize saturationSlider=_saturationSlider;
@property(retain, nonatomic) MSInlineUpDownTextField *saturationField; // @synthesize saturationField=_saturationField;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

