//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface AliPerformanceLog : NSObject
{
    NSMutableDictionary *_host;
    NSMutableArray *_load;
}

+ (id)dic2FormatString:(id)arg1;
+ (void)writeToFile:(id)arg1;
+ (void)logToFile;
+ (void)loadLog:(id)arg1 andCost:(long long)arg2;
+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *load; // @synthesize load=_load;
@property(retain, nonatomic) NSMutableDictionary *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (void)HostLog;
- (id)init;

@end

