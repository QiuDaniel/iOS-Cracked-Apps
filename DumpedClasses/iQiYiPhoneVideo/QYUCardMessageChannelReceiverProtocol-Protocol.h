//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, QYUCardMessage, QYUCardMessageChannel;

@protocol QYUCardMessageChannelReceiverProtocol <NSObject>
- (void)receiveMessage:(QYUCardMessage *)arg1 fromSender:(NSObject *)arg2 byChannel:(QYUCardMessageChannel *)arg3 withProgressBlock:(void (^)(double, NSDictionary *))arg4 andCompletionBlock:(void (^)(NSDictionary *))arg5;
@end

