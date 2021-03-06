//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EZJSONModel.h"

@class NSNumber, NSString, NSURL;
@protocol Optional;

@interface EZChatHistoryMessage : EZJSONModel
{
    NSString<Optional> *_body;
    NSNumber<Optional> *_audioLength;
    NSURL<Optional> *_attachedImg;
    NSURL<Optional> *_audioUrl;
    NSNumber<Optional> *_createdAt;
    NSString<Optional> *_senderUserId;
}

@property(copy, nonatomic) NSString<Optional> *senderUserId; // @synthesize senderUserId=_senderUserId;
@property(copy, nonatomic) NSNumber<Optional> *createdAt; // @synthesize createdAt=_createdAt;
@property(copy, nonatomic) NSURL<Optional> *audioUrl; // @synthesize audioUrl=_audioUrl;
@property(copy, nonatomic) NSURL<Optional> *attachedImg; // @synthesize attachedImg=_attachedImg;
@property(copy, nonatomic) NSNumber<Optional> *audioLength; // @synthesize audioLength=_audioLength;
@property(copy, nonatomic) NSString<Optional> *body; // @synthesize body=_body;
- (void).cxx_destruct;
- (_Bool)sendFromMe;
- (_Bool)hasText;
- (_Bool)hasImage;
- (_Bool)hasAudio;
- (id)toGroupMessagesWithChatterUser:(id)arg1;
- (double)createdAtTimestamp;

@end

