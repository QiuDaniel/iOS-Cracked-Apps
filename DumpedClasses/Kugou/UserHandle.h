//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UserHandle : NSObject
{
    _Bool pausePlayByUser;
    _Bool pausePlayByInterruption;
    _Bool pausePlayByUnplugHeadset;
    _Bool pausePlayBySystem;
}

+ (id)userHandle;
@property(nonatomic) _Bool pausePlayBySystem; // @synthesize pausePlayBySystem;
@property(nonatomic) _Bool pausePlayByUnplugHeadset; // @synthesize pausePlayByUnplugHeadset;
@property(nonatomic) _Bool pausePlayByInterruption; // @synthesize pausePlayByInterruption;
@property(nonatomic) _Bool pausePlayByUser; // @synthesize pausePlayByUser;
- (void)resetAllPauseStatus;
- (_Bool)isUserPausePlay;

@end

