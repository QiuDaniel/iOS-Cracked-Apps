//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYUPhoneCardBaseCell.h"

#import "QYPhoneGestureProtocol-Protocol.h"

@class NSString, UIScrollView;

@interface QYUSearchPaoPaoSlideCell : QYUPhoneCardBaseCell <QYPhoneGestureProtocol>
{
    UIScrollView *_scrollView;
}

+ (id)getCellObjByContainer:(id)arg1 andIndex:(long long)arg2;
+ (long long)getLinesByCardData:(id)arg1 andShowNum:(long long)arg2;
+ (void)load;
+ (id)ptypeDicWithCell:(id)arg1 data:(id)arg2;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)setCellModel:(id)arg1;
- (void)onViewTouchUpInside:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

