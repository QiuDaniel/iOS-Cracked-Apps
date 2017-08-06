//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPersonalityServiceCom.h"

@class SCarPersonalityServiceLogic;

@interface SCarPersonalityServiceUnit : SPersonalityServiceCom
{
    SCarPersonalityServiceLogic *_carPersonalityServiceLogic;
}

@property(retain, nonatomic) SCarPersonalityServiceLogic *carPersonalityServiceLogic; // @synthesize carPersonalityServiceLogic=_carPersonalityServiceLogic;
- (void).cxx_destruct;
- (long long)numberOfSections;
- (long long)numberOfCellsInSection:(long long)arg1;
- (id)modelForCellAtIndexPath:(id)arg1;
- (id)initWithDataSource:(id)arg1 config:(id)arg2;
- (void)triggerEvent:(unsigned long long)arg1 params:(id)arg2;
- (void)bind:(id)arg1;
- (long long)countOfCurrentSeletedDataWithSId:(long long)arg1;
- (void)addCommonObserver;
- (void)cleanDataWithType:(long long)arg1;
- (_Bool)isInConfirmOrder;
- (id)dataSource;

@end
