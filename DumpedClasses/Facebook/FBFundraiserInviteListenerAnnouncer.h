//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBAnnouncerBase.h>

#import "FBFundraiserInviteListener-Protocol.h"

@interface FBFundraiserInviteListenerAnnouncer : FBAnnouncerBase <FBFundraiserInviteListener>
{
}

- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)updateInviteState:(id)arg1;
- (void)inviteAndHideSuggestedFriends;

@end

