//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBIMLoginServiceBase.h"

#import "TBAMPServiceDelegate.h"

@class NSString, NSTimer;

@interface TBIMLoginServiceAMP : TBIMLoginServiceBase <TBAMPServiceDelegate>
{
    _Bool _isLogin;
    NSTimer *_timeoutTimer;
}

@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic) _Bool isLogin; // @synthesize isLogin=_isLogin;
- (void).cxx_destruct;
- (void)ampServiceDidInitBase:(id)arg1;
- (void)bizLoginTimeout:(id)arg1;
- (id)getName;
- (void)login;
- (_Bool)isLogined;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

