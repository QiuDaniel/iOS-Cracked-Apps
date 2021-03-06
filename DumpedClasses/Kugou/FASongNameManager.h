//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSTimer;

@interface FASongNameManager : NSObject
{
    _Bool _isNeedMgr;
    _Bool _isIgnore;
    CDUnknownBlockType _FinishSongNameHandler;
    NSMutableArray *_roomIds;
    NSMutableDictionary *_songs;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableDictionary *songs; // @synthesize songs=_songs;
@property(retain, nonatomic) NSMutableArray *roomIds; // @synthesize roomIds=_roomIds;
@property(nonatomic) _Bool isIgnore; // @synthesize isIgnore=_isIgnore;
@property(nonatomic) _Bool isNeedMgr; // @synthesize isNeedMgr=_isNeedMgr;
@property(copy, nonatomic) CDUnknownBlockType FinishSongNameHandler; // @synthesize FinishSongNameHandler=_FinishSongNameHandler;
- (void).cxx_destruct;
- (id)getSongWithRoomId:(long long)arg1;
- (void)updateSongs:(id)arg1;
- (void)timeLoadSongsWithRoomIds;
- (void)timeLoadSongs;
- (void)addRoomId:(long long)arg1;
- (id)checkSongWihtRoomId:(long long)arg1 addQueue:(_Bool)arg2;
- (void)stopUpdate;
- (void)clearManager;
- (void)startUpdate;
- (id)init;

@end

