//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _priv_NBSLensUITrackerLogger : NSObject
{
    NSMutableArray *eventList;
    NSMutableArray *breadcrumbList;
}

+ (id)sharedObject;
- (void).cxx_destruct;
- (void)clear;
- (id)render:(unsigned long long)arg1;
- (void)logBreadcrumb:(id)arg1;
- (void)logEventOfVC:(id)arg1 EventName:(id)arg2 withDescription:(id)arg3 andOtherInfo:(id)arg4;
- (id)init;

@end

