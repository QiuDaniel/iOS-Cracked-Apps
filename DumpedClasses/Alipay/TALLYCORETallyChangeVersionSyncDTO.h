//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TALLYCOREToString.h"

@class NSString;

@interface TALLYCORETallyChangeVersionSyncDTO : TALLYCOREToString
{
    int _clientVersion;
    int _serverVersion;
    NSString *_changeType;
    NSString *_month;
}

@property(nonatomic) int serverVersion; // @synthesize serverVersion=_serverVersion;
@property(nonatomic) int clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *month; // @synthesize month=_month;
@property(retain, nonatomic) NSString *changeType; // @synthesize changeType=_changeType;
- (void).cxx_destruct;

@end

