//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface QLPerformanceMonitor : NSObject
{
    _Bool _isBackground;
    unsigned long long _totalMem;
    unsigned long long _freeMem;
    long long _consumeMem;
    int _minuteCount;
    float _batteryLevel;
    float _consumeBatteryLevel;
    unsigned int _numCPUs;
    int *_cpuInfo;
    unsigned int _numCpuInfo;
    float _cpuUsage;
    NSTimer *_checkTimer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSTimer *checkTimer; // @synthesize checkTimer=_checkTimer;
- (void).cxx_destruct;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)checkCPUState;
- (void)checkBatteryState;
- (void)checkMemoryState;
- (void)checkTimerAction:(id)arg1;
- (void)stop;
- (void)start;
- (id)getSizeStringForBytes:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

