//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIImage;

@interface NMMoreOperationButton : UIButton
{
    _Bool _blackMode;
    UIImage *_openMoreImage;
    UIImage *_pressOpenMoreImage;
    UIImage *_disableOpenMoreImage;
}

+ (struct CGSize)ButtonSize;
- (void).cxx_destruct;
- (void)setDisable:(_Bool)arg1;
- (void)handleThemeChanged:(id)arg1;
- (id)initWithBlackMode:(_Bool)arg1;
- (id)init;

@end
