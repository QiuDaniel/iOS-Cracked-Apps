//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ODKDDAbstractLogger.h"

#import "ODKDDLogger.h"

@class NSFileHandle, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, ODKDDLogFileInfo;

@interface ODKDDFileLogger : ODKDDAbstractLogger <ODKDDLogger>
{
    id <ODKDDLogFileManager> _logFileManager;
    ODKDDLogFileInfo *_currentLogFileInfo;
    NSFileHandle *_currentLogFileHandle;
    NSObject<OS_dispatch_source> *_currentLogFileVnode;
    NSObject<OS_dispatch_source> *_rollingTimer;
    unsigned long long _maximumFileSize;
    double _rollingFrequency;
    _Bool _doNotReuseLogFiles;
    _Bool _automaticallyAppendNewlineForCustomFormatters;
    id <ODKDDLogFileManager> logFileManager;
}

@property(nonatomic) _Bool automaticallyAppendNewlineForCustomFormatters; // @synthesize automaticallyAppendNewlineForCustomFormatters=_automaticallyAppendNewlineForCustomFormatters;
@property _Bool doNotReuseLogFiles; // @synthesize doNotReuseLogFiles=_doNotReuseLogFiles;
@property(readonly, nonatomic) id <ODKDDLogFileManager> logFileManager; // @synthesize logFileManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *loggerName;
- (void)willRemoveLogger;
- (void)logMessage:(id)arg1;
- (id)currentLogFileHandle;
- (id)currentLogFileInfo;
- (void)maybeRollLogFileDueToSize;
- (void)maybeRollLogFileDueToAge;
- (void)rollLogFileNow;
- (void)rollLogFileWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)rollLogFile;
- (void)scheduleTimerToRollLogFileDueToAge;
@property double rollingFrequency;
@property unsigned long long maximumFileSize;
- (void)dealloc;
- (id)initWithLogFileManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <ODKDDLogFormatter> logFormatter;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue;
@property(readonly) Class superclass;

@end

