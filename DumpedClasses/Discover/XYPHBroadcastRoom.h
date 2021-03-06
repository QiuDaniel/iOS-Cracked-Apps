//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYRKModel.h"

@class NSString;

@interface XYPHBroadcastRoom : XYRKModel
{
    NSString *_roomId;
    NSString *_name;
    NSString *_desc;
    NSString *_image;
    long long _audienceCount;
    long long _likeCount;
    NSString *_pullURL;
    NSString *_pushURL;
    NSString *_chatRoomId;
    NSString *_sharelink;
    NSString *_sharetitle;
    NSString *_sharedesc;
    long long _broadcastingStatus;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long broadcastingStatus; // @synthesize broadcastingStatus=_broadcastingStatus;
@property(retain, nonatomic) NSString *sharedesc; // @synthesize sharedesc=_sharedesc;
@property(retain, nonatomic) NSString *sharetitle; // @synthesize sharetitle=_sharetitle;
@property(retain, nonatomic) NSString *sharelink; // @synthesize sharelink=_sharelink;
@property(retain, nonatomic) NSString *chatRoomId; // @synthesize chatRoomId=_chatRoomId;
@property(retain, nonatomic) NSString *pushURL; // @synthesize pushURL=_pushURL;
@property(retain, nonatomic) NSString *pullURL; // @synthesize pullURL=_pullURL;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) long long audienceCount; // @synthesize audienceCount=_audienceCount;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;

@end

