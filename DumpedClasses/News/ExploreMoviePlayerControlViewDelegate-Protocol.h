//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, UIEvent, UIView;

@protocol ExploreMoviePlayerControlViewDelegate <NSObject>
@property(nonatomic) _Bool isFullScreenButtonAction;
- (_Bool)movieHasFirstFrame;
- (_Bool)shouldControlViewHaveAdButton;
- (void)controlView:(UIView *)arg1 touchesEnded:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
- (void)controlViewResolutionButtonClicked:(UIView *)arg1;
- (void)controlViewWillDisappear:(UIView *)arg1;
- (void)controlView:(UIView *)arg1 didAppear:(_Bool)arg2;
- (void)controlView:(UIView *)arg1 willAppear:(_Bool)arg2;
- (void)controlViewFullScreenButtonClicked:(UIView *)arg1;
- (void)controlViewShareButtonClicked:(UIView *)arg1;
- (void)controlViewPlayButtonClicked:(UIView *)arg1 replay:(_Bool)arg2;
- (void)controlViewRetryButtonClicked:(UIView *)arg1;

@optional
- (void)touchesEnded:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (_Bool)controlViewShouldPauseWhenEnterForeground;
- (void)controlViewFullScreenLandscapeLeftRightRotate;
- (_Bool)controlViewCanRotate;
- (void)controlView:(UIView *)arg1 seekProgress:(double)arg2;
- (void)controlView:(UIView *)arg1 changeCurrentPlaybackTime:(double)arg2 totalTime:(double)arg3;
- (void)controlViewPrePlayButtonClicked:(UIView *)arg1;
@end
