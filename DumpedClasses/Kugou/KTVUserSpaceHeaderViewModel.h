//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFViewModelObject.h"

@class FollowManagerViewController, GetRelationBLL, KTV_LocalWorkDBMgr, KTV_SelectedSongDBMgr, KtvUserInfoHttpDAO, PersonalInfoBLL;

@interface KTVUserSpaceHeaderViewModel : KFViewModelObject
{
    int _userID;
    KtvUserInfoHttpDAO *_infoDAO;
    PersonalInfoBLL *_personalbBaseInfoBLL;
    PersonalInfoBLL *_personalDetailInfoBLL;
    GetRelationBLL *_relationBll;
    FollowManagerViewController *_followManager;
    KTV_SelectedSongDBMgr *_selectedSongDBMr;
    KTV_LocalWorkDBMgr *_localWorkDBMr;
    struct CLLocationCoordinate2D _lbsCoordinate;
}

@property(retain, nonatomic) KTV_LocalWorkDBMgr *localWorkDBMr; // @synthesize localWorkDBMr=_localWorkDBMr;
@property(retain, nonatomic) KTV_SelectedSongDBMgr *selectedSongDBMr; // @synthesize selectedSongDBMr=_selectedSongDBMr;
@property(retain, nonatomic) FollowManagerViewController *followManager; // @synthesize followManager=_followManager;
@property(retain, nonatomic) GetRelationBLL *relationBll; // @synthesize relationBll=_relationBll;
@property(retain, nonatomic) PersonalInfoBLL *personalDetailInfoBLL; // @synthesize personalDetailInfoBLL=_personalDetailInfoBLL;
@property(retain, nonatomic) PersonalInfoBLL *personalbBaseInfoBLL; // @synthesize personalbBaseInfoBLL=_personalbBaseInfoBLL;
@property(retain, nonatomic) KtvUserInfoHttpDAO *infoDAO; // @synthesize infoDAO=_infoDAO;
@property(nonatomic) struct CLLocationCoordinate2D lbsCoordinate; // @synthesize lbsCoordinate=_lbsCoordinate;
@property(nonatomic) int userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (void)setRespDict:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)userInfoDAO;
- (void)configBaseProperty;
- (void)checkAndGetLBSInfoSuccess:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;
- (void)requestUserFollowOperationWithType:(int)arg1 Successed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)getRelationshipBetPlayerAndSpaceOwnerSuccessed:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (void)updateUserAlbumsWithNotification:(id)arg1 Successed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)loadUserAlbumImagesSuccessed:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (void)getPlayerAttachInfoWithSucceed:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (void)getDistBetPlayerAndSpaceOwnerSuccessed:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (long long)localSongNum;
- (long long)accompanimentNum;
- (void)updateUserAllInfoNumSuccessed:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (void)updateUserSpaceHeaderImageWithURL:(id)arg1 successed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3 infoCompletion:(_Bool)arg4;
- (void)loadUserSpaceDetailInfoSuccessed:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (void)loadUserSpaceHeaderInfoSuccessed:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (void)checkKTVLoginStateWithLoadUserInfoSuccessed:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (id)initWithUserID:(int)arg1;
- (id)init;

@end

