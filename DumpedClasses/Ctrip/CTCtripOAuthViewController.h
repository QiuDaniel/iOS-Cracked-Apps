//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

@class CTCtripOAuthView, NSString;

@interface CTCtripOAuthViewController : CTRootViewController
{
    NSString *_appId;
    NSString *_scheme;
    CTCtripOAuthView *_mainOAuthView;
}

- (void).cxx_destruct;
- (void)returnToOriginAPPWithOAuthCode:(id)arg1 result:(unsigned long long)arg2;
- (void)changeWindow;
- (void)leftItemClicked;
- (void)getOAuthCodeFromRemote;
- (void)initEventsHandle;
- (void)initView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithAppId:(id)arg1 scheme:(id)arg2;

@end

