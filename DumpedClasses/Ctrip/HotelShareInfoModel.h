//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelShareInfoModel : CTBusinessBean
{
    NSString *_hotelScore;
    NSString *_hotelName;
    NSString *_hotelImageUrl;
    NSString *_hotelType;
    NSString *_shareDes;
    NSString *_shareUrl;
}

@property(copy, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(copy, nonatomic) NSString *shareDes; // @synthesize shareDes=_shareDes;
@property(copy, nonatomic) NSString *hotelType; // @synthesize hotelType=_hotelType;
@property(copy, nonatomic) NSString *hotelImageUrl; // @synthesize hotelImageUrl=_hotelImageUrl;
@property(copy, nonatomic) NSString *hotelName; // @synthesize hotelName=_hotelName;
@property(copy, nonatomic) NSString *hotelScore; // @synthesize hotelScore=_hotelScore;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end
