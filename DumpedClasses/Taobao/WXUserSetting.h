//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString, WXUserNoPushSetting;

@interface WXUserSetting : NSObject
{
    NSNumber *_keepOnline;
    NSString *_nick;
    NSNumber *_nonPushAtNight;
    NSNumber *_pushWhenPcOnline;
    NSNumber *_receiveWhenPcOnline;
    NSNumber *_runInBackground;
    NSArray *_tribeReceiveFlags;
    NSNumber *_logisticsFrequency;
    WXUserNoPushSetting *_msgRemindNoDisturb;
    NSArray *_pluginsSetting;
}

@property(retain, nonatomic) NSArray *pluginsSetting; // @synthesize pluginsSetting=_pluginsSetting;
@property(retain, nonatomic) WXUserNoPushSetting *msgRemindNoDisturb; // @synthesize msgRemindNoDisturb=_msgRemindNoDisturb;
@property(retain, nonatomic) NSNumber *logisticsFrequency; // @synthesize logisticsFrequency=_logisticsFrequency;
@property(retain, nonatomic) NSArray *tribeReceiveFlags; // @synthesize tribeReceiveFlags=_tribeReceiveFlags;
@property(retain, nonatomic) NSNumber *runInBackground; // @synthesize runInBackground=_runInBackground;
@property(retain, nonatomic) NSNumber *receiveWhenPcOnline; // @synthesize receiveWhenPcOnline=_receiveWhenPcOnline;
@property(retain, nonatomic) NSNumber *pushWhenPcOnline; // @synthesize pushWhenPcOnline=_pushWhenPcOnline;
@property(retain, nonatomic) NSNumber *nonPushAtNight; // @synthesize nonPushAtNight=_nonPushAtNight;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSNumber *keepOnline; // @synthesize keepOnline=_keepOnline;
- (void).cxx_destruct;

@end
