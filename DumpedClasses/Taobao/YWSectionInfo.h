//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFetchedResultsSectionInfo.h"

@class NSArray, NSString, YWIMCore;

@interface YWSectionInfo : NSObject <NSFetchedResultsSectionInfo>
{
    id <NSFetchedResultsSectionInfo> _nsInfo;
    CDUnknownBlockType _convertObjectBlock;
    YWIMCore *_imCore;
}

@property(nonatomic) __weak YWIMCore *imCore; // @synthesize imCore=_imCore;
@property(copy, nonatomic) CDUnknownBlockType convertObjectBlock; // @synthesize convertObjectBlock=_convertObjectBlock;
@property(retain, nonatomic) id <NSFetchedResultsSectionInfo> nsInfo; // @synthesize nsInfo=_nsInfo;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *objects;
@property(readonly, nonatomic) unsigned long long numberOfObjects;
@property(readonly, nonatomic) NSString *indexTitle;
@property(readonly, nonatomic) NSString *name;
- (id)initWithNSSectionInfo:(id)arg1 imCore:(id)arg2 convertObjectBlock:(CDUnknownBlockType)arg3;

@end

