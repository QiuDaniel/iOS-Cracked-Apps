//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIView;

@interface O2OIndexHotSightAnimateObject : NSObject
{
    UIView *_imageCardView;
    NSMutableArray *_infoCardViews;
    unsigned long long _showingIndex;
}

@property(nonatomic) unsigned long long showingIndex; // @synthesize showingIndex=_showingIndex;
@property(retain, nonatomic) NSMutableArray *infoCardViews; // @synthesize infoCardViews=_infoCardViews;
@property(nonatomic) __weak UIView *imageCardView; // @synthesize imageCardView=_imageCardView;
- (void).cxx_destruct;
- (id)init;

@end

