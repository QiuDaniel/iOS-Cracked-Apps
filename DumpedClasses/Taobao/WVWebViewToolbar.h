//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIToolbar.h"

@class UIBarButtonItem, UIImage;

@interface WVWebViewToolbar : UIToolbar
{
    _Bool _useFirstButton;
    UIImage *_backgroundImage;
    id _target;
    UIBarButtonItem *_firstBarButton;
    UIBarButtonItem *_backBarButton;
    UIBarButtonItem *_forwardBarButton;
    UIBarButtonItem *_stopBarButton;
    UIBarButtonItem *_refreshBarButton;
}

@property(retain, nonatomic) UIBarButtonItem *refreshBarButton; // @synthesize refreshBarButton=_refreshBarButton;
@property(retain, nonatomic) UIBarButtonItem *stopBarButton; // @synthesize stopBarButton=_stopBarButton;
@property(retain, nonatomic) UIBarButtonItem *forwardBarButton; // @synthesize forwardBarButton=_forwardBarButton;
@property(retain, nonatomic) UIBarButtonItem *backBarButton; // @synthesize backBarButton=_backBarButton;
@property(retain, nonatomic) UIBarButtonItem *firstBarButton; // @synthesize firstBarButton=_firstBarButton;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic, getter=isUseFirstButton) _Bool useFirstButton; // @synthesize useFirstButton=_useFirstButton;
- (void).cxx_destruct;
@property(nonatomic) _Bool refreshButtonEnabled;
@property(nonatomic) _Bool stopButtonEnabled;
@property(nonatomic) _Bool forwardButtonEnabled;
@property(nonatomic) _Bool backButtonEnabled;
@property(retain, nonatomic) UIImage *refreshButtonImage;
@property(retain, nonatomic) UIImage *stopButtonImage;
@property(retain, nonatomic) UIImage *forwardButtonImage;
@property(retain, nonatomic) UIImage *backButtonImage;
@property(retain, nonatomic) UIImage *firstButtonImage;
- (id)createButton:(id)arg1 action:(SEL)arg2;
- (id)initWithFrame:(struct CGRect)arg1 withTarget:(id)arg2;

@end

