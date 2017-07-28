//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TDATNetWorkManagerDelegate.h"

@class NSArray, NSMutableDictionary, NSString, TDATDCLConfig, TDATDataBaseManager, TDATUtilManager;

@interface TDATSDKManager : NSObject <TDATNetWorkManagerDelegate>
{
    _Bool _isBackground;
    long long _lastSendTime;
    NSArray *_pinnedCertificates;
    TDATDCLConfig *_DCLConfig;
    _Bool _openBackgroundTask;
    _Bool _isWatchSDK;
    _Bool _isJSONData;
    _Bool _showLog;
    int _version;
    int _minorVersion;
    TDATDataBaseManager *_database;
    NSString *_url;
    NSString *_certificates;
    NSString *_channelID;
    NSString *_service;
    NSMutableDictionary *_appContext;
    id _delegate;
    long long _compressType;
    unsigned long long _minSendLimitInterval;
    unsigned long long _bgTask;
    TDATUtilManager *_managerUtil;
    NSString *_type;
    NSString *_appID;
}

+ (id)sdkManagerWithAppID:(id)arg1 forType:(id)arg2;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) TDATUtilManager *managerUtil; // @synthesize managerUtil=_managerUtil;
@property(nonatomic) unsigned long long bgTask; // @synthesize bgTask=_bgTask;
@property(nonatomic) unsigned long long minSendLimitInterval; // @synthesize minSendLimitInterval=_minSendLimitInterval;
@property(nonatomic) _Bool showLog; // @synthesize showLog=_showLog;
@property(nonatomic) long long compressType; // @synthesize compressType=_compressType;
@property(nonatomic) _Bool isJSONData; // @synthesize isJSONData=_isJSONData;
@property(nonatomic) _Bool isWatchSDK; // @synthesize isWatchSDK=_isWatchSDK;
@property(nonatomic) _Bool openBackgroundTask; // @synthesize openBackgroundTask=_openBackgroundTask;
@property(nonatomic) int minorVersion; // @synthesize minorVersion=_minorVersion;
@property(nonatomic) int version; // @synthesize version=_version;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *appContext; // @synthesize appContext=_appContext;
@property(retain, nonatomic) NSString *service; // @synthesize service=_service;
@property(retain, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(retain, nonatomic) NSString *certificates; // @synthesize certificates=_certificates;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) TDATDataBaseManager *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (void)endBackgroundTask;
- (void)startBackgroundTask;
- (void)responseFaildData:(id)arg1 code:(long long)arg2 flag:(long long)arg3;
- (void)responseSuccessData:(id)arg1 code:(long long)arg2 flag:(long long)arg3;
- (id)pinnedCertificates:(id)arg1;
- (id)getCRCURLWithBody:(id)arg1;
- (void)sendMessageRightNow;
- (void)sendData;
- (void)pollingFormKVO:(id)arg1;
- (void)exceptionFormKVO;
- (void)enterBackground:(id)arg1;
- (void)enterForeground:(id)arg1;
- (void)dealloc;
- (void)addDataWorkObserver;
- (void)setPollingWithInterval:(unsigned long long)arg1;
- (void)storeOnOrigThreadDomain:(id)arg1 name:(id)arg2 data:(id)arg3;
- (void)sendMessageDomain:(id)arg1 name:(id)arg2 data:(id)arg3 path:(id)arg4 flag:(unsigned long long)arg5;
- (id)getConfig;
- (void)storeMessageDomain:(id)arg1 name:(id)arg2 data:(id)arg3;
- (_Bool)checURL;
- (_Bool)checType;
- (void)archive;
- (void)unArchive;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
