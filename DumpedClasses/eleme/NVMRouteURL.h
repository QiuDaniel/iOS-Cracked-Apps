//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSURL, NVMRouterRegularExpression;

@interface NVMRouteURL : NSObject
{
    NSURL *_URL;
    NSDictionary *_params;
    NSDictionary *_routeParameters;
    NSDictionary *_queryParameters;
    NSDictionary *_fragmentParameters;
    NSString *_routeScheme;
    NVMRouterRegularExpression *_regexMatcher;
}

+ (id)routeURLWithRoute:(id)arg1 url:(id)arg2;
@property(retain, nonatomic) NVMRouterRegularExpression *regexMatcher; // @synthesize regexMatcher=_regexMatcher;
@property(copy, nonatomic) NSString *routeScheme; // @synthesize routeScheme=_routeScheme;
@property(readonly, copy, nonatomic) NSDictionary *fragmentParameters; // @synthesize fragmentParameters=_fragmentParameters;
@property(readonly, copy, nonatomic) NSDictionary *queryParameters; // @synthesize queryParameters=_queryParameters;
@property(readonly, copy, nonatomic) NSDictionary *routeParameters; // @synthesize routeParameters=_routeParameters;
@property(readonly, copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithRoute:(id)arg1 url:(id)arg2;

@end
