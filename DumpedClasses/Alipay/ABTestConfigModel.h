//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface ABTestConfigModel : NSObject
{
    NSMutableArray *_sourceConfigArray;
    NSMutableDictionary *_experimentDictionary;
    NSMutableDictionary *_spmidDictionary;
}

+ (id)convertSpmidsWithArray:(id)arg1;
+ (id)convertExperimentsWithArray:(id)arg1;
+ (void)filterArray:(id)arg1;
- (void).cxx_destruct;
- (id)experimentIds;
- (void)reset;
- (void)updateWithArray:(id)arg1;
- (id)allSpmidDictionary;
- (id)allExperimentDictionary;
- (id)init;

@end

