//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTimer, WKBackgroundTask;
@protocol WKNetworkConnectCheckerDelegate;

@interface WKNetworkConnectChecker : NSObject
{
    _Bool _hasAddNetworkObserver;
    id <WKNetworkConnectCheckerDelegate> _delegate;
    NSString *_currentWiFiName;
    WKBackgroundTask *_backgroundTask;
    NSTimer *_mTimer;
}

@property(retain, nonatomic) NSTimer *mTimer; // @synthesize mTimer=_mTimer;
@property(retain, nonatomic) WKBackgroundTask *backgroundTask; // @synthesize backgroundTask=_backgroundTask;
@property(nonatomic) _Bool hasAddNetworkObserver; // @synthesize hasAddNetworkObserver=_hasAddNetworkObserver;
@property(retain, nonatomic) NSString *currentWiFiName; // @synthesize currentWiFiName=_currentWiFiName;
@property(nonatomic) __weak id <WKNetworkConnectCheckerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)isNetCanTransforData:(id)arg1;
- (void)networkBeginConnect:(id)arg1 bssid:(id)arg2;
- (void)handleNetworkChanged;
- (void)reportShowAlertViewAction;
- (void)checkIsNewConnectEvent:(id)arg1;
- (void)signalNetChanged;
- (void)stopMonitorWiFiChange;
- (void)startMonitorWiFiChange:(_Bool)arg1;
- (void)dealloc;

@end

