//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMGeneralPageTableComponent.h"

@class FMAccountComponentDO;

@interface FMAccountComponent : FMGeneralPageTableComponent
{
    FMAccountComponentDO *_componentDO;
}

@property(retain, nonatomic) FMAccountComponentDO *componentDO; // @synthesize componentDO=_componentDO;
- (void).cxx_destruct;
- (void)rebuild;
- (void)setupBuilder:(id)arg1;
- (void)requestFailureHandle;
- (void)requestSuccessHandle:(id)arg1;
- (id)getParameters;
- (id)init;
- (_Bool)isNeedLogin;
- (double)cacheTime;
- (Class)returnClass;
- (id)mtopApiVersion;
- (id)mtopApi;

@end

