//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WKGameManager : NSObject
{
    long long _start;
    long long _pageSize;
    NSMutableArray *_gameList;
}

+ (_Bool)isGameOpen;
+ (_Bool)addToHistory:(id)arg1;
+ (_Bool)addToFavorite:(id)arg1;
+ (void)saveGameToCache:(id)arg1 widthKey:(id)arg2;
+ (id)loadGameListFromCacheWidthCacheKey:(id)arg1;
+ (_Bool)isGameFavorited:(id)arg1;
+ (id)loadAllCacheGame;
+ (id)convertCacheToObj:(id)arg1;
+ (void)requestGameList:(long long)arg1 type:(long long)arg2 pageSize:(long long)arg3 complete:(CDUnknownBlockType)arg4;
+ (void)requestGameDataWithHandle:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSMutableArray *gameList; // @synthesize gameList=_gameList;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long start; // @synthesize start=_start;
- (void).cxx_destruct;
- (void)requestGameHistoryListWithComplete:(CDUnknownBlockType)arg1;
- (void)requestGameFavoriteListWithComplete:(CDUnknownBlockType)arg1;
- (void)requestGameList:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (id)init;

@end

