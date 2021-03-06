//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UISearchBarDelegate.h"

@class FMFilterItemDO, FMFilterTabBarView, FMSearchBar, FMSearchMidViewComponent, NSString;

@interface FMSearchResultsBar : UIView <UISearchBarDelegate>
{
    _Bool _isShowFilter;
    FMSearchBar *_searchBar;
    UIView *_filterView;
    FMFilterTabBarView *_filterTabBarView;
    FMFilterItemDO *_locationTab;
    FMFilterItemDO *_comprehensiveTab;
    FMFilterItemDO *_publishTab;
    FMFilterItemDO *_distanceTab;
    FMFilterItemDO *_priceTab;
    FMSearchMidViewComponent *_searchMidViewComponent;
}

@property(retain, nonatomic) FMSearchMidViewComponent *searchMidViewComponent; // @synthesize searchMidViewComponent=_searchMidViewComponent;
@property(retain, nonatomic) FMFilterItemDO *priceTab; // @synthesize priceTab=_priceTab;
@property(retain, nonatomic) FMFilterItemDO *distanceTab; // @synthesize distanceTab=_distanceTab;
@property(retain, nonatomic) FMFilterItemDO *publishTab; // @synthesize publishTab=_publishTab;
@property(retain, nonatomic) FMFilterItemDO *comprehensiveTab; // @synthesize comprehensiveTab=_comprehensiveTab;
@property(retain, nonatomic) FMFilterItemDO *locationTab; // @synthesize locationTab=_locationTab;
@property(nonatomic) _Bool isShowFilter; // @synthesize isShowFilter=_isShowFilter;
@property(retain, nonatomic) FMFilterTabBarView *filterTabBarView; // @synthesize filterTabBarView=_filterTabBarView;
@property(retain, nonatomic) UIView *filterView; // @synthesize filterView=_filterView;
@property(retain, nonatomic) FMSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)getLocationInfo:(id)arg1 searchParameter:(id)arg2;
- (void)toSearchMidView;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (double)getFilterContentHeight;
- (void)goBackBtnClick;
- (void)filterButtonClick;
- (id)signalForQueryDetailWtihLocationId:(id)arg1;
- (void)bindComponent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

