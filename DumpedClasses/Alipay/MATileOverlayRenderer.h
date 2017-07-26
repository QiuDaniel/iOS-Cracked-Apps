//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAOverlayRenderer.h"

@class MATileOverlay, MATileOverlayDownloader, NSMutableArray;

@interface MATileOverlayRenderer : MAOverlayRenderer
{
    double _screenScale;
    NSMutableArray *_tileOverlayLoadDics;
    MATileOverlayDownloader *_tileOverlayDownloader;
    MATileOverlay *_tileOverlay;
}

@property(readonly, nonatomic) MATileOverlay *tileOverlay; // @synthesize tileOverlay=_tileOverlay;
- (void).cxx_destruct;
- (void)deallocOperation;
- (void)dealloc;
- (id)initWithTileOverlay:(id)arg1;
- (void)reloadData;
- (id)tileOverlayLoadDics;
- (void)createLoadTileThread;
- (id)getCurrentTiles;
- (void)glRender;
- (void)glRenderTiles:(id)arg1;
- (void)glRenderTile:(id)arg1 Transform:(struct CGAffineTransform)arg2;
- (void)loadTileWithTilePath:(struct MATileOverlayPath)arg1 Key:(id)arg2;
- (void)loadTextureID:(unsigned int *)arg1 WithKey:(id)arg2;
- (void)drawIconWithTexture:(unsigned int)arg1 TilePath:(struct MATileOverlayPath)arg2 transform:(struct CGAffineTransform)arg3;
- (id)parseTile:(id)arg1;
- (struct CGPoint *)glPointsForTileX:(long long)arg1 tileY:(long long)arg2 transform:(struct CGAffineTransform)arg3;

@end
