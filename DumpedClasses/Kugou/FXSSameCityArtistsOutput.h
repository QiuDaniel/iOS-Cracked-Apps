//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBaseJSONModel.h"

@class NSArray<FXSRoomInfo><Optional>, NSNumber<Optional>, NSString<Optional>;

@interface FXSSameCityArtistsOutput : FXBaseJSONModel
{
    NSNumber<Optional> *_areaCode;
    NSString<Optional> *_areaName;
    NSNumber<Optional> *_cityOnlineNum;
    NSArray<FXSRoomInfo><Optional> *_cityRoomList;
    NSArray<FXSRoomInfo><Optional> *_areaRoomList;
}

@property(retain, nonatomic) NSArray<FXSRoomInfo><Optional> *areaRoomList; // @synthesize areaRoomList=_areaRoomList;
@property(retain, nonatomic) NSArray<FXSRoomInfo><Optional> *cityRoomList; // @synthesize cityRoomList=_cityRoomList;
@property(nonatomic) NSNumber<Optional> *cityOnlineNum; // @synthesize cityOnlineNum=_cityOnlineNum;
@property(retain, nonatomic) NSString<Optional> *areaName; // @synthesize areaName=_areaName;
@property(retain, nonatomic) NSNumber<Optional> *areaCode; // @synthesize areaCode=_areaCode;
- (void).cxx_destruct;

@end

