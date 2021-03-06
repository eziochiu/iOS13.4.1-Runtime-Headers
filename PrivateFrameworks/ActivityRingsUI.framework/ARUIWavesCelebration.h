/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

@interface ARUIWavesCelebration : ARUICelebration {
    bool  _active;
    id /* block */  _completion;
    float  _completionBeginTime;
    float  _completionEndTime;
    unsigned int  _computeCount;
    unsigned long long  _numWaveIndicies;
    unsigned int  _pointCount;
    float  _revealPercent;
    CAMediaTimingFunction * _timingFunction;
    float  _transitionDuration;
    <MTLBuffer> * _waveComputeUniforms;
    unsigned int  _waveCount;
    <MTLBuffer> * _waveFragmentUniforms;
    <MTLBuffer> * _waveIndexBuffer;
    <MTLBuffer> * _wavePoints;
    <MTLBuffer> * _waveVertexBuffer;
}

@property (nonatomic, readonly) unsigned int computeCount;
@property (nonatomic, readonly) unsigned long long numWaveIndicies;
@property (nonatomic, readonly) unsigned int pointCount;
@property (nonatomic, readonly) float revealPercent;
@property (nonatomic, readonly) <MTLBuffer> *waveComputeUniforms;
@property (nonatomic, readonly) unsigned int waveCount;
@property (nonatomic, readonly) <MTLBuffer> *waveFragmentUniforms;
@property (nonatomic, readonly) <MTLBuffer> *waveIndexBuffer;
@property (nonatomic, readonly) <MTLBuffer> *wavePoints;
@property (nonatomic, readonly) <MTLBuffer> *waveVertexBuffer;

- (void).cxx_destruct;
- (void)_setupWavePoints;
- (void)_updateComputeUniforms;
- (unsigned int)computeCount;
- (void)endWithCompletion:(id /* block */)arg1;
- (id)init;
- (unsigned long long)numWaveIndicies;
- (unsigned int)pointCount;
- (float)revealPercent;
- (void)setBottomColor;
- (void)setContrastColor;
- (void)setTopColor;
- (void)storeCelebration:(id)arg1 withRing:(id)arg2;
- (unsigned long long)type;
- (void)update:(double)arg1;
- (id)waveComputeUniforms;
- (unsigned long long)waveComputeUniformsOffsetForType:(unsigned long long)arg1;
- (unsigned int)waveCount;
- (unsigned long long)waveFragmentOffsetForWaveAtIndex:(unsigned int)arg1;
- (id)waveFragmentUniforms;
- (id)waveIndexBuffer;
- (id)wavePoints;
- (unsigned long long)wavePointsOffsetForWaveAtIndex:(unsigned int)arg1;
- (id)waveVertexBuffer;

@end
