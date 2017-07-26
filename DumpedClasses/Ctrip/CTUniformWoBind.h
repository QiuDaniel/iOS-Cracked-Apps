//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTLoginTableViewWidget.h"

#import "CTWxBindingShowWidgetdelegate.h"
#import "UITextFieldDelegate.h"

@class CTCustomeGroupTableViewCell, CTUniformWoBindStepOne, CTUniformWoBindStepTwoLoginBindBottomView, CTUniformWoBindStepTwoRegistBindBottomView, NSString, NSTimer, UIButton, UILabel, UITextField, UIView;

@interface CTUniformWoBind : CTLoginTableViewWidget <UITextFieldDelegate, CTWxBindingShowWidgetdelegate>
{
    NSTimer *timer;
    int secendsCountDown;
    _Bool _isMyCtripLogin;
    _Bool _isMaxSendTimes;
    id <CTWxBindingShowWidgetdelegate> _delegate;
    unsigned long long _bindStepType;
    NSString *_authCode;
    CTUniformWoBindStepOne *_woBindStepOne;
    CTUniformWoBindStepTwoLoginBindBottomView *_woBindStepTwoLoginBindView;
    CTUniformWoBindStepTwoRegistBindBottomView *_woBindStepTwoRegistBindView;
    CTCustomeGroupTableViewCell *_phoneNumberCell;
    UITextField *_phoneNumberTF;
    UIButton *_getAuthCodeButton;
    CTCustomeGroupTableViewCell *_passwordCell;
    UITextField *_passwordTF;
    CTCustomeGroupTableViewCell *_userNameCell;
    UITextField *_userNameTF;
    CTCustomeGroupTableViewCell *_authCodeCell;
    UITextField *_authTF;
    UIView *_moreDetailView;
    UILabel *_moreViewLabelThree;
    UIButton *_closeButton;
    NSString *_bindPhoneNum;
    NSString *_openID;
    NSString *_phoneNumberString;
    NSString *_authString;
    NSString *_passwordString;
    NSString *_userNameString;
}

@property(copy, nonatomic) NSString *userNameString; // @synthesize userNameString=_userNameString;
@property(copy, nonatomic) NSString *passwordString; // @synthesize passwordString=_passwordString;
@property(copy, nonatomic) NSString *authString; // @synthesize authString=_authString;
@property(copy, nonatomic) NSString *phoneNumberString; // @synthesize phoneNumberString=_phoneNumberString;
@property(nonatomic) _Bool isMaxSendTimes; // @synthesize isMaxSendTimes=_isMaxSendTimes;
@property(retain, nonatomic) NSString *openID; // @synthesize openID=_openID;
@property(retain, nonatomic) NSString *bindPhoneNum; // @synthesize bindPhoneNum=_bindPhoneNum;
@property(nonatomic) _Bool isMyCtripLogin; // @synthesize isMyCtripLogin=_isMyCtripLogin;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *moreViewLabelThree; // @synthesize moreViewLabelThree=_moreViewLabelThree;
@property(retain, nonatomic) UIView *moreDetailView; // @synthesize moreDetailView=_moreDetailView;
@property(retain, nonatomic) UITextField *authTF; // @synthesize authTF=_authTF;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *authCodeCell; // @synthesize authCodeCell=_authCodeCell;
@property(retain, nonatomic) UITextField *userNameTF; // @synthesize userNameTF=_userNameTF;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *userNameCell; // @synthesize userNameCell=_userNameCell;
@property(retain, nonatomic) UITextField *passwordTF; // @synthesize passwordTF=_passwordTF;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *passwordCell; // @synthesize passwordCell=_passwordCell;
@property(retain, nonatomic) UIButton *getAuthCodeButton; // @synthesize getAuthCodeButton=_getAuthCodeButton;
@property(retain, nonatomic) UITextField *phoneNumberTF; // @synthesize phoneNumberTF=_phoneNumberTF;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *phoneNumberCell; // @synthesize phoneNumberCell=_phoneNumberCell;
@property(retain, nonatomic) CTUniformWoBindStepTwoRegistBindBottomView *woBindStepTwoRegistBindView; // @synthesize woBindStepTwoRegistBindView=_woBindStepTwoRegistBindView;
@property(retain, nonatomic) CTUniformWoBindStepTwoLoginBindBottomView *woBindStepTwoLoginBindView; // @synthesize woBindStepTwoLoginBindView=_woBindStepTwoLoginBindView;
@property(retain, nonatomic) CTUniformWoBindStepOne *woBindStepOne; // @synthesize woBindStepOne=_woBindStepOne;
@property(copy, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
@property(nonatomic) unsigned long long bindStepType; // @synthesize bindStepType=_bindStepType;
@property(nonatomic) __weak id <CTWxBindingShowWidgetdelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)bindExistedUserID:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)CTWxBindingShowWidgetgoback;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)resignAllTextFieldResponder;
- (void)textChanged:(id)arg1;
- (id)drawAuthCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)drawPhoneNumberCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)drawPasswordCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)drawUserIdCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)timerFireMethod:(id)arg1;
- (void)sendGetVerifyCode;
- (void)getAuthCode;
- (void)registerAndBindButtonClick;
- (void)forgetPasswordClick;
- (_Bool)validateInfo;
- (void)loginAndBindButtonClick;
- (void)goToBindingButtonClick;
- (void)goToRegisterButtonClick;
- (void)stepOneMoreDetail;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setTableFooter;
- (void)initAction;
- (void)initView;
- (void)widgetDidAppear;
- (void)widgetDidInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
