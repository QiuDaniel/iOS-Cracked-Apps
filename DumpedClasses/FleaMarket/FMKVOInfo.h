//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FMKVOInfo : NSObject
{
    unsigned char _state;
    NSObject *_observer;
    NSObject *_object;
    NSString *_keyPath;
    unsigned long long _options;
    CDUnknownBlockType _block;
}

@property(nonatomic) unsigned char state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(nonatomic) NSObject *object; // @synthesize object=_object;
@property(nonatomic) NSObject *observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1 object:(id)arg2 keyPath:(id)arg3 options:(unsigned long long)arg4 block:(CDUnknownBlockType)arg5;

@end

