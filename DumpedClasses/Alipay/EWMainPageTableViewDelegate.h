//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMergeSectionDelegate.h"

@class EWCategoryMenuDelegate, EWMainPageBannerDelegate, EWMainPageViewController, EWMainPageViewModel;

@interface EWMainPageTableViewDelegate : BaseMergeSectionDelegate
{
    EWMainPageViewController *_vc;
    EWMainPageBannerDelegate *_bannerDelegate;
    EWCategoryMenuDelegate *_categoryMenuDelegate;
}

@property(retain, nonatomic) EWCategoryMenuDelegate *categoryMenuDelegate; // @synthesize categoryMenuDelegate=_categoryMenuDelegate;
@property(retain, nonatomic) EWMainPageBannerDelegate *bannerDelegate; // @synthesize bannerDelegate=_bannerDelegate;
@property(nonatomic) __weak EWMainPageViewController *vc; // @synthesize vc=_vc;
- (void).cxx_destruct;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(retain, nonatomic) EWMainPageViewModel *viewModel;

@end

