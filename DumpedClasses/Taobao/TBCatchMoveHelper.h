//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBCatchMoveAnalaze;

@interface TBCatchMoveHelper : NSObject
{
    struct mach_timebase_info timeInfo;
    _Bool _lastMoveIsQuick;
    _Bool _isMachTime;
    CDUnknownBlockType _moveCallback;
    CDUnknownBlockType _quickCallback;
    long long _moveState;
    double _walkMoveSpeed;
    long long _maxDuration;
    double _distanceFilter;
    long long _duration;
    long long _startMoveTime;
    TBCatchMoveAnalaze *_moveAnalaze;
    struct CLLocationCoordinate2D _curCoor;
    struct CLLocationCoordinate2D _destinationCoor;
    struct CLLocationCoordinate2D _lastCoor;
}

@property(nonatomic) _Bool isMachTime; // @synthesize isMachTime=_isMachTime;
@property(nonatomic) _Bool lastMoveIsQuick; // @synthesize lastMoveIsQuick=_lastMoveIsQuick;
@property(retain, nonatomic) TBCatchMoveAnalaze *moveAnalaze; // @synthesize moveAnalaze=_moveAnalaze;
@property(nonatomic) long long startMoveTime; // @synthesize startMoveTime=_startMoveTime;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) struct CLLocationCoordinate2D lastCoor; // @synthesize lastCoor=_lastCoor;
@property(nonatomic) struct CLLocationCoordinate2D destinationCoor; // @synthesize destinationCoor=_destinationCoor;
@property(nonatomic) struct CLLocationCoordinate2D curCoor; // @synthesize curCoor=_curCoor;
@property(nonatomic) double distanceFilter; // @synthesize distanceFilter=_distanceFilter;
@property(nonatomic) long long maxDuration; // @synthesize maxDuration=_maxDuration;
@property(nonatomic) double walkMoveSpeed; // @synthesize walkMoveSpeed=_walkMoveSpeed;
@property(nonatomic) long long moveState; // @synthesize moveState=_moveState;
@property(copy, nonatomic) CDUnknownBlockType quickCallback; // @synthesize quickCallback=_quickCallback;
@property(copy, nonatomic) CDUnknownBlockType moveCallback; // @synthesize moveCallback=_moveCallback;
- (void).cxx_destruct;
- (long long)getCurTime;
- (void)setMaxMoveSpeed:(double)arg1;
- (void)setMaxAccSpeed:(double)arg1;
- (struct CLLocationCoordinate2D)getNextMoveCoor;
- (_Bool)updateNewMoveCoor:(struct CLLocationCoordinate2D)arg1;
- (id)initWithLocation:(struct CLLocationCoordinate2D)arg1;

@end

