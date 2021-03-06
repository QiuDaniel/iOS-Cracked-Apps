//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface GulfstreamPassengerDriverLocReq : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int debugOpen; // @dynamic debugOpen;
@property(nonatomic) int eta; // @dynamic eta;
@property(nonatomic) int etaDistance; // @dynamic etaDistance;
@property(copy, nonatomic) NSString *etaStr; // @dynamic etaStr;
@property(retain, nonatomic) NSMutableArray *gridInfosArray; // @dynamic gridInfosArray;
@property(readonly, nonatomic) unsigned long long gridInfosArray_Count; // @dynamic gridInfosArray_Count;
@property(nonatomic) _Bool hasDebugOpen; // @dynamic hasDebugOpen;
@property(nonatomic) _Bool hasEta; // @dynamic hasEta;
@property(nonatomic) _Bool hasEtaDistance; // @dynamic hasEtaDistance;
@property(nonatomic) _Bool hasEtaStr; // @dynamic hasEtaStr;
@property(nonatomic) _Bool hasOrderStat; // @dynamic hasOrderStat;
@property(nonatomic) _Bool hasRedirect; // @dynamic hasRedirect;
@property(nonatomic) _Bool hasSdsVisualOpen; // @dynamic hasSdsVisualOpen;
@property(retain, nonatomic) NSMutableArray *locArray; // @dynamic locArray;
@property(readonly, nonatomic) unsigned long long locArray_Count; // @dynamic locArray_Count;
@property(nonatomic) int orderStat; // @dynamic orderStat;
@property(nonatomic) int redirect; // @dynamic redirect;
@property(nonatomic) int sdsVisualOpen; // @dynamic sdsVisualOpen;

@end

