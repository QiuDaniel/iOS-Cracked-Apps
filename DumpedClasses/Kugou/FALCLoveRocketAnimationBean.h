//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class FALCLoveAnimationBean, FALCRocketAnimationBean;

@interface FALCLoveRocketAnimationBean : FAModel
{
    long long _animationType;
    FALCRocketAnimationBean *_rocket;
    FALCLoveAnimationBean *_love;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) FALCLoveAnimationBean *love; // @synthesize love=_love;
@property(retain, nonatomic) FALCRocketAnimationBean *rocket; // @synthesize rocket=_rocket;
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
- (void).cxx_destruct;

@end
