//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIButton, UILabel, UIScrollView;

@interface AliDetailPurchaseLimitView : UIView
{
    NSArray *_dataArray;
    CDUnknownBlockType _quitBlock;
    UIScrollView *_scrollView;
    UIButton *_closeButton;
    UILabel *_titleLabel;
}

@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) CDUnknownBlockType quitBlock; // @synthesize quitBlock=_quitBlock;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (void)closeCouponView;
- (void)setUp;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithSuitableSize;

@end

