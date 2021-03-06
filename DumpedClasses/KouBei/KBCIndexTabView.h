//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "KBCIndexTabContentViewDelegate-Protocol.h"

@class NSArray, NSString, NSTimer;
@protocol KBCIndexTabViewDelegate;

@interface KBCIndexTabView : UIView <KBCIndexTabContentViewDelegate>
{
    id <KBCIndexTabViewDelegate> _delegate;
    NSArray *_tabItems;
    NSArray *_contentViewArray;
    unsigned long long _selectedIndex;
    UIView *_progressView;
    UIView *_line;
    NSTimer *_tipTimer;
    unsigned long long _nextTipIndex;
}

@property(nonatomic) unsigned long long nextTipIndex; // @synthesize nextTipIndex=_nextTipIndex;
@property(retain, nonatomic) NSTimer *tipTimer; // @synthesize tipTimer=_tipTimer;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *contentViewArray; // @synthesize contentViewArray=_contentViewArray;
@property(retain, nonatomic) NSArray *tabItems; // @synthesize tabItems=_tabItems;
@property(nonatomic) __weak id <KBCIndexTabViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)findAvailableTipInTipItem:(id)arg1;
- (id)findAvailableTipFromIndex:(unsigned long long)arg1 resultIndex:(unsigned long long *)arg2;
- (void)alertTipIfNeed:(id)arg1;
- (id)getUsedTipsForItem:(id)arg1;
- (void)stopTip;
- (void)startTip;
- (void)slideProgressViewToIndex:(unsigned long long)arg1 animate:(_Bool)arg2;
- (void)didEndDimissTipAnimation:(id)arg1;
- (void)didEndAlertTipAnimation:(id)arg1;
- (void)didSelectTabContentView:(id)arg1;
- (_Bool)shouldSelectTabContentView:(id)arg1;
- (void)setItems:(id)arg1 startIndex:(unsigned long long)arg2 needShowBadge:(_Bool)arg3;
- (void)setupProgressView;
- (void)setupLine;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

