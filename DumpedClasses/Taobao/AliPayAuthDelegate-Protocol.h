//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol AliPayAuthDelegate <NSObject>
- (void)monitorAliPayAuth:(NSString *)arg1 args:(NSDictionary *)arg2;
- (void)aliPayAuthFailure:(unsigned long long)arg1 message:(NSString *)arg2;
- (void)aliPayAuthDidCancel;
- (void)aliPayAuthSuccess:(NSString *)arg1;
@end
