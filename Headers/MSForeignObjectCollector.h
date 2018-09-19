//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MSForeignObjectProvider;

@interface MSForeignObjectCollector : NSObject
{
    id <MSForeignObjectProvider> _provider;
    CDUnknownBlockType _filter;
}

@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) id <MSForeignObjectProvider> provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (id)buildCollectionWithFilter:(CDUnknownBlockType)arg1;
- (void)enumerateForeignObjects:(CDUnknownBlockType)arg1;
- (id)buildLibraryToSharedObjectMap;
- (id)initWithProvider:(id)arg1;

@end

