//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTServiceController;

@interface CTHotelServiceController : NSObject
{
    CTServiceController *_serviceController;
}

+ (id)shareInstance;
@property(retain, nonatomic) CTServiceController *serviceController; // @synthesize serviceController=_serviceController;
- (void).cxx_destruct;
- (void)sendService:(id)arg1 tokenArr:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)cancel:(id)arg1;
- (id)init;

@end
