//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Reachability;

@interface NMReachability : NSObject
{
    _Bool _isNetworkStatusDetermined;
    long long _cachedCurrentNetworkStatus;
    Reachability *_reachability;
}

+ (void)removeObserverDisconnetView:(id)arg1;
+ (void)addObserverForNetworkStatusChangedDisconnetView:(id)arg1 target:(SEL)arg2;
+ (void)removeObserver:(id)arg1;
+ (void)addObserverForNetworkStatusChanged:(id)arg1 target:(SEL)arg2;
+ (_Bool)uncachedIsWifi;
+ (_Bool)isWifi;
+ (_Bool)uncachedIsWWAN;
+ (_Bool)isWWAN;
+ (_Bool)uncachedIsOffline;
+ (_Bool)isOffline;
+ (long long)uncachedCurrentNetworkStatus;
+ (long long)currentNetworkStatus;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)reachabilityChanged:(id)arg1;
- (long long)uncachedCurrentNetworkStatus;
- (long long)cachedCurrentNetworkStatus;
- (void)updateReachabilityStatus;
- (void)dealloc;
- (id)init;

@end
