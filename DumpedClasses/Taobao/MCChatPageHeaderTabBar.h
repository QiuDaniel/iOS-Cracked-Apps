//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface MCChatPageHeaderTabBar : UIView
{
    id <MCChatPageHeaderTabBarDelegate> _delegate;
    NSMutableArray *_tabBarItemViews;
    NSMutableArray *_tabBarItems;
    NSMutableArray *_tabBarVerticalViews;
}

@property(retain, nonatomic) NSMutableArray *tabBarVerticalViews; // @synthesize tabBarVerticalViews=_tabBarVerticalViews;
@property(retain, nonatomic) NSMutableArray *tabBarItems; // @synthesize tabBarItems=_tabBarItems;
@property(retain, nonatomic) NSMutableArray *tabBarItemViews; // @synthesize tabBarItemViews=_tabBarItemViews;
@property(nonatomic) __weak id <MCChatPageHeaderTabBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)distributeSpacingHorizontallyWithViews:(id)arg1;
- (void)clickedButton:(id)arg1;
- (void)updateTabBarItems:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end
