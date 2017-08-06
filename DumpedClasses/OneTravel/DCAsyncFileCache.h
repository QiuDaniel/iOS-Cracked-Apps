//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface DCAsyncFileCache : NSObject
{
    NSObject<OS_dispatch_queue> *operationQueue;
}

- (void).cxx_destruct;
- (void)setObject:(id)arg1 forPath:(id)arg2 callback:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4;
- (void)setObject:(id)arg1 forPath:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)setData:(id)arg1 forPath:(id)arg2 callback:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4;
- (void)setData:(id)arg1 forPath:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)objectForPath:(id)arg1 callback:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;
- (void)objectForPath:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)dataForPath:(id)arg1 error:(id *)arg2;
- (_Bool)hasCacheForPath:(id)arg1;
- (void)dataForPath:(id)arg1 callback:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;
- (void)dataForPath:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end
