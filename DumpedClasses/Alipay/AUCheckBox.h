//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class AUIconView;

@interface AUCheckBox : UIControl
{
    _Bool _checked;
    _Bool _disabled;
    long long _style;
    AUIconView *_imageView;
}

@property(retain, nonatomic) AUIconView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic, getter=isChecked) _Bool checked; // @synthesize checked=_checked;
- (void).cxx_destruct;
- (void)clicked:(id)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
- (_Bool)isSelected;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end
