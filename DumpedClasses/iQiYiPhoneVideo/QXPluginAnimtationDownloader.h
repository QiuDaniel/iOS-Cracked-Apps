//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface QXPluginAnimtationDownloader : NSObject
{
    NSString *_saveFolderPath;
    NSString *_directoriesInDomains;
    NSString *_folderName;
    CDUnknownBlockType _completedBlock;
    long long _currentRetryCount;
    _Bool _downLoading;
    NSString *_filename;
    NSString *_filePath;
    NSURL *_url;
    long long _retryCount;
}

+ (id)sharedDownloader;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly, copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, nonatomic, getter=isDownLoading) _Bool downLoading; // @synthesize downLoading=_downLoading;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *directoriesInDomains;
@property(copy, nonatomic) NSString *folderName;
- (id)saveFolderPath;
- (void)start;
- (void)downloadFinishWithError:(id)arg1;
- (void)downloadAnimationWithURL:(id)arg1 filename:(id)arg2 completed:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end

