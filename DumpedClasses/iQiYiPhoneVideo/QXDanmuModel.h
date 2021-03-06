//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, UIView;

@interface QXDanmuModel : NSObject
{
    UIView *_displayView;
    long long _chanelCount;
    double _chanelHeihgt;
    double _chanelSpace;
    CDUnknownBlockType _itemClickBlock;
    NSMutableArray *_chanels;
    NSMutableArray *_msgs;
    double _speed;
    double _width;
}

@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(retain, nonatomic) NSMutableArray *msgs; // @synthesize msgs=_msgs;
@property(retain, nonatomic) NSMutableArray *chanels; // @synthesize chanels=_chanels;
@property(copy, nonatomic) CDUnknownBlockType itemClickBlock; // @synthesize itemClickBlock=_itemClickBlock;
@property(nonatomic) double chanelSpace; // @synthesize chanelSpace=_chanelSpace;
@property(nonatomic) double chanelHeihgt; // @synthesize chanelHeihgt=_chanelHeihgt;
@property(nonatomic) long long chanelCount; // @synthesize chanelCount=_chanelCount;
@property(nonatomic) __weak UIView *displayView; // @synthesize displayView=_displayView;
- (void).cxx_destruct;
- (void)clear;
- (void)frameUpdate:(double)arg1;
- (void)addMsg:(id)arg1;
- (id)init;

@end

