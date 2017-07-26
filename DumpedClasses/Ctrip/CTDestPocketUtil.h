//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CTDestPocketUtil : NSObject
{
}

+ (long long)freeDiskSpaceBytes;
+ (id)decodeFromPercentEscapeString:(id)arg1;
+ (id)encodeToPercentEscapeString:(id)arg1;
+ (void)goToAllPockets:(id)arg1;
+ (void)goToPocketDetail:(id)arg1 sourceViewController:(id)arg2;
+ (id)readLocalFinishedImageArray:(id)arg1 containUpdate:(_Bool)arg2;
+ (void)recursiveSectionImages:(id)arg1 imageArray:(id)arg2 isFristLevel:(_Bool)arg3;
+ (id)readLocalJsonFileImages:(id)arg1 pocketId:(int)arg2 readUpdateData:(_Bool)arg3;
+ (void)recursiveSecondLevelId:(int)arg1 sourceId:(int)arg2 pagesArray:(id)arg3 findBlock:(CDUnknownBlockType)arg4;
+ (int)getSecondLevelId:(int)arg1 json:(id)arg2;
+ (id)pocketImagePath:(id)arg1 pocketId:(int)arg2;
+ (void)recursiveReplaceSectionImages:(id)arg1 pocketId:(int)arg2 isFristLevel:(_Bool)arg3;
+ (id)recursiveMutable:(id)arg1;
+ (_Bool)updateLocalJsonFileImagesPath:(id)arg1 pocketId:(int)arg2 readUpdateData:(_Bool)arg3;
+ (id)changeSizeToString:(int)arg1;
+ (id)getTotalSizeOfPocket:(id)arg1 pocketId:(int)arg2 readUpdateData:(_Bool)arg3;
+ (id)getSingleStrategyFromLocal:(int)arg1;
+ (void)cleanOldPockets;
+ (_Bool)isDownLoading:(int)arg1;

@end
