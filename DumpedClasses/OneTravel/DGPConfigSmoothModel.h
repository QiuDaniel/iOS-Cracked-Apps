//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray<DGPconfigPOIModel>, NSString;

@interface DGPConfigSmoothModel : JSONModel
{
    NSArray<DGPconfigPOIModel> *_poi;
    NSString *_icon;
    NSString *_icon_passed;
    NSString *_icon_open_time;
    NSString *_icon_close_time;
    NSString *_polling_interval;
    NSString *_bubble_img;
    NSString *_bubble_url;
    NSString *_bubble_open_time;
    NSString *_bubble_close_time;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(copy, nonatomic) NSString *bubble_close_time; // @synthesize bubble_close_time=_bubble_close_time;
@property(copy, nonatomic) NSString *bubble_open_time; // @synthesize bubble_open_time=_bubble_open_time;
@property(copy, nonatomic) NSString *bubble_url; // @synthesize bubble_url=_bubble_url;
@property(copy, nonatomic) NSString *bubble_img; // @synthesize bubble_img=_bubble_img;
@property(copy, nonatomic) NSString *polling_interval; // @synthesize polling_interval=_polling_interval;
@property(copy, nonatomic) NSString *icon_close_time; // @synthesize icon_close_time=_icon_close_time;
@property(copy, nonatomic) NSString *icon_open_time; // @synthesize icon_open_time=_icon_open_time;
@property(copy, nonatomic) NSString *icon_passed; // @synthesize icon_passed=_icon_passed;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSArray<DGPconfigPOIModel> *poi; // @synthesize poi=_poi;
- (void).cxx_destruct;

@end
