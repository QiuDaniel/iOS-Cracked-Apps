//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseWebViewController.h"

@class NSString, SCarEstimateRuleParams;

@interface TREstimateDetailController : TRBaseWebViewController
{
    NSString *_detailParams;
    SCarEstimateRuleParams *_ruleParams;
}

@property(retain, nonatomic) SCarEstimateRuleParams *ruleParams; // @synthesize ruleParams=_ruleParams;
@property(copy, nonatomic) NSString *detailParams; // @synthesize detailParams=_detailParams;
- (void).cxx_destruct;
- (id)dictionaryWithJsonString:(id)arg1;
- (void)goToPriceRuleDetail;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)registListenJS;
- (void)viewDidLoad;

@end
