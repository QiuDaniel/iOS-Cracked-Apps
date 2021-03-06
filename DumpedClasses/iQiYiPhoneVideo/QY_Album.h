//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYDbBase.h"

#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface QY_Album : QYDbBase <NSCoding>
{
    NSString *album_id;
    NSString *tags;
    long long aDuration;
    NSString *Title;
    NSString *Desc;
    long long Tv_Sets;
    NSString *Img;
    NSString *Directors;
    long long Purchase;
    long long Purchase_Type;
    long long Ip_Limit;
    long long Hot;
    long long New;
    long long Up;
    long long Voters;
    NSString *Year;
    long long Category_Id;
    NSString *Actors;
    long long Down;
    long long Download;
    NSString *Score;
    NSString *LedigRoles;
    NSString *CreateTime;
    NSString *Column;
    NSString *hadUpdateTvSet;
    NSString *tvfcs;
    NSString *v2_img;
    NSString *source;
    NSString *vv;
    long long av;
    NSString *c_st;
    NSString *_album_producer;
    NSString *_tv_producer;
    NSString *_tv_season;
    NSString *_tv_phase;
    NSString *re_reason;
    NSString *p_av;
    NSString *m_av;
    NSString *sub_title;
    NSString *logo;
    NSString *block_data;
    NSString *is_k;
    NSString *is_n2;
    NSString *vimg;
    NSString *sort;
    NSString *qitanid;
    NSString *fst_time;
    NSString *v3_img;
    NSString *blk;
    NSString *rec_cid;
    NSString *drm;
    NSString *logo_position;
    _Bool _vir;
    _Bool _has_more;
    _Bool _isFromB;
    int _is_ad;
    int _sub_status;
    int _tv_order;
    NSString *docid;
    NSString *ctype;
    NSString *adimg1;
    NSString *adimg2;
    NSString *open_p2p;
    NSString *open_p2p_down;
    NSString *pps_p2p;
    NSString *pps_p2p_down;
    NSString *p2pargs;
    NSString *p2p_pa;
    NSString *p2p_pa2;
    NSString *ts;
    NSString *tsh;
    NSString *dl_type;
    NSString *pps_url;
    NSString *f4v_url;
    NSString *cupid_ut;
    NSString *cupid_nw;
    NSString *cupid_expire;
    NSString *dl_ctrl;
    NSString *dl_level;
    NSString *_sns_score;
    NSString *_songname;
    NSString *_h1_img;
    NSString *_icourl;
    NSString *_site_id;
    NSString *_site_name;
    NSString *_video_url;
    NSArray *_topic_list;
    NSString *_open_type;
    NSString *_f_p;
    NSString *_upcl;
    NSString *_role_p;
    NSString *_role_desc;
    NSString *_role_title;
    NSString *_role_icourl;
    NSString *_rsource;
    NSString *_role_tvid;
    NSString *_h2_img;
    NSString *_fst_time2;
    NSString *_tvid;
    NSString *_logo_position;
    NSString *_z_img;
    NSString *_albumList;
    NSString *_signNumber;
    NSString *_weburl;
    NSString *_ad_imgh;
    NSString *_ad_imgv;
    NSString *_ad_title;
    NSString *__id;
    NSString *_is_zb;
    NSString *_language;
    NSString *_co_album_id;
    NSString *_cor_tv_id;
    NSString *_upderid;
    NSString *_upder_name;
    NSString *_upder_head;
    NSString *_upder_num_fans;
    NSString *_upder_verified;
    NSString *_upder_num_play;
    NSString *_bpt;
    NSString *_img220124;
    NSString *_up2;
    NSString *_down2;
    NSString *_vv2;
    NSString *_sn;
    NSString *_tab;
    NSString *_fileid;
    NSString *_pid;
    NSString *_tag;
    NSString *_efct;
    NSString *_cid;
    NSString *_size;
    NSString *_uper_id;
    NSString *_uper_name;
    NSString *_uptime;
    NSString *_qiyi_produce;
    NSArray *_topAlbums;
    NSString *_total_num;
    NSString *_update_time;
    NSString *_show_as_focus;
    NSString *_entity_id;
    NSString *_eAlbumFlag;
    NSString *_update_num;
    NSString *_more_path;
    NSString *_cpt_l;
    NSString *_cpt_r;
    NSString *_game_pic;
    NSString *_game_v_pic;
    NSString *_game_h_pic;
    NSString *_download_link;
    NSString *_program_package_name;
    NSString *_site_icon;
    NSString *_play_id;
    NSString *_load_img;
    NSString *_publishtime;
    NSString *_play_status;
    NSString *_disable;
    NSString *_cupid_app_on;
    NSString *_cupid_app_tab;
    NSString *_can_play;
    NSString *_play_aid;
    NSString *_play_tvid;
    NSString *_auth;
    NSString *_auth_error;
    NSString *_auth_msg;
    NSString *_buy_info;
    NSString *_prv;
    NSString *_previewType;
    NSString *_previewTime;
    NSString *_previewEpisodes;
    NSString *_disableMsg;
    NSString *_barrage;
    NSString *_barrage_lines;
    NSString *_is_vip;
    NSString *_show_time;
    NSString *_t_icon;
    NSString *_bTitle;
    NSString *_bAlbumTitle;
    NSString *_psp_error;
    NSString *_psp_msg;
    NSString *_ext_t;
}

