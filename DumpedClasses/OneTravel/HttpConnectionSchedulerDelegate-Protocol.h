//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DIDIVRHTTPRequestScheduler, NSData, NSError;

@protocol HttpConnectionSchedulerDelegate <NSObject>

@optional
- (void)negativePkgWillSend:(long long)arg1;
- (void)flushData:(NSData *)arg1;
- (void)connectionOverTime:(DIDIVRHTTPRequestScheduler *)arg1;
- (void)connectionFail:(DIDIVRHTTPRequestScheduler *)arg1 withMessage:(NSError *)arg2;
- (void)connectionFinish:(DIDIVRHTTPRequestScheduler *)arg1 withData:(NSData *)arg2;
@end
