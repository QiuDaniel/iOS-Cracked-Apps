//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONDataManager.h"

@class QYCinemaMovieSessionData, QYCinemaMovieSessionRequest;

@interface QYCinemaMovieSessionManager : JSONDataManager
{
    QYCinemaMovieSessionRequest *_request;
    QYCinemaMovieSessionData *_cacheData;
}

@property(retain, nonatomic) QYCinemaMovieSessionData *cacheData; // @synthesize cacheData=_cacheData;
@property(retain, nonatomic) QYCinemaMovieSessionRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)loadData;
- (double)maxValidityPeriod;
- (_Bool)shouldFetchRemote;
- (void)fetchLocalData;
- (void)fetchRemoteData;
- (_Bool)saveToLocal;
- (id)cacheFileID;
- (void)saveCacheData;
- (void)messageRequestDidFailed:(id)arg1;
- (void)messageRequestDidFinish:(id)arg1;
- (void)requestData;
- (void)cancel;
- (id)init;

@end

