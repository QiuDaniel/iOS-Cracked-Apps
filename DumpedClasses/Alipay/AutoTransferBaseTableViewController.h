//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APFundBaseController.h"

@class APWealthBaseTableView;

@interface AutoTransferBaseTableViewController : APFundBaseController
{
    _Bool _shouldBackToFundManager;
    APWealthBaseTableView *_listView;
}

@property(retain, nonatomic) APWealthBaseTableView *listView; // @synthesize listView=_listView;
@property(nonatomic) _Bool shouldBackToFundManager; // @synthesize shouldBackToFundManager=_shouldBackToFundManager;
- (void).cxx_destruct;
- (void)back;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

