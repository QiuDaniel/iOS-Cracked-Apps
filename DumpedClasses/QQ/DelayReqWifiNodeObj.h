//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface DelayReqWifiNodeObj : NSObject
{
    id _delegate;
    NSMutableArray *_wifiNodes;
}

@property(retain, nonatomic) NSMutableArray *wifiNodes; // @synthesize wifiNodes=_wifiNodes;
@property(retain, nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void)dealloc;

@end

