//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QLAppLiveRankItemInfo : NSObject
{
    _Bool _isMe;
    long long _giftNum;
    NSString *_imageUrl;
    NSString *_name;
    NSString *_uin;
    NSString *_account;
    long long _index;
}

+ (id)rankItemInfo:(id)arg1;
@property(nonatomic) _Bool isMe; // @synthesize isMe=_isMe;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *account; // @synthesize account=_account;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) long long giftNum; // @synthesize giftNum=_giftNum;
- (void).cxx_destruct;

@end

