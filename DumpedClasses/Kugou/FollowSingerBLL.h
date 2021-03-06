//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FollowSingerBLL : NSObject
{
}

- (void)deleteLocalSingerWithSingerID:(long long)arg1;
- (void)saveNetFollowSingerListToLocalWithPlistDao:(id)arg1 ListDic:(id)arg2 sortType:(unsigned long long)arg3 callBack:(CDUnknownBlockType)arg4;
- (id)followSingerEntityWithSingerList:(id)arg1 andSortType:(unsigned long long)arg2;
- (void)postNotificationSingerOperation:(id)arg1 singerID:(long long)arg2 success:(_Bool)arg3;
- (void)syncLocalFollowSingerListWithSortType:(unsigned long long)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)syncFollowSingerListWithSortType:(unsigned long long)arg1 SuccessBlock:(CDUnknownBlockType)arg2 FailedBlock:(CDUnknownBlockType)arg3;
- (void)getFollowSingerListWithLoadLocalFirst:(_Bool)arg1 SortType:(unsigned long long)arg2 SuccessBlock:(CDUnknownBlockType)arg3 FailedBlock:(CDUnknownBlockType)arg4;
- (void)getSingersFansNumberWithSingerID:(long long)arg1 SuccessBlock:(CDUnknownBlockType)arg2 FailedBlock:(CDUnknownBlockType)arg3;
- (void)unfollowSingerWithSingerID:(long long)arg1 SuccessBlock:(CDUnknownBlockType)arg2 FailedBlock:(CDUnknownBlockType)arg3;
- (void)followSingerWithSingerID:(long long)arg1 SuccessBlock:(CDUnknownBlockType)arg2 FailedBlock:(CDUnknownBlockType)arg3;
- (void)checkFollowSingerWithSingerID:(long long)arg1 SuccessBlock:(CDUnknownBlockType)arg2 FailedBlock:(CDUnknownBlockType)arg3;

@end

