//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBIMInputFunctionItem.h"

#import "ShareItemDelegate.h"
#import "TBIMInputFunctionItem.h"

@class NSString, UIViewController;

@interface TBIMShareItemFunctionItem : TBIMInputFunctionItem <ShareItemDelegate, TBIMInputFunctionItem>
{
}

- (void)sendShareItem:(id)arg1;
- (void)clickItemAction;
- (id)initWithSessionId:(id)arg1 serviceType:(int)arg2;

// Remaining properties
@property(copy, nonatomic) NSString *clickSPM;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) id defaultFunctionItemContext;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *iconFontName;
@property(nonatomic) _Bool isNew;
@property(nonatomic) __weak id <TBIMMessageServiceAdapter> messageSvr;
@property(copy, nonatomic) NSString *moduleSPM;
@property(copy, nonatomic) NSString *pageName;
@property(nonatomic) __weak UIViewController *responseVC;
@property(nonatomic) int serviceType;
@property(copy, nonatomic) NSString *sessionId;
@property(nonatomic) __weak id <TBIMSessionServiceAdapter> sessionSrv;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *title;

@end

