//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, NSMutableDictionary;

@interface APSnapChatTimeManager : NSObject
{
    unsigned long long _managerState;
    CADisplayLink *_displayLink;
    NSMutableDictionary *_items;
    double _lastTime;
}

+ (id)shareManager;
@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property(retain, nonatomic) NSMutableDictionary *items; // @synthesize items=_items;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) unsigned long long managerState; // @synthesize managerState=_managerState;
- (void).cxx_destruct;
- (void)stop;
- (void)pause;
- (void)start;
- (void)removeItemWithKey:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)addItems:(id)arg1;
- (void)addItem:(id)arg1;
- (void)onMsgCancelled:(id)arg1;
- (id)init;
- (void)render;
- (void)commonInitialization;
- (void)dealloc;

@end

