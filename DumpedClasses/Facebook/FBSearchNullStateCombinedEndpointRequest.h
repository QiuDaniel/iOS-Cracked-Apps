//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBGraphQLDownloadRequest.h>

@class NSString;

@interface FBSearchNullStateCombinedEndpointRequest : FBGraphQLDownloadRequest
{
    NSString *_rankingModel;
    NSString *_suggestionSource;
}

- (void).cxx_destruct;
- (id)newQuery;
- (id)_sourceInfo;
- (id)initWithRankingModel:(id)arg1 suggestionSource:(id)arg2 targetID:(id)arg3 callbackPerformer:(id)arg4;

@end

