//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KTVSelectingAccView, KTVSelectingSongCell, NSArray, NSString, UITableViewCell;

@protocol KTVSelectingAccViewDataSource <NSObject>
- (_Bool)haveNewMore;
- (NSArray *)getBannerArray;
- (long long)numberOfThemes:(KTVSelectingAccView *)arg1;
- (NSString *)thameTitleFor:(KTVSelectingAccView *)arg1 atIndex:(long long)arg2;
- (NSString *)thameImageNameFor:(KTVSelectingAccView *)arg1 atIndex:(long long)arg2;
- (double)heightForRowAccView:(KTVSelectingAccView *)arg1 forAccompanyIndex:(long long)arg2;
- (UITableViewCell *)selectingAccView:(KTVSelectingAccView *)arg1 configureAccompanyCell:(KTVSelectingSongCell *)arg2 forAccompanyIndex:(long long)arg3;
- (long long)numberOfAccompanys:(KTVSelectingAccView *)arg1;
- (long long)tableType:(KTVSelectingAccView *)arg1;
@end
