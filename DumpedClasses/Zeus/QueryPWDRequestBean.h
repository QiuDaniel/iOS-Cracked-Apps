//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface QueryPWDRequestBean : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *bssid; // @dynamic bssid;
@property(copy, nonatomic) NSString *cid; // @dynamic cid;
@property(copy, nonatomic) NSString *iosMcSrc; // @dynamic iosMcSrc;
@property(copy, nonatomic) NSString *lac; // @dynamic lac;
@property(copy, nonatomic) NSString *mcc; // @dynamic mcc;
@property(copy, nonatomic) NSString *mnc; // @dynamic mnc;
@property(retain, nonatomic) NSMutableArray *nbapsArray; // @dynamic nbapsArray;
@property(readonly, nonatomic) unsigned long long nbapsArray_Count; // @dynamic nbapsArray_Count;
@property(copy, nonatomic) NSString *qid; // @dynamic qid;
@property(copy, nonatomic) NSString *src; // @dynamic src;
@property(copy, nonatomic) NSString *ssid; // @dynamic ssid;

@end

