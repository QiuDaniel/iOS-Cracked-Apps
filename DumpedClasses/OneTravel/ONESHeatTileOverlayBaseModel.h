//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber;

@interface ONESHeatTileOverlayBaseModel : NSObject
{
    _Bool _normalizeNodeValueAccordingZoom;
    NSArray *_heatTielNodes;
    NSNumber *_max_value;
    NSNumber *_min_value;
}

@property(retain, nonatomic) NSNumber *min_value; // @synthesize min_value=_min_value;
@property(retain, nonatomic) NSNumber *max_value; // @synthesize max_value=_max_value;
@property(nonatomic) _Bool normalizeNodeValueAccordingZoom; // @synthesize normalizeNodeValueAccordingZoom=_normalizeNodeValueAccordingZoom;
@property(retain, nonatomic) NSArray *heatTielNodes; // @synthesize heatTielNodes=_heatTielNodes;
- (void).cxx_destruct;
- (id)initWithHeatTileNodes:(id)arg1;

@end
