//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView;
@protocol FBFriendsNearbyTableViewCell;

@protocol FBFriendsNearbyTableViewCellDelegate <NSObject>
- (void)friendsNearbyTableViewCellDidTapInviteButton:(id <FBFriendsNearbyTableViewCell>)arg1;
- (void)friendsNearbyTableViewCellDidTapActionButton:(id <FBFriendsNearbyTableViewCell>)arg1;

@optional
- (void)friendsNearbyTableViewCellDidTapMoreButtonWithLocation:(NSString *)arg1 cell:(id <FBFriendsNearbyTableViewCell>)arg2 fromView:(UIView *)arg3;
- (void)friendsNearbyTableViewCellDidTapWaveButton:(id <FBFriendsNearbyTableViewCell>)arg1;
- (void)friendsNearbyTableViewCellDidTapMessageButton:(id <FBFriendsNearbyTableViewCell>)arg1;
- (void)friendsNearbyTableViewCellDidTapUndoButton:(id <FBFriendsNearbyTableViewCell>)arg1;
- (void)friendsNearbyTableViewCellDidTapCell:(id <FBFriendsNearbyTableViewCell>)arg1;
@end

