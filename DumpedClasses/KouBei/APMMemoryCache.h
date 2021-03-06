//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MemoryCache, NSString, NSTimer;

@interface APMMemoryCache : NSObject
{
    MemoryCache *_cache;
    _Bool _shouldRemoveAllObjectsOnMemoryWarning;
    _Bool _shouldRemoveAllObjectsWhenEnteringBackground;
    _Bool _releaseAsynchronously;
    NSString *_name;
    unsigned long long _countLimit;
    long long _costLimit;
    long long _singleCostLimit;
    double _ageLimit;
    double _autoTrimInterval;
    CDUnknownBlockType _didReceiveMemoryWarningBlock;
    CDUnknownBlockType _didEnterBackgroundBlock;
    NSTimer *_trimTimer;
}

@property(retain, nonatomic) NSTimer *trimTimer; // @synthesize trimTimer=_trimTimer;
@property(nonatomic) _Bool releaseAsynchronously; // @synthesize releaseAsynchronously=_releaseAsynchronously;
@property(copy, nonatomic) CDUnknownBlockType didEnterBackgroundBlock; // @synthesize didEnterBackgroundBlock=_didEnterBackgroundBlock;
@property(copy, nonatomic) CDUnknownBlockType didReceiveMemoryWarningBlock; // @synthesize didReceiveMemoryWarningBlock=_didReceiveMemoryWarningBlock;
@property(nonatomic) _Bool shouldRemoveAllObjectsWhenEnteringBackground; // @synthesize shouldRemoveAllObjectsWhenEnteringBackground=_shouldRemoveAllObjectsWhenEnteringBackground;
@property(nonatomic) _Bool shouldRemoveAllObjectsOnMemoryWarning; // @synthesize shouldRemoveAllObjectsOnMemoryWarning=_shouldRemoveAllObjectsOnMemoryWarning;
@property(nonatomic) double autoTrimInterval; // @synthesize autoTrimInterval=_autoTrimInterval;
@property(nonatomic) double ageLimit; // @synthesize ageLimit=_ageLimit;
@property(nonatomic) long long singleCostLimit; // @synthesize singleCostLimit=_singleCostLimit;
@property(nonatomic) long long costLimit; // @synthesize costLimit=_costLimit;
@property(nonatomic) unsigned long long countLimit; // @synthesize countLimit=_countLimit;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (void)trimToAge:(double)arg1;
- (void)trimToCost:(long long)arg1;
- (void)trimToCount:(unsigned long long)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 withCost:(long long)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (_Bool)containsObjectForKey:(id)arg1;
@property(readonly, nonatomic) long long totalCost;
@property(readonly, nonatomic) unsigned long long totalCount;
- (void)dealloc;
- (id)init;
- (void)_appDidEnterBackgroundNotification;
- (void)_appDidReceiveMemoryWarningNotification;
- (void)_trimInBackground;
- (void)_trimRecursively;

@end

