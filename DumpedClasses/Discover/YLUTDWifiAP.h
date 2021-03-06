//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YLUTDBaseModel.h"

@class NSString;

@interface YLUTDWifiAP : YLUTDBaseModel
{
    _Bool _hidden;
    int _freq;
    int _level;
    NSString *_name;
    NSString *_bid;
    NSString *_mac;
    NSString *_capabilities;
    long long _ts;
}

@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) long long ts; // @synthesize ts=_ts;
@property(retain, nonatomic) NSString *capabilities; // @synthesize capabilities=_capabilities;
@property(nonatomic) int level; // @synthesize level=_level;
@property(nonatomic) int freq; // @synthesize freq=_freq;
@property(retain, nonatomic) NSString *mac; // @synthesize mac=_mac;
@property(retain, nonatomic) NSString *bid; // @synthesize bid=_bid;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)archiveToDictionary;

@end

