//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class NSArray<FALocation>, NSString;

@interface FALocationChange : FAModel
{
    NSString *_status;
    NSArray<FALocation> *_result;
}

@property(retain, nonatomic) NSArray<FALocation> *result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

