//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, UIColor, UIFont;

@interface FMIconNumView : UIButton
{
    _Bool _enableCustomAnimation;
    int _num;
    int _value;
    NSString *_icon;
    NSString *_string;
    NSString *_placeholder;
    UIFont *_textFont;
    UIColor *_textColor;
    UIColor *_shadowColor;
    struct CGSize _shadowOffset;
    struct UIEdgeInsets _numEdgeInsets;
}

@property(nonatomic) _Bool enableCustomAnimation; // @synthesize enableCustomAnimation=_enableCustomAnimation;
@property(nonatomic) struct UIEdgeInsets numEdgeInsets; // @synthesize numEdgeInsets=_numEdgeInsets;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
@property(nonatomic) int value; // @synthesize value=_value;
@property(nonatomic) int num; // @synthesize num=_num;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)resetCheckboxIcon;
- (void)toCheckboxLabel;
- (void)touchAction:(CDUnknownBlockType)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)presetView;
- (void)collectAnimation:(CDUnknownBlockType)arg1;
- (void)customActionCalled;
- (void)touchBegin;
- (void)bindComponent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

