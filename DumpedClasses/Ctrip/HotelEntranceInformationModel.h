//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelEntranceInformationModel : CTBusinessBean
{
    _Bool _isEnable;
    int _entranceType;
    NSString *_entranceTitle;
    NSString *_entranceURL;
    NSString *_entranceSubTitle;
    NSString *_entranceSubTitle2;
}

@property(nonatomic) _Bool isEnable; // @synthesize isEnable=_isEnable;
@property(copy, nonatomic) NSString *entranceSubTitle2; // @synthesize entranceSubTitle2=_entranceSubTitle2;
@property(copy, nonatomic) NSString *entranceSubTitle; // @synthesize entranceSubTitle=_entranceSubTitle;
@property(copy, nonatomic) NSString *entranceURL; // @synthesize entranceURL=_entranceURL;
@property(copy, nonatomic) NSString *entranceTitle; // @synthesize entranceTitle=_entranceTitle;
@property(nonatomic) int entranceType; // @synthesize entranceType=_entranceType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

