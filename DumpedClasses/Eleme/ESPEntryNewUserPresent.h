//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class ESPEntryDeliveryInfo, NSArray;

@interface ESPEntryNewUserPresent : NVMModel
{
    NSArray *_redEnvelopes;
    ESPEntryDeliveryInfo *_deliverInfo;
}

+ (id)redEnvelopesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) ESPEntryDeliveryInfo *deliverInfo; // @synthesize deliverInfo=_deliverInfo;
@property(copy, nonatomic) NSArray *redEnvelopes; // @synthesize redEnvelopes=_redEnvelopes;
- (void).cxx_destruct;

@end

