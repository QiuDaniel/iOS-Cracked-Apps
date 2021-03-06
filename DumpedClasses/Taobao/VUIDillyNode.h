//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VUIStateNode.h"

@class VUIDillyProgram, VUIDillyState, VUITestDillyProgram;

@interface VUIDillyNode : VUIStateNode
{
    unsigned int _centerCoordID;
    unsigned int _directionCoordID;
    float _mTestAnimate;
    float _mBlendRadio;
    VUIDillyState *_STATE_ACTIVE;
    VUIDillyState *_STATE_NORMAL;
    VUIDillyState *_STATE_DISABLE;
    VUIDillyState *_STATE_INIT;
    VUIDillyProgram *_mProgram;
    VUITestDillyProgram *_mTestProgram;
}

+ (id)UI_EVENT_FREEZE;
+ (id)UI_EVENT_COLLAPSE;
+ (id)UI_EVENT_FOCUS_LEAVE;
+ (id)UI_EVENT_FOCUS_ENTER;
@property(nonatomic) float mBlendRadio; // @synthesize mBlendRadio=_mBlendRadio;
@property(retain, nonatomic) VUITestDillyProgram *mTestProgram; // @synthesize mTestProgram=_mTestProgram;
@property(retain, nonatomic) VUIDillyProgram *mProgram; // @synthesize mProgram=_mProgram;
@property(nonatomic) float mTestAnimate; // @synthesize mTestAnimate=_mTestAnimate;
@property(retain, nonatomic) VUIDillyState *STATE_INIT; // @synthesize STATE_INIT=_STATE_INIT;
@property(retain, nonatomic) VUIDillyState *STATE_DISABLE; // @synthesize STATE_DISABLE=_STATE_DISABLE;
@property(retain, nonatomic) VUIDillyState *STATE_NORMAL; // @synthesize STATE_NORMAL=_STATE_NORMAL;
@property(retain, nonatomic) VUIDillyState *STATE_ACTIVE; // @synthesize STATE_ACTIVE=_STATE_ACTIVE;
- (void).cxx_destruct;
- (void)onRelease;
- (void)onReset;
- (void)onRenderMp:(id)arg1 mv:(id)arg2 mm:(id)arg3 mpv:(id)arg4 mpvp:(id)arg5 deltaTime:(double)arg6;
- (void)createStateMachine;
- (void)releaseVAO;
- (void)rebindVAO;
- (void)createVAO;
- (void)initialize;
- (id)getInitializeState;
- (id)initWithGeometry:(id)arg1;

@end

