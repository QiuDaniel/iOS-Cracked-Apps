//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QYPlayerViewController, UIButton, UILabel;
@protocol QYPlayMessageViewDelegate;

@interface QYPlayMessageView : UIView
{
    UIView *_msgContentView;
    UILabel *_textlabel;
    UIButton *_retryButton;
    UIButton *_feedBackBtn;
    UIButton *_replayBtn;
    UIButton *_paopaoEnterBtn;
    id <QYPlayMessageViewDelegate> _delegate;
    int _btnType;
    QYPlayerViewController *_playerViewController;
}

+ (id)creatPlayMessageViewWithFrame:(struct CGRect)arg1 type:(int)arg2 playerViewController:(id)arg3;
@property(nonatomic) __weak QYPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(readonly, nonatomic) int btnType; // @synthesize btnType=_btnType;
@property(nonatomic) __weak id <QYPlayMessageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)enterPaopaoCircle;
- (void)doFeedBackBtn:(id)arg1;
- (void)doButton:(id)arg1;
- (void)setBgImage:(id)arg1;
- (id)getLabelText;
- (void)setBtnHidden:(_Bool)arg1;
- (void)setBtnAttributedTitle:(id)arg1;
- (void)setBtnTitle:(id)arg1;
- (void)setPaopaoCircleName:(id)arg1;
- (void)setText:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)loadFrame;
- (void)loadUI:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 type:(int)arg2 playerViewController:(id)arg3;

@end

