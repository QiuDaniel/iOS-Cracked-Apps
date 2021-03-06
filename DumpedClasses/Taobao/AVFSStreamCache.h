//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_semaphore>, NSString;

@interface AVFSStreamCache : NSObject
{
    NSObject<OS_dispatch_semaphore> *_lockSemaphore;
    NSString *_moduleName;
    NSMutableDictionary *_metaDataDict;
    NSMutableDictionary *_offsetDict;
}

@property(retain, nonatomic) NSMutableDictionary *offsetDict; // @synthesize offsetDict=_offsetDict;
@property(retain, nonatomic) NSMutableDictionary *metaDataDict; // @synthesize metaDataDict=_metaDataDict;
@property(readonly, copy) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (void).cxx_destruct;
- (void)trimToBytes:(unsigned long long)arg1;
- (void)trimToTime:(double)arg1;
- (unsigned long long)totalByte;
- (void)removeCachedFileForKey:(id)arg1;
- (id)cachedFilePathForKey:(id)arg1;
- (void)finishWriteFileForKey:(id)arg1;
- (id)readDataForKey:(id)arg1 range:(struct _NSRange)arg2;
- (void)writeData:(id)arg1 offset:(unsigned long long)arg2 forKey:(id)arg3;
- (long long)resumingDataLengthForKey:(id)arg1;
- (id)initWithModule:(id)arg1;

@end

