//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class ALAsset, UIImage, UIImageView, UIView, WVCheckmarkView;

@interface WVAssetsCollectionViewCell : UICollectionViewCell
{
    _Bool _showsOverlayViewWhenSelected;
    ALAsset *_asset;
    UIImageView *_imageView;
    UIView *_overlayView;
    WVCheckmarkView *_checkmarkView;
    UIImage *_blankImage;
}

@property(retain, nonatomic) UIImage *blankImage; // @synthesize blankImage=_blankImage;
@property(retain, nonatomic) WVCheckmarkView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool showsOverlayViewWhenSelected; // @synthesize showsOverlayViewWhenSelected=_showsOverlayViewWhenSelected;
@property(retain, nonatomic) ALAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)hideOverlayView;
- (void)showOverlayView;
- (void)setSelected:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

