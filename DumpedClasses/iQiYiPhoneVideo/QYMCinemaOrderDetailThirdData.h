//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QYMCinemaOrderDetailThirdData : NSObject
{
    NSString *_thirdPwd;
    NSString *_thirdTicketId;
    NSString *_thirdDesc;
}

@property(copy, nonatomic) NSString *thirdDesc; // @synthesize thirdDesc=_thirdDesc;
@property(copy, nonatomic) NSString *thirdTicketId; // @synthesize thirdTicketId=_thirdTicketId;
@property(copy, nonatomic) NSString *thirdPwd; // @synthesize thirdPwd=_thirdPwd;
- (void)buildWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;

@end

