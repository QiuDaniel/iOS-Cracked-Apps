//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface TaoPasswordChecker : NSObject
{
    NSArray *_checkers;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NSArray *checkers; // @synthesize checkers=_checkers;
- (void).cxx_destruct;
- (void)cancel;
- (void)check:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

@end

