//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSOperationQueue, NSString, YYImageCache;

@interface YYWebImageManager : NSObject
{
    YYImageCache *_cache;
    NSOperationQueue *_queue;
    CDUnknownBlockType _sharedTransformBlock;
    double _timeout;
    NSString *_username;
    NSString *_password;
    NSDictionary *_headers;
    CDUnknownBlockType _headersFilter;
    CDUnknownBlockType _cacheKeyFilter;
}

+ (long long)currentNetworkActivityCount;
+ (void)decrementNetworkActivityCount;
+ (void)incrementNetworkActivityCount;
+ (void)_changeNetworkActivityCount:(long long)arg1;
+ (void)_delaySetActivity:(id)arg1;
+ (void)_setNetworkIndicatorInfo:(id)arg1;
+ (id)_networkIndicatorInfo;
+ (id)sharedManager;
@property(copy, nonatomic) CDUnknownBlockType cacheKeyFilter; // @synthesize cacheKeyFilter=_cacheKeyFilter;
@property(copy, nonatomic) CDUnknownBlockType headersFilter; // @synthesize headersFilter=_headersFilter;
@property(copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) CDUnknownBlockType sharedTransformBlock; // @synthesize sharedTransformBlock=_sharedTransformBlock;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) YYImageCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)cacheKeyForURL:(id)arg1;
- (id)headersForURL:(id)arg1;
- (id)requestImageWithURL:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 transform:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithCache:(id)arg1 queue:(id)arg2;
- (id)init;

@end
