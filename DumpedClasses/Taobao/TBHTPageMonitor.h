//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBHTPageMonitor : NSObject
{
}

+ (void)commitEvent:(id)arg1 eventId:(int)arg2 arg1:(id)arg3 arg2:(id)arg4 arg3:(id)arg5 args:(id)arg6;
+ (void)commitEvent:(id)arg1 dict:(id)arg2;
+ (void)clicked:(id)arg1 withControlName:(id)arg2 withParam:(id)arg3;
+ (void)clicked:(id)arg1 withParam:(id)arg2;
+ (void)clicked:(id)arg1;
+ (void)updateNext:(id)arg1;
+ (void)update:(id)arg1 withPageId:(id)arg2 withParam:(id)arg3;
+ (void)leave:(id)arg1 withPageId:(id)arg2 withParam:(id)arg3;
+ (void)enter:(id)arg1 withPageId:(id)arg2 withParam:(id)arg3;

@end

