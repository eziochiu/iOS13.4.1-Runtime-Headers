/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKMetalShader : NSObject {
    PKMetalShader * _addBlendModeShader;
    long long  _blendMode;
    unsigned long long  _colorAttachmentIndex;
    <MTLFunction> * _fragmentFunction;
    PKMetalShader * _invertBlendModeShader;
    PKMetalShader * _maxBlendModeShader;
    <MTLRenderPipelineState> * _msaaPipelineState;
    unsigned long long  _msaaPipelineStateSampleCount;
    <MTLRenderPipelineState> * _msaaPipelineStateWithColorMaskNone;
    unsigned long long  _msaaPipelineStateWithColorMaskNoneSampleCount;
    PKMetalShader * _noBlendModeShader;
    unsigned long long  _numColorAttachments;
    <MTLRenderPipelineState> * _pipelineState;
    <MTLRenderPipelineState> * _pipelineStateWithColorMaskNone;
    MTLRenderPipelineDescriptor * _sharedPipelineDescriptor;
    unsigned long long  _stencilPixelFormat;
    PKMetalShader * _subtractBlendModeShader;
    <MTLFunction> * _vertexFunction;
}

@property (nonatomic, readonly) <MTLRenderPipelineState> *pipelineState;

- (void).cxx_destruct;
- (void)createPipelineState;
- (id)init;
- (id)initWithVertexFunction:(id)arg1 fragmentFunction:(id)arg2 blendMode:(long long)arg3 colorAttachmentIndex:(unsigned long long)arg4 sharedPipelineDescriptor:(id)arg5 numColorAttachments:(unsigned long long)arg6;
- (id)initWithVertexFunction:(id)arg1 fragmentFunction:(id)arg2 sharedPipelineDescriptor:(id)arg3 numColorAttachments:(unsigned long long)arg4;
- (id)msaaPipelineStateWithColorMaskNoneAndSampleCount:(unsigned long long)arg1;
- (id)msaaPipelineStateWithSampleCount:(unsigned long long)arg1;
- (id)newShaderWithBlendMode:(long long)arg1;
- (id)pipelineState;
- (id)pipelineStateDescriptorSampleCount:(unsigned long long)arg1;
- (id)pipelineStateWithColorMaskNone;
- (id)shaderWithBlendMode:(long long)arg1;

@end