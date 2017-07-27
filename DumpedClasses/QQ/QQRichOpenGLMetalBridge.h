//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQRichPTVGLProgramBase.h"

@class MTLRenderPassDescriptor;

@interface QQRichOpenGLMetalBridge : QQRichPTVGLProgramBase
{
    unsigned int _positionVBO;
    unsigned int _texcoordVBO;
    struct __CVBuffer *_offscreenRenderTarget;
    char *_offscreenRenderTarget_ptr;
    unsigned long long _offscreenRenderTarget_ptr_size;
    struct __CVBuffer *_offscreenRenderTexture;
    id <MTLBuffer> _mtlVertexBuffer;
    id <MTLRenderPipelineState> _mtlRenderPipeline;
    MTLRenderPassDescriptor *_mtlRenderPassDesc;
    struct __CVBuffer *_offscreenMTLRenderTarget;
    char *_offscreenMTLRenderTarget_ptr;
    unsigned long long _offscreenMTLRenderTarget_ptr_size;
    struct __CVBuffer *_offscreenMTLRenderTexture;
    struct CGSize _outputSize;
}

@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(readonly, nonatomic) unsigned int glOutput;
- (void)mtlTexture2GLTexture:(id)arg1;
- (void)mtlTexture2GLTexture;
- (id)sourceMTLTexture;
- (void)render2MTLOffscreenRenderTarget:(id)arg1;
- (void)cleanMTLRenderPassDescriptor;
- (void)setupMTLRenderPassDescriptor;
- (void)cleanMTLRenderPipeline;
- (void)setupMTLRenderPipeline;
- (void)cleanMTLVertexBuffer;
- (void)setupMTLVertexBuffer;
- (void)releaseMTLOffscreenRenderTexture;
- (void)uninitMTLOffscreenRenderTarget;
- (_Bool)createMTLOffscreenRenderTexture;
- (_Bool)initMTLOffscreenRenderTarget;
- (_Bool)prepareMetalRender;
@property(readonly, nonatomic) id <MTLTexture> mtlOutput;
- (unsigned int)sourceOpenGLTexture;
- (void)glTexture2MetalTexture:(unsigned int)arg1 frameBuffer:(unsigned int)arg2;
- (void)glTexture2MetalTexture;
- (void)render2OffscreenRenderTarget:(unsigned int)arg1 frameBuffer:(unsigned int)arg2;
- (void)releaseOffscreenRenderTexture;
- (void)uninitOffscreenRenderTarget;
- (_Bool)createOffscreenRenderTexture;
- (_Bool)initOffscreenRenderTarget;
- (void)clearBufferObjects;
- (void)useProgram;
- (void)setupBufferObjects;
- (void)registerVertexAttributes;
- (void)registerUniforms;
- (_Bool)prepareOpenGLRender;
- (void)copyBuffer:(char *)arg1 size:(unsigned long long)arg2 toBuffer:(char *)arg3 size:(unsigned long long)arg4;
- (_Bool)copyPixelBuffer:(struct __CVBuffer *)arg1 toPixelBuffer:(struct __CVBuffer *)arg2;
- (void)cleanOffscreenRenderTargetPtrCache;
- (void)cacheOffscreenRenderTargetPtr;
- (void)dealloc;
- (id)init;

@end
