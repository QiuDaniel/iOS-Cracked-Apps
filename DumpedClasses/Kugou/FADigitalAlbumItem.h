//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class NSString;

@interface FADigitalAlbumItem : FAModel
{
    NSString *_albumId;
    NSString *_albumName;
    NSString *_albumCover;
    long long _giftId;
    long long _price;
}

@property(nonatomic) long long price; // @synthesize price=_price;
@property(nonatomic) long long giftId; // @synthesize giftId=_giftId;
@property(retain, nonatomic) NSString *albumCover; // @synthesize albumCover=_albumCover;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) NSString *albumId; // @synthesize albumId=_albumId;
- (void).cxx_destruct;

@end

