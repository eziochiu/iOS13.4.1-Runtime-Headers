/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUAuxiliaryImageRenderJob : NURenderJob {
    <NUAuxiliaryImage> * _auxiliaryImage;
    long long  _auxiliaryImageType;
    NUCVPixelBuffer * _cvBuffer;
    unsigned int  _pixelFormat;
    CIRenderTask * _renderTask;
}

@property (retain) <NUAuxiliaryImage> *auxiliaryImage;
@property long long auxiliaryImageType;

- (void).cxx_destruct;
- (id)auxiliaryImage;
- (long long)auxiliaryImageType;
- (void)cleanUp;
- (bool)complete:(out id*)arg1;
- (id)newRenderPipelineStateForEvaluationMode:(long long)arg1;
- (bool)prepare:(out id*)arg1;
- (bool)render:(out id*)arg1;
- (id)result;
- (id)scalePolicy;
- (void)setAuxiliaryImage:(id)arg1;
- (void)setAuxiliaryImageType:(long long)arg1;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputImage;
- (bool)wantsPrepareNodeCached;
- (bool)wantsRenderNodeCached;
- (bool)wantsRenderScaleClampedToNativeScale;

@end