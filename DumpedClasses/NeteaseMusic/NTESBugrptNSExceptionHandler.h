//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NTESBugrptNSExceptionHandler : NSObject
{
    _Bool _handlerEnable;
    _Bool _signalHandlerResetable;
}

+ (id)sharedInstance;
- (_Bool)enableSignalHandlerCheck:(_Bool)arg1;
- (void)enableHandler:(_Bool)arg1;
- (_Bool)checkHandler;
- (_Bool)uninstall;
- (_Bool)install;
- (id)init;

@end

