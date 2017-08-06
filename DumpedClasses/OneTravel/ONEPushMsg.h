//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, PushMsg;

@interface ONEPushMsg : NSObject
{
    int _msgType;
    int _product;
    int _binaryType;
    unsigned long long _seqID;
    NSData *_data;
    NSArray *_messages;
    PushMsg *_pushMsg;
}

@property int binaryType; // @synthesize binaryType=_binaryType;
@property int product; // @synthesize product=_product;
@property(retain, nonatomic) PushMsg *pushMsg; // @synthesize pushMsg=_pushMsg;
@property(retain, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) int msgType; // @synthesize msgType=_msgType;
@property(nonatomic) unsigned long long seqID; // @synthesize seqID=_seqID;
- (void).cxx_destruct;
- (void)parseMsgModel;
- (id)initWithSeqID:(unsigned long long)arg1 msgType:(int)arg2 data:(id)arg3;

@end
