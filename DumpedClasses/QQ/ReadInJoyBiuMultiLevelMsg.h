//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface ReadInJoyBiuMultiLevelMsg : NSObject <NSCopying>
{
    NSMutableArray *_biuOneLevelItems;
    unsigned long long _originalFeedsId;
    unsigned long long _originalFeedsType;
}

+ (id)biuMultiLevelMsgFromDecoder:(struct CPBMessageDecoder *)arg1;
@property(nonatomic) unsigned long long originalFeedsType; // @synthesize originalFeedsType=_originalFeedsType;
@property(nonatomic) unsigned long long originalFeedsId; // @synthesize originalFeedsId=_originalFeedsId;
@property(retain, nonatomic) NSMutableArray *biuOneLevelItems; // @synthesize biuOneLevelItems=_biuOneLevelItems;
- (void)dealloc;
- (void)toEncoder:(struct CPBMessageEncoder *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
