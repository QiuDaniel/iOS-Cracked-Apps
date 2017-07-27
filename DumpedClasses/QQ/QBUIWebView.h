//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWebView.h"

@class NSMutableDictionary, NSString, QBPerformance, QBUIWebViewProxy, UIImage;

@interface QBUIWebView : UIWebView
{
    QBUIWebViewProxy *_webViewProxy;
    NSMutableDictionary *_redirectInfoDictionary;
    UIImage *_image;
    QBPerformance *_performance;
}

+ (void)setCustomUA:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) QBPerformance *performance; // @synthesize performance=_performance;
- (void).cxx_destruct;
- (void)removeAllRedirectInfo;
- (void)addRedirectInfo:(id)arg1;
- (void)addPerformanceItem:(id)arg1;
@property(readonly) UIImage *webViewInfoIconImage;
@property(readonly) NSString *webViewInfoIconTips;
- (id)appendQBWebViewFlagToUA;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)reload;
- (void)goForward;
- (void)goBack;
- (void)loadRequest:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)doInit;
- (id)getQBUIWebViewProxy;

@end
