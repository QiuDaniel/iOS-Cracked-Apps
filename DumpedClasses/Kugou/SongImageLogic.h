//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KGImageCache, NSCondition, NSMutableArray, NSOperationQueue;

@interface SongImageLogic : NSObject
{
    NSOperationQueue *httpQueue;
    NSMutableArray *arrthreadNoOnQueue;
    NSCondition *threadLock;
    NSMutableArray *arrSongImageThread;
    NSMutableArray *arrSameThread;
    KGImageCache *_imageCache;
}

+ (id)fitArtistsName:(id)arg1;
+ (id)fitArtistName:(id)arg1;
+ (id)tokenArtistName:(id)arg1;
+ (id)ShareInstance;
@property(retain, nonatomic) KGImageCache *imageCache; // @synthesize imageCache=_imageCache;
- (void).cxx_destruct;
- (id)imageWithFileName:(id)arg1;
- (id)pathFromImagePath:(id)arg1;
- (_Bool)isKgImageFileExist:(id)arg1;
- (_Bool)writeFileToImagePath:(id)arg1 with:(id)arg2;
- (void)OnThreadFinish:(id)arg1;
- (void)StartNext;
- (void)CancelGetSongDelegate:(id)arg1;
- (void)CancelGetSongImage:(id)arg1;
- (id)GetSongImage:(id)arg1 andDelegate:(id)arg2;
- (id)GetSongImage:(id)arg1 andDelegate:(id)arg2 imageSourceType:(long long)arg3;
- (id)GetSongImage:(id)arg1 andDelegate:(id)arg2 manualSearchImageSingerName:(id)arg3 askUserWifiOnly:(_Bool)arg4;
- (id)GetSongImage:(id)arg1 andDelegate:(id)arg2 imageSourceType:(long long)arg3 askUserWifiOnly:(_Bool)arg4;
- (id)GetSongImageUseAsiHttp:(id)arg1 andDelegate:(id)arg2 imageSourceType:(long long)arg3 askUserWifiOnly:(_Bool)arg4 manualSearchImageSingerName:(id)arg5;
- (void)dealloc;
- (id)init;

@end

