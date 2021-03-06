//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseViewController.h"

@class NSArray, NSMutableArray, UIButton, UIScrollView, UIView;

@interface GWButtonMenuViewController : GWBaseViewController
{
    _Bool _visible;
    NSArray *_buttonTitles;
    CDUnknownBlockType _MenuButtonClick;
    CDUnknownBlockType _CancelBtnSuccess;
    UIView *_modelView;
    UIScrollView *_buttonView;
    UIButton *_hideButton;
    NSMutableArray *_buttons;
    double _minimumButtonHeight;
}

@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) double minimumButtonHeight; // @synthesize minimumButtonHeight=_minimumButtonHeight;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UIButton *hideButton; // @synthesize hideButton=_hideButton;
@property(retain, nonatomic) UIScrollView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) UIView *modelView; // @synthesize modelView=_modelView;
@property(copy, nonatomic) CDUnknownBlockType CancelBtnSuccess; // @synthesize CancelBtnSuccess=_CancelBtnSuccess;
@property(copy, nonatomic) CDUnknownBlockType MenuButtonClick; // @synthesize MenuButtonClick=_MenuButtonClick;
@property(retain, nonatomic) NSArray *buttonTitles; // @synthesize buttonTitles=_buttonTitles;
- (void).cxx_destruct;
- (void)setMenubuttonTitleColor:(id)arg1 index:(long long)arg2;
- (void)hide;
- (void)showInView:(id)arg1;
- (void)cancelButtonClick:(id)arg1;
- (void)menuButtonClick:(id)arg1;
- (double)verticalSpacingBetweenButtons;
- (double)buttonWidth;
- (double)buttonHeight;
- (id)buttonWithTitle:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)renderButtons;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithButtonTitles:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

@end

