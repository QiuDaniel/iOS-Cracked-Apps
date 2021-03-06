//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MBUYERBaseRpcResponse.h"

@class NSArray, NSString;

@interface MBUYEROrderListResponse : MBUYERBaseRpcResponse
{
    _Bool _hasMore;
    _Bool _doSwitchTab;
    int _pageNo;
    NSString *_templateId;
    NSString *_templateJson;
    NSString *_templateType;
    NSArray *_orders;
    NSString *_searchUrl;
}

+ (Class)ordersElementClass;
@property(retain, nonatomic) NSString *searchUrl; // @synthesize searchUrl=_searchUrl;
@property(retain, nonatomic) NSArray *orders; // @synthesize orders=_orders;
@property(nonatomic) _Bool doSwitchTab; // @synthesize doSwitchTab=_doSwitchTab;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSString *templateType; // @synthesize templateType=_templateType;
@property(retain, nonatomic) NSString *templateJson; // @synthesize templateJson=_templateJson;
@property(retain, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(nonatomic) int pageNo; // @synthesize pageNo=_pageNo;
- (void).cxx_destruct;

@end

