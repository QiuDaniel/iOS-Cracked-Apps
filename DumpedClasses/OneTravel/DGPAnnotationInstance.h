//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DGPTransitPointAnnotation, NSMutableArray, ONESBaseRouteOverlay;

@interface DGPAnnotationInstance : NSObject
{
    DGPTransitPointAnnotation *_transitPointAnnotation;
    NSMutableArray *_qRouteOverlayGroupArray;
    NSMutableArray *_visiblePointsArray;
    NSMutableArray *_qLineRouteOverlayGroupArray;
    NSMutableArray *_linevisiblePointsArray;
    ONESBaseRouteOverlay *_trafficOverlayGroup;
    NSMutableArray *_qLineRouteOverlayGroupScaleArray;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *qLineRouteOverlayGroupScaleArray; // @synthesize qLineRouteOverlayGroupScaleArray=_qLineRouteOverlayGroupScaleArray;
@property(retain, nonatomic) ONESBaseRouteOverlay *trafficOverlayGroup; // @synthesize trafficOverlayGroup=_trafficOverlayGroup;
@property(retain, nonatomic) NSMutableArray *linevisiblePointsArray; // @synthesize linevisiblePointsArray=_linevisiblePointsArray;
@property(retain, nonatomic) NSMutableArray *qLineRouteOverlayGroupArray; // @synthesize qLineRouteOverlayGroupArray=_qLineRouteOverlayGroupArray;
@property(retain, nonatomic) NSMutableArray *visiblePointsArray; // @synthesize visiblePointsArray=_visiblePointsArray;
@property(retain, nonatomic) NSMutableArray *qRouteOverlayGroupArray; // @synthesize qRouteOverlayGroupArray=_qRouteOverlayGroupArray;
@property(retain, nonatomic) DGPTransitPointAnnotation *transitPointAnnotation; // @synthesize transitPointAnnotation=_transitPointAnnotation;
- (void).cxx_destruct;
- (id)init;

@end

