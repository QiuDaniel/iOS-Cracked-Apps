//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIActionSheetDelegate.h"

@class AUActionSheet, NSArray, NSString;

@interface REActionSheetInterceptor : NSObject <UIActionSheetDelegate>
{
    long long _bizType;
    AUActionSheet *_actionSheet;
    NSString *_chatUserId;
    NSString *_chatUserType;
    NSArray *_ASItems;
}

@property(retain, nonatomic) NSArray *ASItems; // @synthesize ASItems=_ASItems;
@property(copy, nonatomic) NSString *chatUserType; // @synthesize chatUserType=_chatUserType;
@property(copy, nonatomic) NSString *chatUserId; // @synthesize chatUserId=_chatUserId;
@property(retain, nonatomic) AUActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
- (void).cxx_destruct;
- (id)createActionSheetWithItems:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)openUrl:(id)arg1;
- (_Bool)excuteInterceptorWithChatUserId:(id)arg1 chatUserType:(id)arg2;
- (id)initWithBizType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
