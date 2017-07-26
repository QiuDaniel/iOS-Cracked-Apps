//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTView.h"

#import "UIGestureRecognizerDelegate.h"

@class CRNSwipeoutMaskView, NSString, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface CRNSwipeoutView : RCTView <UIGestureRecognizerDelegate>
{
    _Bool isOpen;
    _Bool finishMove;
    UITapGestureRecognizer *tapGesture;
    UIPanGestureRecognizer *panGesture;
    _Bool shouldDisableScroll;
    CRNSwipeoutMaskView *_mask;
    _Bool _open;
    _Bool _autoClose;
    double _maxRightSpacing;
    CDUnknownBlockType _onOpenStatusChange;
    CDUnknownBlockType _onSwipeBegin;
    CDUnknownBlockType _onSwipeEnd;
}

@property(copy, nonatomic) CDUnknownBlockType onSwipeEnd; // @synthesize onSwipeEnd=_onSwipeEnd;
@property(copy, nonatomic) CDUnknownBlockType onSwipeBegin; // @synthesize onSwipeBegin=_onSwipeBegin;
@property(copy, nonatomic) CDUnknownBlockType onOpenStatusChange; // @synthesize onOpenStatusChange=_onOpenStatusChange;
@property(nonatomic) _Bool autoClose; // @synthesize autoClose=_autoClose;
@property(nonatomic) _Bool open; // @synthesize open=_open;
@property(nonatomic) double maxRightSpacing; // @synthesize maxRightSpacing=_maxRightSpacing;
- (void).cxx_destruct;
- (void)c_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)scrollView;
- (void)removeMaskViewIfNeed;
- (void)addMaskViewIfNeed;
- (void)openStatusChange:(_Bool)arg1;
- (void)closeView;
- (void)handlePanGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
