/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARSessionMetrics : NSObject {
    unsigned long long  _badFrameCount;
    float  _badFramePercentage10;
    float  _badFramePercentage60;
    float  _badFramePercentageMoreThan60;
    Class  _configClass;
    ARConfiguration * _currentConfiguration;
    unsigned long long  _currentVIOMapSize;
    unsigned long long  _frameCount;
    NSDate * _frameStartDate;
    bool  _hasInitialWorldMap;
    bool  _initializingVIO;
    bool  _isAutoFocusEnabled;
    ARFrame * _lastUpdatedFrame;
    void _maxPos;
    void _minPos;
    unsigned long long  _numberOfCameraSwitches;
    unsigned long long  _numberOfReinitializationAttempts;
    bool  _positionInitialized;
    unsigned long long  _raycastCount;
    bool  _relocalizingToInitialWorldMap;
    <ARSessionMetricsReporting> * _reporter;
    double  _sessionTimeForLastBadFrameRecording;
    bool  _sessionWasThrottled;
    NSDate * _startDate;
    float  _timeUntilThrottling;
    double  _vioInitializationTime;
}

+ (id)getRenderEngineString:(id)arg1;
+ (void)recordHitTest:(unsigned long long)arg1;
+ (void)setRenderType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_recordBadFramePercentageFinal:(bool)arg1;
- (void)_recordSessionEnd;
- (id)init;
- (id)initWithReporter:(id)arg1;
- (id)queue;
- (void)recordRaycast:(id)arg1 tracked:(bool)arg2;
- (void)recordSaveMap:(long long)arg1 numberOfFeaturePoints:(unsigned long long)arg2;
- (void)reportSessionFailure:(id)arg1;
- (void)sessionDidUpdateFrame:(id)arg1;
- (void)sessionStarted:(id)arg1 withConfiguration:(id)arg2;
- (void)sessionStopped;
- (void)sessionUpdateThermalState:(long long)arg1;

@end
