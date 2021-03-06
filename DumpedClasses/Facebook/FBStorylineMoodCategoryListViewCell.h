//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class FBImageDownloader, FBNetworkImageView, NSString, UIImage, UILabel;

@interface FBStorylineMoodCategoryListViewCell : UICollectionViewCell
{
    FBNetworkImageView *_iconImageView;
    UILabel *_titleLabel;
    NSString *_iconURLString;
    FBImageDownloader *_imageDownloader;
}

@property(retain, nonatomic) FBImageDownloader *imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(copy, nonatomic) NSString *iconURLString; // @synthesize iconURLString=_iconURLString;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *image;
- (id)initWithFrame:(struct CGRect)arg1;

@end

