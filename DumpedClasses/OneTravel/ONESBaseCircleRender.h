//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ONESBaseOverlayPathRender.h"

@interface ONESBaseCircleRender : ONESBaseOverlayPathRender
{
    unsigned long long _type;
    id <ONESBaseOverlay> _circle;
}

@property(readonly, nonatomic) id <ONESBaseOverlay> circle; // @synthesize circle=_circle;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithCircle:(id)arg1;

@end

