//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMEmotionDownloader, NSMutableArray, NSMutableDictionary;

@interface FMEmotionManager : NSObject
{
    CDUnknownBlockType _progressChangeBlock;
    unsigned long long _currentCategoryIndex;
    NSMutableArray *_faceCategoryArray;
    NSMutableArray *_defaultFaceCategoryArray;
    NSMutableArray *_remoteFaceCategoryArray;
    NSMutableArray *_historyFacesArray;
    FMEmotionDownloader *_downLoader;
    NSMutableDictionary *_dowloadingEvent;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *dowloadingEvent; // @synthesize dowloadingEvent=_dowloadingEvent;
@property(retain, nonatomic) FMEmotionDownloader *downLoader; // @synthesize downLoader=_downLoader;
@property(retain, nonatomic) NSMutableArray *historyFacesArray; // @synthesize historyFacesArray=_historyFacesArray;
@property(retain, nonatomic) NSMutableArray *remoteFaceCategoryArray; // @synthesize remoteFaceCategoryArray=_remoteFaceCategoryArray;
@property(retain, nonatomic) NSMutableArray *defaultFaceCategoryArray; // @synthesize defaultFaceCategoryArray=_defaultFaceCategoryArray;
@property(retain, nonatomic) NSMutableArray *faceCategoryArray; // @synthesize faceCategoryArray=_faceCategoryArray;
@property(nonatomic) unsigned long long currentCategoryIndex; // @synthesize currentCategoryIndex=_currentCategoryIndex;
@property(copy, nonatomic) CDUnknownBlockType progressChangeBlock; // @synthesize progressChangeBlock=_progressChangeBlock;
- (void).cxx_destruct;
- (void)onEventDownloadProgressForIndex:(long long)arg1 ChangeBlock:(CDUnknownBlockType)arg2;
- (id)downLoadedFacesForIndex:(unsigned long long)arg1;
- (void)startDownLoadForIndex:(unsigned long long)arg1;
- (_Bool)isDownloadedForIndex:(unsigned long long)arg1;
- (id)facesDataForIndex:(unsigned long long)arg1 AtPage:(unsigned long long)arg2;
- (id)facesDataForIndex:(unsigned long long)arg1;
- (unsigned long long)pageCountForFaceIndex:(unsigned long long)arg1;
- (id)downLoadedFacesForCurrentIndex;
- (void)startDownLoadForCurrentIndex;
- (_Bool)isDownloadedForCurrentIndex;
- (id)iconNameForAlias:(id)arg1;
- (void)addFaceToHistory:(id)arg1;
- (id)faceCategoryDOForIndex:(unsigned long long)arg1;
- (id)currentFaceCategoryDO;
- (id)currentFacesForPageIndex:(unsigned long long)arg1;
- (unsigned long long)currnetFacesPageCount;
- (id)currentFaces;
- (id)getEmojiArray;
- (void)loadEmotionImage:(id)arg1;
- (id)init;

@end

