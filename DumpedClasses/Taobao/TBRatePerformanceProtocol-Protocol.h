//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol TBRatePerformanceProtocol <NSObject>
- (void)addPerformancePhaseEnd:(NSString *)arg1 onPage:(NSString *)arg2 eventType:(NSString *)arg3 eventId:(int)arg4 userInfo:(NSDictionary *)arg5;
- (void)addPerformancePhaseBegin:(NSString *)arg1 onPage:(NSString *)arg2 eventType:(NSString *)arg3 eventId:(int)arg4 userInfo:(NSDictionary *)arg5;
@end

