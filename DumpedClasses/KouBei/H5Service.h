//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface H5Service : NSObject
{
    _Bool _hasStartPSDService;
    int _controllerCount;
}

+ (id)sharedService;
@property(nonatomic) _Bool hasStartPSDService; // @synthesize hasStartPSDService=_hasStartPSDService;
@property(nonatomic) int controllerCount; // @synthesize controllerCount=_controllerCount;
- (id)sessions;
- (id)lastSession;
- (void)removeSession:(id)arg1;
- (void)_handleOfflineAppWithParams:(id)arg1 urlString:(id)arg2;
- (id)getApis:(id)arg1;
- (void)unregisterApi:(id)arg1;
- (void)unregisterApi:(id)arg1 Api:(id)arg2;
- (void)unregisterApiName:(id)arg1;
- (void)registerApis:(id)arg1;
- (void)registerApi:(id)arg1 Apis:(id)arg2;
- (void)decreaseControllerCount;
- (void)increaseControllerCount;
- (void)startPSDService;
- (id)createWebViewWithVC:(id)arg1 params:(id)arg2 JSApis:(id)arg3;
- (id)createWebViewWithParams:(id)arg1 JSApis:(id)arg2;
- (id)createWebViewController:(id)arg1 JSApis:(id)arg2 withDelegate:(id)arg3;
- (id)createH5Session:(id)arg1 JSApis:(id)arg2 withDelegate:(id)arg3;
- (id)createH5Session:(id)arg1;
- (id)finalUrl:(id)arg1;
- (id)init;

@end

