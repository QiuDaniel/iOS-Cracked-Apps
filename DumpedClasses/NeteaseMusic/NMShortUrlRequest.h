//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMHttpRequest.h"

@class NSString;

@interface NMShortUrlRequest : NMHttpRequest
{
    NSString *_originUrl;
}

@property(retain, nonatomic) NSString *originUrl; // @synthesize originUrl=_originUrl;
- (void)dealloc;
- (id)initWithOriginUrl:(id)arg1;

@end
