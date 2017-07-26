//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTLoginTableViewWidget.h"

#import "UITextFieldDelegate.h"

@class CTCustomeGroupTableViewCell, CTWxBindingWidgetButtomView, NSString, UITextField;

@interface CTWxBindingWidget : CTLoginTableViewWidget <UITextFieldDelegate>
{
    _Bool _isMyCtripLogin;
    int _iType;
    id <CTWxBindingWidgetdelegate> _delegate;
    CTCustomeGroupTableViewCell *_nameCell;
    CTCustomeGroupTableViewCell *_passwordCell;
    CTWxBindingWidgetButtomView *_buttomView;
    UITextField *_nameTF;
    UITextField *_passwordTF;
    NSString *_WxopenId;
}

@property(nonatomic) _Bool isMyCtripLogin; // @synthesize isMyCtripLogin=_isMyCtripLogin;
@property(retain, nonatomic) NSString *WxopenId; // @synthesize WxopenId=_WxopenId;
@property(retain, nonatomic) UITextField *passwordTF; // @synthesize passwordTF=_passwordTF;
@property(retain, nonatomic) UITextField *nameTF; // @synthesize nameTF=_nameTF;
@property(retain, nonatomic) CTWxBindingWidgetButtomView *buttomView; // @synthesize buttomView=_buttomView;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *passwordCell; // @synthesize passwordCell=_passwordCell;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *nameCell; // @synthesize nameCell=_nameCell;
@property(nonatomic) __weak id <CTWxBindingWidgetdelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int iType; // @synthesize iType=_iType;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textChanged:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)doBinding;
- (_Bool)validateInfo;
- (id)drawPasswordCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)drawUserIdCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)resignAllTextFieldResponder;
- (void)widgetWillDisappear;
- (void)widgetWillAppear;
- (void)handleTitleBarRightButton:(id)arg1;
- (void)handleTitleBarLeftButton:(id)arg1;
- (void)widgetDidAppear;
- (void)widgetDidInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
