//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBCreatorStatusToolbox-Protocol.h"
#import "FBVideoHomeToolboxProtocol-Protocol.h"

@class FBCreatorStatusSubscriptionHandler, FBFeedToolbox, FBUserSession, FBVideoHomeActiveVPVDTracker, FBVideoHomeAutoplayController, FBVideoHomeExperimentConfig, FBVideoHomeNuxController, FBVideoHomePlaylistItemProvider, FBVideoHomeSessionController, FBVideoHomeVPVTracker, NSString;
@protocol FBIntentHandler, FBNavigationCoordinator, FBVideoHomeNotificationsSeenStateModifierProtocol;

@interface FBVideoHomeToolbox : NSObject <FBCreatorStatusToolbox, FBVideoHomeToolboxProtocol>
{
    FBVideoHomeAutoplayController *_autoplayController;
    FBVideoHomeSessionController *_videoHomeSessionController;
    FBVideoHomeVPVTracker *_vpvTracker;
    id <FBVideoHomeNotificationsSeenStateModifierProtocol> _seenStateModifier;
    FBUserSession *_session;
    id <FBNavigationCoordinator> _navigationCoordinator;
    FBFeedToolbox *_feedToolbox;
    id <FBIntentHandler> _intentHandler;
    NSString *_analyticsModule;
    FBVideoHomeExperimentConfig *_videoHomeExperimentConfig;
    FBVideoHomePlaylistItemProvider *_playlistItemProvider;
    FBVideoHomeNuxController *_nuxController;
    FBCreatorStatusSubscriptionHandler *_creatorStatusSubscriptionHandler;
    FBVideoHomeActiveVPVDTracker *_activeVPVDTracker;
}

+ (id)toolboxWithSession:(id)arg1 scenePath:(id)arg2 intentHandler:(id)arg3 navigationCoordinator:(id)arg4 analyticsModule:(id)arg5 videoHomeSessionController:(id)arg6 nuxController:(id)arg7 autoplayController:(id)arg8 seenStateManagerModifier:(id)arg9;
@property(retain, nonatomic) FBVideoHomeActiveVPVDTracker *activeVPVDTracker; // @synthesize activeVPVDTracker=_activeVPVDTracker;
@property(retain, nonatomic) FBCreatorStatusSubscriptionHandler *creatorStatusSubscriptionHandler; // @synthesize creatorStatusSubscriptionHandler=_creatorStatusSubscriptionHandler;
@property(readonly, nonatomic) FBVideoHomeNuxController *nuxController; // @synthesize nuxController=_nuxController;
@property(readonly, nonatomic) FBVideoHomePlaylistItemProvider *playlistItemProvider; // @synthesize playlistItemProvider=_playlistItemProvider;
@property(readonly, nonatomic) FBVideoHomeExperimentConfig *videoHomeExperimentConfig; // @synthesize videoHomeExperimentConfig=_videoHomeExperimentConfig;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) id <FBIntentHandler> intentHandler; // @synthesize intentHandler=_intentHandler;
@property(readonly, nonatomic) FBFeedToolbox *feedToolbox; // @synthesize feedToolbox=_feedToolbox;
@property(readonly, nonatomic) id <FBNavigationCoordinator> navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) id <FBVideoHomeNotificationsSeenStateModifierProtocol> seenStateModifier; // @synthesize seenStateModifier=_seenStateModifier;
@property(readonly, nonatomic) FBVideoHomeVPVTracker *vpvTracker; // @synthesize vpvTracker=_vpvTracker;
@property(readonly, nonatomic) FBVideoHomeSessionController *videoHomeSessionController; // @synthesize videoHomeSessionController=_videoHomeSessionController;
@property(readonly, nonatomic) FBVideoHomeAutoplayController *autoplayController; // @synthesize autoplayController=_autoplayController;
- (void).cxx_destruct;
- (unsigned long long)layoutIdiom;
- (id)initWithSession:(id)arg1 scenePath:(id)arg2 intentHandler:(id)arg3 navigationCoordinator:(id)arg4 analyticsModule:(id)arg5 videoHomeSessionController:(id)arg6 nuxController:(id)arg7 autoplayController:(id)arg8 seenStateManagerModifier:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

