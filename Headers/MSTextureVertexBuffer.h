//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSTextureVertexBuffer : NSObject
{
    const struct MSTextureVertex *_verticies;
    const unsigned int *_indicies;
    unsigned long long _indexCount;
    unsigned long long _vertexCount;
}

@property(readonly, nonatomic) unsigned long long vertexCount; // @synthesize vertexCount=_vertexCount;
@property(readonly, nonatomic) unsigned long long indexCount; // @synthesize indexCount=_indexCount;
@property(readonly, nonatomic) const unsigned int *indicies; // @synthesize indicies=_indicies;
@property(readonly, nonatomic) const struct MSTextureVertex *verticies; // @synthesize verticies=_verticies;
- (void)dealloc;
@property(readonly, nonatomic) unsigned long long indiciesLength;
@property(readonly, nonatomic) unsigned long long verticiesLength;
- (id)initWithVerticies:(struct MSTextureVertex *)arg1 vertexCount:(unsigned long long)arg2 indicies:(unsigned int *)arg3 indexCount:(unsigned long long)arg4;

@end

