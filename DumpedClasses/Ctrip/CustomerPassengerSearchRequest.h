//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@interface CustomerPassengerSearchRequest : CTBusinessBean
{
    int serviceVersion;
    int businessType;
    int inforID;
    int pageIndex;
}

@property(nonatomic) int pageIndex; // @synthesize pageIndex;
@property(nonatomic) int inforID; // @synthesize inforID;
@property(nonatomic) int businessType; // @synthesize businessType;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion;
- (id)getAnnotationArray;
- (id)init;

@end

