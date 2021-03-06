//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class FBGroupsCollegeCommunitiesValidationViewConfig, FBMemGroup, FBNetworkImageView, FBUserSession, NSString, UIButton, UILabel, UITextField;

@interface FBGroupsCollegeCommunitiesValidationGenericView : UIView <UITextFieldDelegate>
{
    FBNetworkImageView *_schoolIllustration;
    UILabel *_submitTitle;
    UILabel *_submitDescription;
    UIView *_sectionDividerView;
    UIButton *_clearButton;
    FBUserSession *_session;
    FBMemGroup *_group;
    double _keyboardOverlap;
    FBGroupsCollegeCommunitiesValidationViewConfig *_config;
    UITextField *_textField;
}

@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange;
- (void)_layoutSubviewsWithKeyboardOverlap:(double)arg1;
- (void)_deleteAllText;
- (void)_setupViews;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
- (void)focusTextField;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithGroup:(id)arg1 config:(id)arg2 session:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

