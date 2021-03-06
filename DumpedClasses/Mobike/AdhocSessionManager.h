//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, NSURLSession, NSURLSessionConfiguration;

@interface AdhocSessionManager : NSObject
{
    NSURLSession *_session;
    NSOperationQueue *_operationQueue;
    NSURLSessionConfiguration *_sessionConfiguration;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)validateResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (id)requestWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 error:(id *)arg4;
- (id)dataTaskWithHTTPMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)dataTaskWithRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)initWithSessionConfiguration:(id)arg1;
- (id)init;

@end

