//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface HotPicListCacheCollection : NSObject
{
    _Bool _hasDirtyData;
    NSMutableDictionary *_picListDic;
    unsigned long long _tagId;
    NSString *_versionPath;
    unsigned long long _listCount;
}

@property(nonatomic) _Bool hasDirtyData; // @synthesize hasDirtyData=_hasDirtyData;
@property(nonatomic) unsigned long long listCount; // @synthesize listCount=_listCount;
@property(copy, nonatomic) NSString *versionPath; // @synthesize versionPath=_versionPath;
@property(nonatomic) unsigned long long tagId; // @synthesize tagId=_tagId;
@property(readonly, retain, nonatomic) NSMutableDictionary *picListDic; // @synthesize picListDic=_picListDic;
- (void)flushCacheToFile;
- (void)saveAll;
- (void)updateListCount:(unsigned long long)arg1 endIndex:(unsigned long long)arg2 picList:(id)arg3;
- (void)updateCacheByStartIndex:(unsigned long long)arg1 endIndex:(unsigned long long)arg2 picList:(id)arg3;
- (void)getCacheStartIndex:(unsigned long long)arg1 endIndex:(unsigned long long)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)getCachePath:(unsigned long long)arg1;
- (id)getTagPath;
- (void)dealloc;
- (id)initWithTagId:(unsigned long long)arg1 version:(unsigned long long)arg2;

@end

