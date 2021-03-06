//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSIndexPath, NSLock, NSString, TBRecmdItemCardModel, TBRecmdProcessor, UIActivityIndicatorView, UIButton;

@interface TBRecmdMaskView : UIView
{
    UIButton *_itemDeleteButton;
    UIButton *_itemSimilarButton;
    TBRecmdProcessor *_processor;
    UIButton *_itemBgButton;
    NSArray *_btns;
    UIActivityIndicatorView *_loadingView;
    NSLock *_animationLock;
    TBRecmdItemCardModel *_itemModel;
    NSIndexPath *_itemIndexPath;
    CDUnknownBlockType _deleteBlock;
    CDUnknownBlockType _failedBlock;
}

+ (void)showDeleteFailedToastOnView:(id)arg1;
+ (void)showDeleteHintToastDeleted:(_Bool)arg1 onView:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType deleteBlock; // @synthesize deleteBlock=_deleteBlock;
@property(retain, nonatomic) NSIndexPath *itemIndexPath; // @synthesize itemIndexPath=_itemIndexPath;
@property(nonatomic) __weak TBRecmdItemCardModel *itemModel; // @synthesize itemModel=_itemModel;
@property(retain, nonatomic) NSLock *animationLock; // @synthesize animationLock=_animationLock;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSArray *btns; // @synthesize btns=_btns;
@property(retain, nonatomic) UIButton *itemBgButton; // @synthesize itemBgButton=_itemBgButton;
@property(nonatomic) __weak TBRecmdProcessor *processor; // @synthesize processor=_processor;
@property(retain, nonatomic) UIButton *itemSimilarButton; // @synthesize itemSimilarButton=_itemSimilarButton;
@property(retain, nonatomic) UIButton *itemDeleteButton; // @synthesize itemDeleteButton=_itemDeleteButton;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *itemDeleteId;
@property(readonly, nonatomic) NSString *similarUrl;
- (void)switchSimularButtonStatusWithUrl:(id)arg1;
- (void)pressSimilarButton:(id)arg1;
- (void)deleteFailedWithError:(id)arg1 indexPath:(id)arg2 oldDeleteId:(id)arg3;
- (void)deleteSuccessWithIndexPath:(id)arg1 oldDeleteId:(id)arg2 newCardModel:(id)arg3;
- (void)performDeleteAnimation;
- (void)pressDeleteButton:(id)arg1;
- (void)dismissDeleteMaskViewWithAnimationCompletion:(CDUnknownBlockType)arg1;
- (id)maskViewShowingCellIndexPath;
- (void)dismissDeleteMaskView;
- (void)showMaskViewAbove:(id)arg1 indexPath:(id)arg2 model:(id)arg3;
- (void)changeSimilarBtnTitle:(id)arg1 bgColor:(id)arg2;
- (void)changeDeleteBtnTitle:(id)arg1 bgColor:(id)arg2;
- (void)customBtns:(id)arg1;
- (id)initWithDeleteSuccessBlock:(CDUnknownBlockType)arg1 failedBlock:(CDUnknownBlockType)arg2;

@end

