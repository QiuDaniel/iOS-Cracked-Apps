//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMCellComponent.h"

@class FMFAQInfoDO, NSString;

@interface FMFAQInfoComponent : FMCellComponent
{
    long long _showType;
    NSString *_title;
    NSString *_iconURL;
    NSString *_desc;
    NSString *_tips;
    NSString *_userId;
    NSString *_itemId;
    FMFAQInfoDO *_faqInfoDO;
    struct CGSize _iconSize;
}

@property(retain, nonatomic) FMFAQInfoDO *faqInfoDO; // @synthesize faqInfoDO=_faqInfoDO;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) long long showType; // @synthesize showType=_showType;
- (void).cxx_destruct;
- (void)doOpenActionUrl;
- (void)parseFAQInfo:(id)arg1;
- (Class)viewClass;

@end
