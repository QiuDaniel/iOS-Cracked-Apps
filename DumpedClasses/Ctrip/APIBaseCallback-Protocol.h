//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APIBase, APIResponse;

@protocol APIBaseCallback <NSObject>
- (void)apiBase:(APIBase *)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)apiBase:(APIBase *)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)apiBase:(APIBase *)arg1 didResponse:(APIResponse *)arg2;
@end
