//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KGOldDBInitTask : NSObject
{
}

- (void)makeChangeOnDBTable;
- (void)initSingerImageDB;
- (void)makeTableChange:(int)arg1;
- (id)updateSQLsTableInVersion4;
- (int)dbVersion;
- (_Bool)alertAllMusicTableWithSQ;
- (_Bool)addPlayStatisticTable;
- (_Bool)addDownTaskCopyTable;
- (_Bool)addNetListOfflineTable;
- (_Bool)addVersionTable;
- (_Bool)isVersionTableExist;
- (id)db;

@end
