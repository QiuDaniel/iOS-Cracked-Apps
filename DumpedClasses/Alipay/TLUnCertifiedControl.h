//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AUNoticeDialog;

@interface TLUnCertifiedControl : NSObject
{
    AUNoticeDialog *_alertView;
}

@property(nonatomic) __weak AUNoticeDialog *alertView; // @synthesize alertView=_alertView;
- (void).cxx_destruct;
- (void)showAlertWithTitle:(id)arg1 actionTitle:(id)arg2;
- (void)showAlert;
- (void)dealloc;

@end

