//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBTDEventContext : NSObject
{
    id _pslf;
    id _data;
    CDUnknownBlockType _callback;
}

+ (id)contextWithPslf:(id)arg1 data:(id)arg2 callback:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(nonatomic) __weak id pslf; // @synthesize pslf=_pslf;
- (void).cxx_destruct;

@end

