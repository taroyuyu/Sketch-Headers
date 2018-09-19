//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSFlowMenuBuilderTarget-Protocol.h"

@protocol MSInspectorFlowHandlerDelegate;

@interface MSInspectorFlowHandler : NSObject <MSFlowMenuBuilderTarget>
{
    id <MSInspectorFlowHandlerDelegate> _delegate;
}

+ (BOOL)shouldShowFullInspectorForLayers:(id)arg1;
+ (BOOL)shouldShowFullInspectorForFlow:(id)arg1;
+ (id)flowConnectionForLayers:(id)arg1;
@property(nonatomic) __weak id <MSInspectorFlowHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)layers;
- (id)document;
- (void)reload;
- (id)flowConnection;
- (void)enumerateLayersAndReload:(CDUnknownBlockType)arg1;
- (void)flowTargetAction:(id)arg1;
- (void)removeFlowAction:(id)arg1;
- (void)flowBackAction:(id)arg1;

@end

