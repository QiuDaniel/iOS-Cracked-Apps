//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GXDatagram.h"

@class NSData, NSString;

@interface GXMessage_Object : GXDatagram
{
    short msgId_;
    unsigned char attribute_;
    unsigned long long timestamp_;
    NSString *address_;
    NSData *data_;
    NSData *extra_;
}

+ (id)serializeRequestWithMessageId:(short)arg1 clientData:(id)arg2 extraData:(id)arg3 cid:(id)arg4;
+ (unsigned char)commandId;
+ (id)variableLength:(long long)arg1;
+ (long long)readVariableLength:(id)arg1;
+ (id)serializeRequestWithMessageId:(short)arg1 commandId:(char *)arg2 timestamp:(id)arg3 address:(id)arg4 data:(id)arg5 extra:(id)arg6 cid:(id)arg7;
@property(nonatomic) unsigned char attribute; // @synthesize attribute=attribute_;
@property(retain, nonatomic) NSData *extra; // @synthesize extra=extra_;
@property(retain, nonatomic) NSData *data; // @synthesize data=data_;
@property(retain, nonatomic) NSString *address; // @synthesize address=address_;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=timestamp_;
@property(nonatomic) short msgId; // @synthesize msgId=msgId_;
- (void).cxx_destruct;
- (void)dealloc;
- (id)toData;
- (void)initDatagramInfo:(id)arg1;
- (id)initWithBytes:(id)arg1;

@end
