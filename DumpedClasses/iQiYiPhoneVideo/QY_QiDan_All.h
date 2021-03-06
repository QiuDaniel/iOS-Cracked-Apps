//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYDbBase.h"

@class NSString;

@interface QY_QiDan_All : QYDbBase
{
    int _needUpload;
    int _isDelete;
    NSString *_objId;
    NSString *_type;
    NSString *_current;
    NSString *_time;
    NSString *_isNew;
    NSString *_userID;
}

+ (id)get_offline_delete_arr:(id)arg1;
+ (void)set_all_offline_delete:(id)arg1;
+ (int)offline_delete_by_keys:(id)arg1 andMember:(id)arg2;
+ (int)offline_delete_by_key:(id)arg1 andMember:(id)arg2;
+ (id)getAllUnloadedArray:(id)arg1;
+ (void)resetAllUnloadedData:(id)arg1;
+ (long long)deleteItems:(id)arg1;
+ (long long)deleteItems:(id)arg1 withDB:(id)arg2;
+ (_Bool)deleteItem:(id)arg1 withDB:(id)arg2;
+ (_Bool)deleteAllWithUserId:(id)arg1;
+ (_Bool)deleteAllWithUserId:(id)arg1 withDB:(id)arg2;
+ (long long)deleteItemsWithobjId:(id)arg1;
+ (long long)deleteItemWithobjId:(id)arg1;
+ (long long)getCountWithUserId:(id)arg1;
+ (id)getInfoListWithUserId:(id)arg1;
+ (id)getInfoWithobjId:(id)arg1;
+ (long long)writeAll:(id)arg1 withDB:(id)arg2;
+ (long long)writeAll:(id)arg1;
+ (id)getObjectByResResult:(id)arg1;
+ (id)getDelQidanKey:(id)arg1;
+ (id)instanceWithAlbumId:(id)arg1 andTvId:(id)arg2 andSourceId:(id)arg3;
+ (id)instanceWithQidanBill:(id)arg1;
+ (void)mergeNetDataInDB:(id)arg1;
+ (id)parseForArray:(id)arg1;
@property(nonatomic) int isDelete; // @synthesize isDelete=_isDelete;
@property(nonatomic) int needUpload; // @synthesize needUpload=_needUpload;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *isNew; // @synthesize isNew=_isNew;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *current; // @synthesize current=_current;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *objId; // @synthesize objId=_objId;
- (void).cxx_destruct;
- (_Bool)writeObjectWithDB:(id)arg1;
- (long long)writeObjectInfo;
- (void)selfSetValues:(id)arg1;
- (id)description;
- (void)buildWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

