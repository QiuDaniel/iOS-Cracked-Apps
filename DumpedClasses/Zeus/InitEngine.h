//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface InitEngine : NSObject
{
}

+ (_Bool)forceEvaluateServerTrust:(id)arg1;
+ (void)evaluateList:(id)arg1;
+ (id)ipAddress:(id)arg1;
+ (void)hostMapping:(id)arg1;
+ (id)getPublicParams;
+ (id)getCommonDataPath;
+ (void)asyncGetDHIDFromServer:(CDUnknownBlockType)arg1;
+ (void)ensureDHID:(CDUnknownBlockType)arg1;
+ (void)forceRenewDHID:(CDUnknownBlockType)arg1;
+ (void)setLanguage:(id)arg1;
+ (id)getCurrentContext;
+ (void)setSecurityAESKey:(id)arg1 AESIV:(id)arg2 MD5Key:(id)arg3;
+ (void)initParams:(id)arg1 channelId:(id)arg2 dhidUrl:(id)arg3 keyChainName:(id)arg4 suiteName:(id)arg5;

@end

