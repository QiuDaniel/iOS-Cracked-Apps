//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, QPFloatingWindowModel, QYPPCircleMoreModel;

@interface QYPPCircleMoreDataManager : NSObject
{
    QYPPCircleMoreModel *_model;
    QPFloatingWindowModel *_floatingWindowModel;
    NSString *_key;
}

@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) QPFloatingWindowModel *floatingWindowModel; // @synthesize floatingWindowModel=_floatingWindowModel;
@property(retain, nonatomic) QYPPCircleMoreModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)getTabTitleArr;
- (id)getTilteByType:(long long)arg1;
- (id)getCachedDiskDataByKey:(id)arg1;
- (_Bool)existDiskCacheWithTypeId:(long long)arg1;
- (id)getCachedDataWithId:(long long)arg1;
- (id)getCachedDiskDataWithTypeId:(long long)arg1;
- (id)getCachedDiskTabTitles;
- (void)cacheTabTitles:(id)arg1;
- (void)cacheDiskData:(id)arg1 forKey:(id)arg2;
- (void)cacheDiskData:(id)arg1;
- (void)cacheData:(id)arg1;
- (void)clearCachedData;
- (id)keyWithId:(long long)arg1;
- (id)getCollectFlagCache;
- (void)configRank;
- (void)loadMoreDataWithTypeId:(long long)arg1 letterFilter:(unsigned short)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)refreshDataWithTypeId:(long long)arg1 lastId:(long long)arg2 hideType:(long long)arg3 letterFilter:(unsigned short)arg4 finishBlock:(CDUnknownBlockType)arg5;
- (void)refreshDataWithoutTabInfoTypeId:(long long)arg1 letterFilter:(unsigned short)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)refreshDataWithTabInfoTypeId:(long long)arg1 letterFilter:(unsigned short)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

