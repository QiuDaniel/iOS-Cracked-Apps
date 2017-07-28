//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMCellComponent.h"

#import "FMCardParserProtocol.h"
#import "FMWantRentPropertyValueProtocol.h"
#import "NSCopying.h"

@class FMCardDataMultiSelectDO, FMCategoryDO, NSString;

@interface FMPostRentMultiSelectComponent : FMCellComponent <FMCardParserProtocol, FMWantRentPropertyValueProtocol, NSCopying>
{
    _Bool _isShowMutilTagsSelectView;
    FMCategoryDO *categoryDO;
    FMCardDataMultiSelectDO *_multiSelectDO;
    NSString *_poiId;
    NSString *_showMsg;
}

@property(nonatomic) _Bool isShowMutilTagsSelectView; // @synthesize isShowMutilTagsSelectView=_isShowMutilTagsSelectView;
@property(copy, nonatomic) NSString *showMsg; // @synthesize showMsg=_showMsg;
@property(copy, nonatomic) NSString *poiId; // @synthesize poiId=_poiId;
@property(retain, nonatomic) FMCardDataMultiSelectDO *multiSelectDO; // @synthesize multiSelectDO=_multiSelectDO;
@property(nonatomic) __weak FMCategoryDO *categoryDO; // @synthesize categoryDO;
- (void).cxx_destruct;
- (id)checkReqParams;
- (id)propertyValueString;
- (id)getAllTypeMultiTags;
- (id)getDefaultTags;
- (Class)viewClass;
- (_Bool)parseCardData:(id)arg1 withType:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
