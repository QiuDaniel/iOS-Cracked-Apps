//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString, TBIMContactFriendModel;

@interface TBIMContactCheckFriendResultModel : TBJSONModel
{
    NSString *_isFriend;
    TBIMContactFriendModel *_relationShip;
}

@property(retain, nonatomic) TBIMContactFriendModel *relationShip; // @synthesize relationShip=_relationShip;
@property(retain, nonatomic) NSString *isFriend; // @synthesize isFriend=_isFriend;
- (void).cxx_destruct;

@end
