//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray<ONEApoloSubItem>, NSNumber, NSString;

@interface ONEApoloSwitchModel : JSONModel
{
    NSNumber *_code;
    NSString *_msg;
    NSString *_ns;
    NSString *_key;
    NSString *_md5;
    NSArray<ONEApoloSubItem> *_data;
}

@property(copy, nonatomic) NSArray<ONEApoloSubItem> *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *ns; // @synthesize ns=_ns;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(copy, nonatomic) NSNumber *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)arg1;

@end

