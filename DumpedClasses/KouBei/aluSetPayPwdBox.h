//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSMutableArray, NSString, UITextField;
@protocol aluSetPayPwdBoxDelegate;

@interface aluSetPayPwdBox : UIView <UITextFieldDelegate>
{
    UITextField *_inputTextField;
    NSMutableArray *_textFields;
    id <aluSetPayPwdBoxDelegate> _delegate;
}

+ (double)boxHeight;
+ (double)boxWidth;
@property(nonatomic) __weak id <aluSetPayPwdBoxDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *textFields; // @synthesize textFields=_textFields;
@property(retain, nonatomic) UITextField *inputTextField; // @synthesize inputTextField=_inputTextField;
- (void).cxx_destruct;
- (void)singleTapInInputTextField:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (void)clearPayPwd;
- (id)getPayPwd;
- (void)textFieldDidEnd:(id)arg1;
- (void)textFieldDidBegin:(id)arg1;
- (_Bool)resignFirstResponder;
- (void)resetFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1 andDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

