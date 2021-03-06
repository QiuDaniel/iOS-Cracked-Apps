//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JVSForwardLayer.h"

@class JVSInvocation, JVSTensor, NSString, NSUUID;

@interface JVSPoolingLayer : NSObject <JVSForwardLayer>
{
    struct MetalPoolingParameter _poolingParameter;
    NSUUID *_uuid;
    NSString *_name;
    float _kernelSize;
    float _padding;
    float _stride;
    JVSTensor *_inputTensor;
    unsigned long long _type;
    JVSInvocation *_forwardInvocation;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) float stride; // @synthesize stride=_stride;
@property(nonatomic) float padding; // @synthesize padding=_padding;
@property(nonatomic) float kernelSize; // @synthesize kernelSize=_kernelSize;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)forwardInvocations;
- (_Bool)initializeForward:(id)arg1 batchSize:(int)arg2;
@property(readonly, nonatomic) struct jvsdimensions dimensions;
@property(readonly, nonatomic) int outputSize;
@property(readonly, nonatomic) int inputSize;
- (id)initWithDimensions:(struct jvsdimensions)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

