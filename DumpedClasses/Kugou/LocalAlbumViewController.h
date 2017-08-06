//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "KGLocalFileSheetControllerDelegate.h"
#import "KGMusicTableCellPlayStateDelegate.h"
#import "KGMusicTableViewAdapterDataSource.h"
#import "KGMusicTableViewAdapterDelegate.h"
#import "KGMusicTableViewPlayingCellDelegate.h"
#import "UISearchBarDelegate.h"

@class AlbumInfo, KGMusicControlNewControler, KGMusicPlayingCellExposureStatistis, KGMusicTableViewAdapter, KGSearchNoResultView, KGThemeButton, KGThemeLabel, NSMutableArray, NSString, UIView;

@interface LocalAlbumViewController : KGViewController <KGMusicTableViewAdapterDataSource, KGMusicTableViewAdapterDelegate, KGMusicTableCellPlayStateDelegate, UISearchBarDelegate, KGMusicTableViewPlayingCellDelegate, KGLocalFileSheetControllerDelegate>
{
    KGThemeLabel *_footViewLable;
    KGThemeButton *_infoBtn;
    AlbumInfo *_albumInfo;
    NSMutableArray *_m_delsongs;
    UIView *_tableHeaderView;
    UIView *_albumInfoView;
    NSMutableArray *_albumLocalMusicArray;
    KGMusicTableViewAdapter *_tableViewAdapter;
    KGMusicControlNewControler *_musicControlView;
    KGSearchNoResultView *_noSearchResultView;
    KGThemeButton *_playAllBtn;
    UIView *_searchAndLocateView;
    KGMusicPlayingCellExposureStatistis *_exposureStatistis;
}

@property(retain, nonatomic) KGMusicPlayingCellExposureStatistis *exposureStatistis; // @synthesize exposureStatistis=_exposureStatistis;
@property(retain, nonatomic) UIView *searchAndLocateView; // @synthesize searchAndLocateView=_searchAndLocateView;
@property(nonatomic) __weak KGThemeButton *playAllBtn; // @synthesize playAllBtn=_playAllBtn;
@property(retain, nonatomic) KGSearchNoResultView *noSearchResultView; // @synthesize noSearchResultView=_noSearchResultView;
@property(retain, nonatomic) KGMusicControlNewControler *musicControlView; // @synthesize musicControlView=_musicControlView;
@property(retain, nonatomic) KGMusicTableViewAdapter *tableViewAdapter; // @synthesize tableViewAdapter=_tableViewAdapter;
@property(retain, nonatomic) NSMutableArray *albumLocalMusicArray; // @synthesize albumLocalMusicArray=_albumLocalMusicArray;
@property(retain, nonatomic) UIView *albumInfoView; // @synthesize albumInfoView=_albumInfoView;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) NSMutableArray *m_delsongs; // @synthesize m_delsongs=_m_delsongs;
@property(retain, nonatomic) AlbumInfo *albumInfo; // @synthesize albumInfo=_albumInfo;
- (void).cxx_destruct;
- (void)refreshNotFilevisibleCells;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)dealloc;
- (void)refreshNotFileCell:(id)arg1;
- (void)refreshDataAfterRecoverSongInfo:(id)arg1;
- (void)localMusicDidChangeNotification:(id)arg1;
- (void)playAllSong;
- (void)sendPlayNext;
- (void)sendPlayNextNotify;
- (void)batchLocalFileDeleteProc:(id)arg1;
- (void)removeAlertOnMainUI;
- (void)doSongsReMoveOnThread:(_Bool)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)deleteConfirm:(id)arg1;
- (void)deleteSongs:(id)arg1;
- (void)deleteSong:(id)arg1;
- (void)p_clickSingerWithPlayingCell:(id)arg1 isFromSingerHead:(_Bool)arg2;
- (void)playingCell:(id)arg1 didShowFunctionItemWithItemTag:(unsigned long long)arg2 isCellRefreshStage:(_Bool)arg3;
- (void)playingCell:(id)arg1 didClickFunctionItemWithItemTag:(unsigned long long)arg2;
- (_Bool)playingCell:(id)arg1 isNeedAutoDoActionWithItemTag:(unsigned long long)arg2;
- (_Bool)checkNextSongInfoIsPlayingWithCurrentIndexPath:(id)arg1;
- (_Bool)checkIsPlayingWithSongInfo:(id)arg1;
- (_Bool)isMusicTableCellPlayingState:(id)arg1;
- (void)fileNotExsitActionSheetDeleteButtonClicked:(id)arg1;
- (void)playSongAtOnce:(id)arg1 tableView:(id)arg2 didSelectRowAtIndexPath:(id)arg3;
- (id)playingCell:(id)arg1 functionItemsWithSongInfo:(id)arg2;
- (id)createMusicPlayingCellWithTableView:(id)arg1 SongInfo:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 menuArrayWidthForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 isCheckBoxStyle:(_Bool)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updataRowInfosDic:(id)arg1 needRefresh:(_Bool)arg2;
- (void)infoViewTapped;
- (void)hideSearchAndLocateView;
- (void)resignSearchViewFirstResponder;
- (void)cancelSearch;
- (void)searchButtonClicked;
- (void)didReceiveMemoryWarning;
- (void)KGUsingControllerState:(int)arg1;
- (void)reloadDataSource;
- (void)onChangeTheme:(id)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
