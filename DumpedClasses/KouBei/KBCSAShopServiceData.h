//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KBCSAToString.h"

@class NSArray, NSString;

@interface KBCSAShopServiceData : KBCSAToString
{
    NSString *_type;
    NSString *_showName;
    NSString *_logo;
    NSString *_alertTitle;
    NSArray *_textList;
}

+ (Class)textListElementClass;
@property(retain, nonatomic) NSArray *textList; // @synthesize textList=_textList;
@property(retain, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
@property(retain, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) NSString *showName; // @synthesize showName=_showName;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

