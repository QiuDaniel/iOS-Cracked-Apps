//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DiMAnnotationView.h"

@class UIView;

@interface DMUserLocationView : DiMAnnotationView
{
    _Bool _selected;
    int _dispLevel;
    UIView *_customCalloutView;
}

@property(nonatomic) int dispLevel; // @synthesize dispLevel=_dispLevel;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIView *customCalloutView; // @synthesize customCalloutView=_customCalloutView;
- (id)getAnnotationCustomCalloutView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

