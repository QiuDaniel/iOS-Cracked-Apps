//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FXLiveRoomSongListBLL : NSObject
{
}

+ (id)reportDiversion:(long long)arg1 roomId:(long long)arg2 songListId:(long long)arg3 success:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;
+ (id)getLiveRoomSongSupportListInfo:(long long)arg1 page:(long long)arg2 pagesize:(long long)arg3 success:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;
+ (id)getCountdown:(long long)arg1 success:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
+ (id)getSongList:(long long)arg1 success:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;

@end

