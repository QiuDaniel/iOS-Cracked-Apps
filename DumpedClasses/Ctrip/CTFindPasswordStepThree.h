//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTLoginTableViewWidget.h"

#import "UITextFieldDelegate.h"

@class CTCustomeGroupTableViewCell, CTLoginAlertView, CTVectorButton, NSString, UIButton, UITextField, UIView;

@interface CTFindPasswordStepThree : CTLoginTableViewWidget <UITextFieldDelegate>
{
    CTLoginAlertView *_alert;
    CTCustomeGroupTableViewCell *_passwordNewCell;
    UITextField *_passwordNewTextField;
    UIView *_footerView;
    UIButton *_resetButton;
    CTVectorButton *_unmaskButton;
    NSString *_loginName;
    NSString *_authToken;
}

@property(retain, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(retain, nonatomic) NSString *loginName; // @synthesize loginName=_loginName;
@property(retain, nonatomic) CTVectorButton *unmaskButton; // @synthesize unmaskButton=_unmaskButton;
@property(retain, nonatomic) UIButton *resetButton; // @synthesize resetButton=_resetButton;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITextField *passwordNewTextField; // @synthesize passwordNewTextField=_passwordNewTextField;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *passwordNewCell; // @synthesize passwordNewCell=_passwordNewCell;
- (void).cxx_destruct;
- (void)handleTitleBarLeftButton:(id)arg1;
- (void)dissmissNavigationController;
- (void)dismiss;
- (void)autoLogin;
- (void)showPassword:(id)arg1;
- (void)setTextFieldHightlighted:(id)arg1;
- (void)setTextFieldNormal:(id)arg1;
- (void)gotoLoginView;
- (void)doReset;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)widgetWillDisappear;
- (void)widgetWillAppear;
- (void)widgetDidInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
