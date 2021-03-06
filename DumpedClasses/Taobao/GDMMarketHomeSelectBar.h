//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, UIButton, UIColor, UIScrollView, WXSDKInstance;

@interface GDMMarketHomeSelectBar : UIView
{
    UIScrollView *_interestSelectedView;
    NSArray *_selectItemArray;
    UIView *_intersetSelectedMarkView;
    NSMutableArray *_interestSelectedButtonArray;
    unsigned long long _currentSelectedIndex;
    UIButton *_lastSelectInterestButton;
    UIColor *_styleColor;
    UIView *_cutLine;
    WXSDKInstance *_instance;
    id <GDMMarketHomeSelectBarDelegate> _delegate;
}

+ (id)marketSelectBar;
@property __weak id <GDMMarketHomeSelectBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollToSelectByIndex:(int)arg1;
- (void)setItemArray:(id)arg1;
- (void)reloadInterestByIndex:(long long)arg1;
- (void)setChannelColor:(id)arg1;
- (void)onBarItemDidSelectedCallBack:(id)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (void)setInterestButton:(id)arg1 isSelected:(_Bool)arg2;
- (id)labelFromInterestButton:(id)arg1;
- (void)createBarWithItem;
- (void)sendSynchronousRequest:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)createWeexBackground;
- (id)selectionView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

