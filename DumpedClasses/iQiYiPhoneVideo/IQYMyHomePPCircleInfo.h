//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface IQYMyHomePPCircleInfo : NSObject
{
    NSString *_wallId;
    NSString *_icon;
    NSString *_name;
    NSString *_wallType;
    NSString *_dataFrom;
    NSString *_isMaster;
    NSString *_isAdministrator;
    NSString *_desc;
    NSString *_rankInfo_rank;
    NSString *_rankInfo_trend;
    NSString *_memberCount;
    NSString *_count;
    NSString *_collected;
    NSString *_infoDesc_type;
    NSString *_infoDesc_desc;
    NSArray *_entityIds;
    NSString *_activityInfo_status;
}

+ (id)parseForArray:(id)arg1;
@property(retain, nonatomic) NSString *activityInfo_status; // @synthesize activityInfo_status=_activityInfo_status;
@property(retain, nonatomic) NSArray *entityIds; // @synthesize entityIds=_entityIds;
@property(retain, nonatomic) NSString *infoDesc_desc; // @synthesize infoDesc_desc=_infoDesc_desc;
@property(retain, nonatomic) NSString *infoDesc_type; // @synthesize infoDesc_type=_infoDesc_type;
@property(retain, nonatomic) NSString *collected; // @synthesize collected=_collected;
@property(retain, nonatomic) NSString *count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *memberCount; // @synthesize memberCount=_memberCount;
@property(retain, nonatomic) NSString *rankInfo_trend; // @synthesize rankInfo_trend=_rankInfo_trend;
@property(retain, nonatomic) NSString *rankInfo_rank; // @synthesize rankInfo_rank=_rankInfo_rank;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *isAdministrator; // @synthesize isAdministrator=_isAdministrator;
@property(retain, nonatomic) NSString *isMaster; // @synthesize isMaster=_isMaster;
@property(retain, nonatomic) NSString *dataFrom; // @synthesize dataFrom=_dataFrom;
@property(retain, nonatomic) NSString *wallType; // @synthesize wallType=_wallType;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *wallId; // @synthesize wallId=_wallId;
- (void).cxx_destruct;
- (void)buildWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

