//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GTSIpAddress;

@interface GTPIpAddressManager : NSObject
{
    GTSIpAddress *_lochwIpAddress;
    GTSIpAddress *_allhwIpAddress;
}

+ (id)sharedInstance;
@property(retain, nonatomic) GTSIpAddress *allhwIpAddress; // @synthesize allhwIpAddress=_allhwIpAddress;
@property(retain, nonatomic) GTSIpAddress *lochwIpAddress; // @synthesize lochwIpAddress=_lochwIpAddress;
- (void).cxx_destruct;
- (void)tryToGetHwNotification:(id)arg1;
- (void)startScanHwForAllWifiNotification:(id)arg1;
- (void)gtp_stop_pingself;
- (void)gtp_start_pingself;
- (void)gtp_stop;
- (void)gtp_start;

@end

