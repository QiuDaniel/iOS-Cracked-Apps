//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol QLJCEViewInfoProtocol <NSObject>
+ (NSString *)viewIdentifierWithJCEObject:(id)arg1 uInfo:(id <QLThumbCreationUserInfo>)arg2;
+ (_Bool)isObjectValidWithJCEObject:(id)arg1 uInfo:(id <QLThumbCreationUserInfo>)arg2;
+ (double)heightWithJCEObject:(id)arg1 uInfo:(id <QLThumbCreationUserInfo>)arg2;
- (void)setObject:(id)arg1;

@optional
- (void)setDelegate:(id)arg1 uInfo:(id <QLThumbCreationUserInfo>)arg2;
@end

