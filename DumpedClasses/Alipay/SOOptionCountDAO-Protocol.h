//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDAOProtocol.h"

@class APDAOResult, NSArray;

@protocol SOOptionCountDAO <APDAOProtocol>
- (NSArray *)daoSelectOptionCountList:(NSArray *)arg1;
- (APDAOResult *)daoUpdateOptionCountList:(NSArray *)arg1;
- (NSArray *)daoSelectCardOptionCountList:(NSArray *)arg1;
- (APDAOResult *)daoDeleteOptionCountList:(NSArray *)arg1;
- (APDAOResult *)daoInsertOptionCountList:(NSArray *)arg1;
@end
