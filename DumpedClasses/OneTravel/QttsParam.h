//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QttsParam : NSObject
{
    int _priority;
    int _messageType;
    NSString *_ttsString;
    NSString *_filePath;
}

+ (id)ttsParamWithString:(id)arg1 Priority:(int)arg2 Type:(int)arg3;
+ (id)ttsParamWithString:(id)arg1;
@property int messageType; // @synthesize messageType=_messageType;
@property int priority; // @synthesize priority=_priority;
@property(retain) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain) NSString *ttsString; // @synthesize ttsString=_ttsString;
- (void).cxx_destruct;
- (id)description;
- (id)baseTTSParam;

@end
