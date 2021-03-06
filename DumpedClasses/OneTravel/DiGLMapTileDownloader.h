//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DiTileDownloadOperationDelegate.h"

@class NSOperationQueue, NSString;

@interface DiGLMapTileDownloader : NSObject <DiTileDownloadOperationDelegate>
{
    id <DiTileDownloadOperationDelegate> _delegate;
    NSOperationQueue *_tileDownloadQueue;
}

@property(retain, nonatomic) NSOperationQueue *tileDownloadQueue; // @synthesize tileDownloadQueue=_tileDownloadQueue;
@property(nonatomic) id <DiTileDownloadOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)operation:(id)arg1 didFinishWithData:(id)arg2;
- (void)addOperation:(id)arg1;
- (void)startDownload:(const char *)arg1 languageType:(int)arg2;
- (void)cancelAllOperation;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

