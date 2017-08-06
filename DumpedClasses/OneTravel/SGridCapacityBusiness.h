//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ONEBaseBusiness.h"

#import "ONESBaseMapEntranceDelegate.h"

@class NSMutableArray, NSString;

@interface SGridCapacityBusiness : ONEBaseBusiness <ONESBaseMapEntranceDelegate>
{
    NSString *_actionType;
    NSMutableArray *_gridCapacityPologonArr;
    NSMutableArray *_gridCapacityAnnotationArr;
}

@property(retain, nonatomic) NSMutableArray *gridCapacityAnnotationArr; // @synthesize gridCapacityAnnotationArr=_gridCapacityAnnotationArr;
@property(retain, nonatomic) NSMutableArray *gridCapacityPologonArr; // @synthesize gridCapacityPologonArr=_gridCapacityPologonArr;
@property(retain, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (id)annotationViewWithdetail:(id)arg1;
- (id)getStringFormObjsct:(id)arg1;
- (id)mapEntrance:(id)arg1 viewForOverlay:(id)arg2;
- (void)cleanMapGridCapacity;
- (void)closeMapGridCapacity;
- (void)updateMapGridCapacityWithGridCapacityData:(id)arg1;
- (id)initWithMapEntrance:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
