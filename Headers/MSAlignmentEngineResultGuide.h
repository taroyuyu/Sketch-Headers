//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface MSAlignmentEngineResultGuide : NSObject <NSCopying>
{
    struct MSLineSegment _lineSegment;
}

@property(readonly, nonatomic) struct MSLineSegment lineSegment; // @synthesize lineSegment=_lineSegment;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)drawWithLineWidth:(double)arg1;
- (id)bezierPath;
- (id)initWithLineSegment:(struct MSLineSegment)arg1;

@end

