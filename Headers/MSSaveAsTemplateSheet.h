//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Chocolat/CHSheetController.h>

@class NSTextField;

@interface MSSaveAsTemplateSheet : CHSheetController
{
    CDUnknownBlockType _inputCompletionBlock;
    NSTextField *_inputField;
}

+ (id)runForDocument:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSTextField *inputField; // @synthesize inputField=_inputField;
@property(copy, nonatomic) CDUnknownBlockType inputCompletionBlock; // @synthesize inputCompletionBlock=_inputCompletionBlock;
- (void).cxx_destruct;
- (void)confirm:(id)arg1;

@end

