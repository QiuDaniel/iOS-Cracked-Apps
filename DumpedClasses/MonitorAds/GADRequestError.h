//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface GADRequestError : NSError
{
}

+ (id)errorWithCode:(int)arg1 underlyingError:(id)arg2;
+ (id)errorWithCode:(int)arg1 customMessage:(id)arg2;
+ (id)errorWithCode:(int)arg1;
+ (id)errorWithCode:(int)arg1 request:(id)arg2;
+ (id)errorWithCode:(int)arg1 request:(id)arg2 HTTPStatusCode:(int)arg3;
+ (id)errorWithCode:(int)arg1 request:(id)arg2 HTTPStatusCode:(int)arg3 customMessage:(id)arg4;
+ (id)errorWithCode:(int)arg1 request:(id)arg2 HTTPStatusCode:(int)arg3 customMessage:(id)arg4 underlyingError:(id)arg5;
- (id)error;
- (id)initWithDomain:(id)arg1 code:(int)arg2 userInfo:(id)arg3;
- (id)initWithCode:(int)arg1 request:(id)arg2 HTTPStatusCode:(int)arg3 customMessage:(id)arg4 underlyingError:(id)arg5;

@end

