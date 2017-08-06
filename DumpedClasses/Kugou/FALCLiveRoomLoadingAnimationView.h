//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAView.h"

@class FABlurImageView, UIImageView, UILabel, UIView;

@interface FALCLiveRoomLoadingAnimationView : FAView
{
    UIImageView *_imgViewLoading;
    FABlurImageView *_bgBlurImageVIew;
    UILabel *_labContent;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UILabel *labContent; // @synthesize labContent=_labContent;
@property(retain, nonatomic) FABlurImageView *bgBlurImageVIew; // @synthesize bgBlurImageVIew=_bgBlurImageVIew;
@property(retain, nonatomic) UIImageView *imgViewLoading; // @synthesize imgViewLoading=_imgViewLoading;
- (void).cxx_destruct;
- (void)setLoadingImg:(id)arg1;
- (void)setBlurImageVIew:(id)arg1 Blur:(_Bool)arg2;
- (void)loadingAnimationWithDuration:(float)arg1;
- (void)dismissLoadingAnimation;
- (void)starLoadingAnimationWithLoadingImg:(id)arg1;
- (void)starLoadingAnimationWithBlurImageVIew:(id)arg1 LoadingImg:(id)arg2 Blur:(_Bool)arg3;
- (void)starLoadingAnimationWithBlurImageVIew:(id)arg1 LoadingImg:(id)arg2 Title:(id)arg3 Blur:(_Bool)arg4;
- (void)initSubView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
