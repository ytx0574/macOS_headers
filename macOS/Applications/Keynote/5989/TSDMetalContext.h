//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTLRenderPassDescriptor, TSDMetalShader;
@protocol MTLCommandBuffer, MTLCommandQueue, MTLDevice, MTLRenderCommandEncoder;

@interface TSDMetalContext : NSObject
{
    id <MTLDevice> _device;
    unsigned long long _pixelFormat;
    unsigned long long _currentBuffer;
    id <MTLCommandQueue> _commandQueue;
    id <MTLCommandBuffer> _commandBuffer;
    MTLRenderPassDescriptor *_passDescriptor;
    TSDMetalShader *_shader;
    id <MTLRenderCommandEncoder> _renderEncoder;
    struct CGSize _layerSize;
}

@property(nonatomic) __weak id <MTLRenderCommandEncoder> renderEncoder; // @synthesize renderEncoder=_renderEncoder;
@property(nonatomic) __weak TSDMetalShader *shader; // @synthesize shader=_shader;
@property(nonatomic) __weak MTLRenderPassDescriptor *passDescriptor; // @synthesize passDescriptor=_passDescriptor;
@property(nonatomic) __weak id <MTLCommandBuffer> commandBuffer; // @synthesize commandBuffer=_commandBuffer;
@property(nonatomic) __weak id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(nonatomic) unsigned long long currentBuffer; // @synthesize currentBuffer=_currentBuffer;
@property(nonatomic) struct CGSize layerSize; // @synthesize layerSize=_layerSize;
@property(nonatomic) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(nonatomic) __weak id <MTLDevice> device; // @synthesize device=_device;
- (void).cxx_destruct;

@end

