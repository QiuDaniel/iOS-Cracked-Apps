//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSURL;

@interface ALURLEvent : NSObject
{
    _Bool _launch;
    long long _channel;
    NSURL *_url;
    NSString *_URLScheme;
    NSString *_URLIdentifier;
    NSString *_module;
    NSString *_submodule;
    NSString *_action;
    NSDictionary *_queryDict;
    NSDictionary *_userInfo;
    long long _sceneType;
    NSString *_sourceApplication;
    long long _applicationState;
    CDUnknownBlockType _progress;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType progress; // @synthesize progress=_progress;
@property(nonatomic) long long applicationState; // @synthesize applicationState=_applicationState;
@property(retain, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
@property(nonatomic) long long sceneType; // @synthesize sceneType=_sceneType;
@property(nonatomic) _Bool launch; // @synthesize launch=_launch;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSDictionary *queryDict; // @synthesize queryDict=_queryDict;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *submodule; // @synthesize submodule=_submodule;
@property(copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(copy, nonatomic) NSString *URLIdentifier; // @synthesize URLIdentifier=_URLIdentifier;
@property(copy, nonatomic) NSString *URLScheme; // @synthesize URLScheme=_URLScheme;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) long long channel; // @synthesize channel=_channel;
- (void).cxx_destruct;
- (id)dictionaryFromQuery:(id)arg1 usingEncoding:(unsigned long long)arg2;
- (id)initWithOpenURL:(id)arg1 source:(id)arg2 annotation:(id)arg3 userInfo:(id)arg4 launch:(_Bool)arg5;
- (id)initWithOpenURL:(id)arg1 source:(id)arg2 annotation:(id)arg3 userInfo:(id)arg4 launch:(_Bool)arg5 applicationState:(long long)arg6;
- (id)pathComponentWithIndex:(long long)arg1;
- (id)initWithInsideURL:(id)arg1 userInfo:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;

@end

