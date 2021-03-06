//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIColor;
@protocol MQQSegmentedControlDelegate;

@interface MQQSegmentedControl : UIView
{
    id <MQQSegmentedControlDelegate> delegate;
    NSMutableArray *buttonArray;
    NSMutableArray *separatorLineArray;
    long long selectedSegmentIndex;
    UIColor *_tintColor;
    UIColor *_tintTitleColor;
}

@property(retain, nonatomic) UIColor *tintTitleColor; // @synthesize tintTitleColor=_tintTitleColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) long long selectedSegmentIndex; // @synthesize selectedSegmentIndex;
@property(nonatomic) id <MQQSegmentedControlDelegate> delegate; // @synthesize delegate;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)buttonClicked:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 titles:(id)arg2;

@end

