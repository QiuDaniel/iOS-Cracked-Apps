//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber;

@protocol MRVoiceDetectorDelegate <NSObject>
- (void)voiceDetected:(NSArray *)arg1;
- (void)voiceDidStop:(NSNumber *)arg1;
- (void)voiceDidStart;
@end

