//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UP0223AppException, UP0223InitProfile, UP0223Session;

@interface UP0223Message : NSObject
{
    int _msgType;
    UP0223Session *_session;
    UP0223InitProfile *_initProfile;
    UP0223AppException *_appException;
}

@property(retain, nonatomic) UP0223AppException *appException; // @synthesize appException=_appException;
@property(retain, nonatomic) UP0223InitProfile *initProfile; // @synthesize initProfile=_initProfile;
@property(retain, nonatomic) UP0223Session *session; // @synthesize session=_session;
@property(nonatomic) int msgType; // @synthesize msgType=_msgType;
- (void).cxx_destruct;
- (void)messagePack:(struct msgpack_packer *)arg1;

@end

