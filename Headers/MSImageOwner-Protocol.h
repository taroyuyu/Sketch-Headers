//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MSImageData;

@protocol MSImageOwner
@property(readonly, nonatomic) BOOL canReduceImageSize;
@property(readonly, nonatomic) struct CGSize targetSizeForReduction;
@property(retain, nonatomic) MSImageData *image;
- (void)setReducedImage:(MSImageData *)arg1;
@end

