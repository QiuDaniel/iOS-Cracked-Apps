//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "QYPPCommonAppearanceProtocal-Protocol.h"

@class NSString;

@interface UIViewController (QYPPCommonAppearance) <QYPPCommonAppearanceProtocal>
@property(copy, nonatomic) NSString *qypp_customBackItemTitle;
@property(nonatomic) SEL qypp_customBackAction;
@property(nonatomic) id qypp_customBackTarget;
@property(nonatomic) _Bool qypp_needCustomBackAction;
@property(nonatomic) _Bool qypp_needCustomBackItem;
@property(nonatomic) _Bool qypp_hideNavigationBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

