//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TaskThread;

@interface AsynFileStorage : NSObject
{
    TaskThread *_taskthread;
}

+ (id)GetInstance;
- (void)save:(id)arg1 toFile:(id)arg2 callback:(id)arg3 userdata:(id)arg4;
- (void)doSaveMsgSyncCache:(id)arg1 toFile:(id)arg2 callback:(id)arg3 userdata:(id)arg4 callThread:(id)arg5;
- (void)doCallBack:(id)arg1;
- (id)getFromFile:(id)arg1;
- (id)doRead:(id)arg1;
- (void)save:(id)arg1 toFile:(id)arg2;
- (void)dealloc;
- (id)init;

@end

