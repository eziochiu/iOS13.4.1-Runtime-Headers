/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARSegmentationData : NSObject <ARResultData> {
    struct __CVBuffer { } * _confidenceBuffer;
    struct __CVBuffer { } * _confidenceSampledForDepth;
    struct __CVBuffer { } * _normalsBuffer;
    struct __CVBuffer { } * _segmentationBuffer;
    struct __CVBuffer { } * _semanticsSampledForDepth;
    long long  _source;
    ARImageData * _sourceImageData;
    double  _timestamp;
}

@property (nonatomic, readonly) struct __CVBuffer { }*confidenceBuffer;
@property (nonatomic) struct __CVBuffer { }*confidenceSampledForDepth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct __CVBuffer { }*normalsBuffer;
@property (nonatomic, readonly) struct __CVBuffer { }*segmentationBuffer;
@property (nonatomic) struct __CVBuffer { }*semanticsSampledForDepth;
@property (nonatomic, readonly) long long source;
@property (nonatomic, retain) ARImageData *sourceImageData;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timestamp;

- (void).cxx_destruct;
- (struct __CVBuffer { }*)confidenceBuffer;
- (struct __CVBuffer { }*)confidenceSampledForDepth;
- (void)dealloc;
- (id)description;
- (id)initWithTimestamp:(double)arg1 segmentationBuffer:(struct __CVBuffer { }*)arg2;
- (id)initWithTimestamp:(double)arg1 segmentationBuffer:(struct __CVBuffer { }*)arg2 confidenceBuffer:(struct __CVBuffer { }*)arg3 source:(long long)arg4;
- (struct __CVBuffer { }*)normalsBuffer;
- (struct __CVBuffer { }*)segmentationBuffer;
- (struct __CVBuffer { }*)semanticsSampledForDepth;
- (void)setConfidenceSampledForDepth:(struct __CVBuffer { }*)arg1;
- (void)setNormalsBuffer:(struct __CVBuffer { }*)arg1;
- (void)setSemanticsSampledForDepth:(struct __CVBuffer { }*)arg1;
- (void)setSourceImageData:(id)arg1;
- (long long)source;
- (id)sourceImageData;
- (double)timestamp;

@end