+ (void)dispatch_global_aysnc:(CDUnknownBlockType)arg1;
+ (_Bool)saveDownloadInfoToLocalWithDic:(id)arg1;
+ (int)get_all_set:(id)arg1;
+ (id)get_album_name_by_albumid:(id)arg1;
+ (long long)get_category_by_albumid:(id)arg1;
+ (long long)_intoAlbumWithQueue:(id)arg1;
+ (long long)intoAlbum:(id)arg1;
+ (void)deleteAlbum:(id)arg1;
+ (id)get_album_object:(id)arg1;
+ (id)get_album_object:(id)arg1 withDB:(id)arg2;
+ (id)get_album_from:(id)arg1;
+ (id)get_object;
+ (id)tableName;
@property(copy, nonatomic) NSString *ext_t; // @synthesize ext_t=_ext_t;
@property(nonatomic) int tv_order; // @synthesize tv_order=_tv_order;
@property(copy, nonatomic) NSString *psp_msg; // @synthesize psp_msg=_psp_msg;
@property(copy, nonatomic) NSString *psp_error; // @synthesize psp_error=_psp_error;
@property(copy, nonatomic) NSString *bAlbumTitle; // @synthesize bAlbumTitle=_bAlbumTitle;
@property(copy, nonatomic) NSString *bTitle; // @synthesize bTitle=_bTitle;
@property(nonatomic) _Bool isFromB; // @synthesize isFromB=_isFromB;
@property(copy, nonatomic) NSString *t_icon; // @synthesize t_icon=_t_icon;
@property(nonatomic) int sub_status; // @synthesize sub_status=_sub_status;
@property(copy, nonatomic) NSString *show_time; // @synthesize show_time=_show_time;
@property(copy, nonatomic) NSString *is_vip; // @synthesize is_vip=_is_vip;
@property(copy, nonatomic) NSString *barrage_lines; // @synthesize barrage_lines=_barrage_lines;
@property(copy, nonatomic) NSString *barrage; // @synthesize barrage=_barrage;
@property(copy, nonatomic) NSString *disableMsg; // @synthesize disableMsg=_disableMsg;
@property(copy, nonatomic) NSString *previewEpisodes; // @synthesize previewEpisodes=_previewEpisodes;
@property(copy, nonatomic) NSString *previewTime; // @synthesize previewTime=_previewTime;
@property(copy, nonatomic) NSString *previewType; // @synthesize previewType=_previewType;
@property(copy, nonatomic) NSString *prv; // @synthesize prv=_prv;
@property(copy, nonatomic) NSString *buy_info; // @synthesize buy_info=_buy_info;
@property(copy, nonatomic) NSString *auth_msg; // @synthesize auth_msg=_auth_msg;
@property(copy, nonatomic) NSString *auth_error; // @synthesize auth_error=_auth_error;
@property(copy, nonatomic) NSString *auth; // @synthesize auth=_auth;
@property(copy, nonatomic) NSString *play_tvid; // @synthesize play_tvid=_play_tvid;
@property(copy, nonatomic) NSString *play_aid; // @synthesize play_aid=_play_aid;
@property(copy, nonatomic) NSString *can_play; // @synthesize can_play=_can_play;
@property(copy, nonatomic) NSString *cupid_app_tab; // @synthesize cupid_app_tab=_cupid_app_tab;
@property(copy, nonatomic) NSString *cupid_app_on; // @synthesize cupid_app_on=_cupid_app_on;
@property(copy, nonatomic) NSString *disable; // @synthesize disable=_disable;
@property(copy, nonatomic) NSString *play_status; // @synthesize play_status=_play_status;
@property(copy, nonatomic) NSString *publishtime; // @synthesize publishtime=_publishtime;
@property(copy, nonatomic) NSString *load_img; // @synthesize load_img=_load_img;
@property(copy, nonatomic) NSString *play_id; // @synthesize play_id=_play_id;
@property(copy, nonatomic) NSString *site_icon; // @synthesize site_icon=_site_icon;
@property(copy, nonatomic) NSString *program_package_name; // @synthesize program_package_name=_program_package_name;
@property(copy, nonatomic) NSString *download_link; // @synthesize download_link=_download_link;
@property(copy, nonatomic) NSString *game_h_pic; // @synthesize game_h_pic=_game_h_pic;
@property(copy, nonatomic) NSString *game_v_pic; // @synthesize game_v_pic=_game_v_pic;
@property(copy, nonatomic) NSString *game_pic; // @synthesize game_pic=_game_pic;
@property(copy, nonatomic) NSString *cpt_r; // @synthesize cpt_r=_cpt_r;
@property(copy, nonatomic) NSString *cpt_l; // @synthesize cpt_l=_cpt_l;
@property(nonatomic) _Bool has_more; // @synthesize has_more=_has_more;
@property(copy, nonatomic) NSString *more_path; // @synthesize more_path=_more_path;
@property(nonatomic) _Bool vir; // @synthesize vir=_vir;
@property(copy, nonatomic) NSString *update_num; // @synthesize update_num=_update_num;
@property(copy, nonatomic) NSString *eAlbumFlag; // @synthesize eAlbumFlag=_eAlbumFlag;
@property(copy, nonatomic) NSString *entity_id; // @synthesize entity_id=_entity_id;
@property(copy, nonatomic) NSString *show_as_focus; // @synthesize show_as_focus=_show_as_focus;
@property(copy, nonatomic) NSString *update_time; // @synthesize update_time=_update_time;
@property(copy, nonatomic) NSString *total_num; // @synthesize total_num=_total_num;
@property(copy, nonatomic) NSArray *topAlbums; // @synthesize topAlbums=_topAlbums;
@property(copy, nonatomic) NSString *qiyi_produce; // @synthesize qiyi_produce=_qiyi_produce;
@property(retain, nonatomic) NSString *uptime; // @synthesize uptime=_uptime;
@property(retain, nonatomic) NSString *uper_name; // @synthesize uper_name=_uper_name;
@property(retain, nonatomic) NSString *uper_id; // @synthesize uper_id=_uper_id;
@property(retain, nonatomic) NSString *size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(retain, nonatomic) NSString *efct; // @synthesize efct=_efct;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(copy, nonatomic) NSString *fileid; // @synthesize fileid=_fileid;
@property(copy, nonatomic) NSString *tab; // @synthesize tab=_tab;
@property(copy, nonatomic) NSString *sn; // @synthesize sn=_sn;
@property(copy, nonatomic) NSString *vv2; // @synthesize vv2=_vv2;
@property(copy, nonatomic) NSString *down2; // @synthesize down2=_down2;
@property(copy, nonatomic) NSString *up2; // @synthesize up2=_up2;
@property(copy, nonatomic) NSString *img220124; // @synthesize img220124=_img220124;
@property(copy, nonatomic) NSString *bpt; // @synthesize bpt=_bpt;
@property(copy, nonatomic) NSString *upder_num_play; // @synthesize upder_num_play=_upder_num_play;
@property(copy, nonatomic) NSString *upder_verified; // @synthesize upder_verified=_upder_verified;
@property(copy, nonatomic) NSString *upder_num_fans; // @synthesize upder_num_fans=_upder_num_fans;
@property(copy, nonatomic) NSString *upder_head; // @synthesize upder_head=_upder_head;
@property(copy, nonatomic) NSString *upder_name; // @synthesize upder_name=_upder_name;
@property(copy, nonatomic) NSString *upderid; // @synthesize upderid=_upderid;
@property(copy, nonatomic) NSString *cor_tv_id; // @synthesize cor_tv_id=_cor_tv_id;
@property(copy, nonatomic) NSString *co_album_id; // @synthesize co_album_id=_co_album_id;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(copy, nonatomic) NSString *is_zb; // @synthesize is_zb=_is_zb;
@property(copy, nonatomic) NSString *_id; // @synthesize _id=__id;
@property(copy, nonatomic) NSString *ad_title; // @synthesize ad_title=_ad_title;
@property(copy, nonatomic) NSString *ad_imgv; // @synthesize ad_imgv=_ad_imgv;
@property(copy, nonatomic) NSString *ad_imgh; // @synthesize ad_imgh=_ad_imgh;
@property(nonatomic) int is_ad; // @synthesize is_ad=_is_ad;
@property(copy, nonatomic) NSString *weburl; // @synthesize weburl=_weburl;
@property(copy, nonatomic) NSString *signNumber; // @synthesize signNumber=_signNumber;
@property(copy, nonatomic) NSString *albumList; // @synthesize albumList=_albumList;
@property(copy, nonatomic) NSString *z_img; // @synthesize z_img=_z_img;
@property(copy, nonatomic) NSString *logo_position; // @synthesize logo_position=_logo_position;
@property(copy, nonatomic) NSString *tvid; // @synthesize tvid=_tvid;
@property(copy, nonatomic) NSString *fst_time2; // @synthesize fst_time2=_fst_time2;
@property(copy, nonatomic) NSString *h2_img; // @synthesize h2_img=_h2_img;
@property(copy, nonatomic) NSString *role_tvid; // @synthesize role_tvid=_role_tvid;
@property(copy, nonatomic) NSString *rsource; // @synthesize rsource=_rsource;
@property(copy, nonatomic) NSString *role_icourl; // @synthesize role_icourl=_role_icourl;
@property(copy, nonatomic) NSString *role_title; // @synthesize role_title=_role_title;
@property(copy, nonatomic) NSString *role_desc; // @synthesize role_desc=_role_desc;
@property(copy, nonatomic) NSString *role_p; // @synthesize role_p=_role_p;
@property(copy, nonatomic) NSString *upcl; // @synthesize upcl=_upcl;
@property(copy, nonatomic) NSString *f_p; // @synthesize f_p=_f_p;
@property(copy, nonatomic) NSString *open_type; // @synthesize open_type=_open_type;
@property(retain, nonatomic) NSArray *topic_list; // @synthesize topic_list=_topic_list;
@property(copy, nonatomic) NSString *video_url; // @synthesize video_url=_video_url;
@property(copy, nonatomic) NSString *site_name; // @synthesize site_name=_site_name;
@property(copy, nonatomic) NSString *site_id; // @synthesize site_id=_site_id;
@property(copy, nonatomic) NSString *icourl; // @synthesize icourl=_icourl;
@property(copy, nonatomic) NSString *h1_img; // @synthesize h1_img=_h1_img;
@property(copy, nonatomic) NSString *songname; // @synthesize songname=_songname;
@property(copy, nonatomic) NSString *sns_score; // @synthesize sns_score=_sns_score;
@property(copy, nonatomic) NSString *dl_level; // @synthesize dl_level;
@property(copy, nonatomic) NSString *dl_ctrl; // @synthesize dl_ctrl;
@property(copy, nonatomic) NSString *cupid_expire; // @synthesize cupid_expire;
@property(copy, nonatomic) NSString *cupid_nw; // @synthesize cupid_nw;
@property(copy, nonatomic) NSString *cupid_ut; // @synthesize cupid_ut;
@property(copy, nonatomic) NSString *f4v_url; // @synthesize f4v_url;
@property(copy, nonatomic) NSString *pps_url; // @synthesize pps_url;
@property(copy, nonatomic) NSString *dl_type; // @synthesize dl_type;
@property(copy, nonatomic) NSString *tsh; // @synthesize tsh;
@property(copy, nonatomic) NSString *ts; // @synthesize ts;
@property(copy, nonatomic) NSString *p2p_pa2; // @synthesize p2p_pa2;
@property(copy, nonatomic) NSString *p2p_pa; // @synthesize p2p_pa;
@property(copy, nonatomic) NSString *p2pargs; // @synthesize p2pargs;
@property(copy, nonatomic) NSString *pps_p2p_down; // @synthesize pps_p2p_down;
@property(copy, nonatomic) NSString *pps_p2p; // @synthesize pps_p2p;
@property(copy, nonatomic) NSString *open_p2p_down; // @synthesize open_p2p_down;
@property(copy, nonatomic) NSString *open_p2p; // @synthesize open_p2p;
@property(copy, nonatomic) NSString *adimg2; // @synthesize adimg2;
@property(copy, nonatomic) NSString *adimg1; // @synthesize adimg1;
@property(copy, nonatomic) NSString *ctype; // @synthesize ctype;
@property(copy, nonatomic) NSString *drm; // @synthesize drm;
@property(copy, nonatomic) NSString *rec_cid; // @synthesize rec_cid;
@property(copy, nonatomic) NSString *blk; // @synthesize blk;
@property(copy, nonatomic) NSString *v3_img; // @synthesize v3_img;
@property(copy, nonatomic) NSString *fst_time; // @synthesize fst_time;
@property(copy, nonatomic) NSString *qitanid; // @synthesize qitanid;
@property(copy, nonatomic) NSString *docid; // @synthesize docid;
@property(copy, nonatomic) NSString *vimg; // @synthesize vimg;
@property(copy, nonatomic) NSString *sort; // @synthesize sort;
@property(copy, nonatomic) NSString *is_n2; // @synthesize is_n2;
@property(copy, nonatomic) NSString *is_k; // @synthesize is_k;
@property(retain, nonatomic) NSString *block_data; // @synthesize block_data;
@property(copy, nonatomic) NSString *logo; // @synthesize logo;
@property(copy, nonatomic) NSString *sub_title; // @synthesize sub_title;
@property(copy, nonatomic) NSString *m_av; // @synthesize m_av;
@property(copy, nonatomic) NSString *p_av; // @synthesize p_av;
@property(copy, nonatomic) NSString *re_reason; // @synthesize re_reason;
@property(copy, nonatomic) NSString *album_producer; // @synthesize album_producer=_album_producer;
@property(copy, nonatomic) NSString *tv_producer; // @synthesize tv_producer=_tv_producer;
@property(copy, nonatomic) NSString *tv_season; // @synthesize tv_season=_tv_season;
@property(copy, nonatomic) NSString *tv_phase; // @synthesize tv_phase=_tv_phase;
@property(copy, nonatomic) NSString *c_st; // @synthesize c_st;
@property(nonatomic) long long av; // @synthesize av;
@property(copy, nonatomic) NSString *album_id; // @synthesize album_id;
@property(copy, nonatomic) NSString *vv; // @synthesize vv;
@property(copy, nonatomic) NSString *source; // @synthesize source;
@property(copy, nonatomic) NSString *v2_img; // @synthesize v2_img;
@property(copy, nonatomic) NSString *tvfcs; // @synthesize tvfcs;
@property(copy, nonatomic) NSString *hadUpdateTvSet; // @synthesize hadUpdateTvSet;
@property(copy, nonatomic) NSString *Column; // @synthesize Column;
@property(copy, nonatomic) NSString *CreateTime; // @synthesize CreateTime;
@property(copy, nonatomic) NSString *LedigRoles; // @synthesize LedigRoles;
@property(copy, nonatomic) NSString *Score; // @synthesize Score;
@property(nonatomic) long long Download; // @synthesize Download;
@property(nonatomic) long long Down; // @synthesize Down;
@property(copy, nonatomic) NSString *Actors; // @synthesize Actors;
@property(nonatomic) long long Category_Id; // @synthesize Category_Id;
@property(copy, nonatomic) NSString *Year; // @synthesize Year;
@property(nonatomic) long long Voters; // @synthesize Voters;
@property(nonatomic) long long Up; // @synthesize Up;
@property(nonatomic) long long New; // @synthesize New;
@property(nonatomic) long long Hot; // @synthesize Hot;
@property(nonatomic) long long Ip_Limit; // @synthesize Ip_Limit;
@property(nonatomic) long long Purchase_Type; // @synthesize Purchase_Type;
@property(nonatomic) long long Purchase; // @synthesize Purchase;
@property(copy, nonatomic) NSString *Directors; // @synthesize Directors;
@property(copy, nonatomic) NSString *Img; // @synthesize Img;
@property(nonatomic) long long Tv_Sets; // @synthesize Tv_Sets;
@property(copy, nonatomic) NSString *Desc; // @synthesize Desc;
@property(copy, nonatomic) NSString *Title; // @synthesize Title;
@property(nonatomic) long long aDuration; // @synthesize aDuration;
@property(copy, nonatomic) NSString *tags; // @synthesize tags;
- (void).cxx_destruct;
- (void)dispatch_global_aysnc:(CDUnknownBlockType)arg1;
- (id)initOfflineAlbumWithDic:(id)arg1;
- (_Bool)updateDownloadInfo;
- (void)updateForOffline;
- (void)buildWithDictionary:(id)arg1 andAllAlbums:(id)arg2;
- (void)buildWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)description;
- (long long)writeAlbumToDB:(id)arg1;
- (long long)writeAlbum;
- (_Bool)getWithAlbumID:(id)arg1;
- (void)set_self_values:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;

@end

