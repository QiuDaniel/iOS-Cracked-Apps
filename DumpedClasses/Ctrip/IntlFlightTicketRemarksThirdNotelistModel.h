//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface IntlFlightTicketRemarksThirdNotelistModel : CTBusinessBean
{
    NSString *noteThirdTitle;
    int thirdTitleType;
    NSMutableArray *extendInforList;
}

@property(retain, nonatomic) NSMutableArray *extendInforList; // @synthesize extendInforList;
@property(nonatomic) int thirdTitleType; // @synthesize thirdTitleType;
@property(copy, nonatomic) NSString *noteThirdTitle; // @synthesize noteThirdTitle;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end
