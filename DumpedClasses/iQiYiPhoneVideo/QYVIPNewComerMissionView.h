//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, UIButton;
@protocol QYVIPNewComerMissionViewProtocol;

@interface QYVIPNewComerMissionView : UIView
{
    UIButton *_contentBeerView;
    UIButton *_contentTipsView;
    double _xOrigin;
    id <QYVIPNewComerMissionViewProtocol> _delegate;
    UIButton *_closeBtn;
    NSDictionary *_dicDetail;
}

@property(retain, nonatomic) NSDictionary *dicDetail; // @synthesize dicDetail=_dicDetail;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(nonatomic) id <QYVIPNewComerMissionViewProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double xOrigin; // @synthesize xOrigin=_xOrigin;
@property(retain, nonatomic) UIButton *contentTipsView; // @synthesize contentTipsView=_contentTipsView;
@property(retain, nonatomic) UIButton *contentBeerView; // @synthesize contentBeerView=_contentBeerView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateHaveFinishTimesForNewComerView;
- (void)openWebviewWithUrlString:(id)arg1;
- (void)closeNewComerView;
- (void)newComerViewSelector:(id)arg1;
- (void)showBeerAnimation:(_Bool)arg1;
- (void)hiddenBeerAnimation;
- (void)newComerInitAnimation;
- (void)stopHeadAnimation;
- (id)initWithFrame:(struct CGRect)arg1 andDetail:(id)arg2;
- (void)dealloc;

@end

