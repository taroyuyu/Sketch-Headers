//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSRenderingDriverCG.h"

@class NSMutableString, NSString;
@protocol MSProfilingRendererDelegate;

@interface MSRenderingDriverCGProfiling : MSRenderingDriverCG
{
    NSMutableString *_traversalLog;
    NSString *_traversalIndent;
    id <MSProfilingRendererDelegate> _delegate;
}

@property(readonly, nonatomic) id <MSProfilingRendererDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *traversalIndent; // @synthesize traversalIndent=_traversalIndent;
@property(readonly, nonatomic) NSMutableString *traversalLog; // @synthesize traversalLog=_traversalLog;
- (void).cxx_destruct;
- (id)setupRendererMap;
- (id)initWithDelegate:(id)arg1;

@end

