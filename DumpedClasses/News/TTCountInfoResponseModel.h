//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString, TTCountInfoResponseDataModel;

@interface TTCountInfoResponseModel : JSONModel
{
    NSString *_message;
    TTCountInfoResponseDataModel *_data;
}

@property(retain, nonatomic) TTCountInfoResponseDataModel *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;

@end

