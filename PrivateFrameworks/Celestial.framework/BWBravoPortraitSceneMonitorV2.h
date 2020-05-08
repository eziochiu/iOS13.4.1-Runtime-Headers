/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWBravoPortraitSceneMonitorV2 : NSObject <BWPortraitSceneMonitor> {
    float  _backgroundShiftSumSmoothed;
    float  _backgroundShiftSumSmoothingFactor;
    float  _backgroundShiftSumSmoothingTrend;
    float  _backgroundShiftSumSmoothingTrendUpdateFactor;
    bool  _backgroundShiftSumTooLowThresholdReached;
    bool  _deliveryOfShiftsHasStarted;
    bool  _focusHasBeenAttainedAfterStart;
    bool  _focusIsStationaryBeyondThreshold;
    bool  _focusLocked;
    float  _invalidShiftRatioSmoothed;
    float  _invalidShiftRatioSmoothingFactor;
    int  _lastSDOFEffectStatus;
    int  _numFramesSinceFocusBecameStable;
    int  _numFramesSinceFocusFirstAttainedStability;
    int  _numFramesSinceFocusLocked;
    int  _numberOfFramesWithStableFocusThreshold;
    bool  _oneShotFocusScanInProgress;
    bool  _portraitSceneMonitoringRequiresStageThresholds;
    bool  _sceneIsTooDark;
    float  _sceneTooDarkAEAverageAETargetFractionThreshold;
    float  _sceneTooDarkAEAverageAETargetFractionThresholdHysteresisLag;
    float  _sceneTooDarkGainThreshold;
    bool  _sceneTooDarkMonitoringEnabled;
    bool  _stageBackgroundShiftSumTooLowThresholdReached;
    bool  _stageFaceHasBeenSeen;
    bool  _stageFaceMonitoringEnabled;
    int  _stageFaceNumberOfFramesSinceLastFace;
    int  _stageFaceNumberOfFramesSinceLastFaceThreshold;
    NSArray * _stageMostRecentFaces;
    float  _stageTooFarBackGroundShiftSumIsTooLowHysteresis;
    bool  _stageTooFarBackgroundShiftSumNoFacesIsTooLow;
    float  _stageTooFarBackgroundShiftSumNoFacesThreshold;
    float  _stageTooFarBackgroundShiftSumTooLowThreshold;
    float  _stageTooFarDistanceThresholdHysteresis;
    bool  _stageTooFarDistanceThresholdReached;
    float  _stageTooFarFocusDistanceThreshold;
    bool  _stageTooFarMonitoringEnabled;
    bool  _subjectIsTooClose;
    bool  _subjectIsTooFar;
    bool  _subjectIsTooFarForStage;
    bool  _subjectIsTooFarForStageNoFaces;
    float  _subjectTooCloseFocusDistanceThreshold;
    float  _subjectTooCloseHysteresis;
    bool  _subjectTooCloseMonitoringEnabled;
    bool  _subjectTooClosePreviousFrame;
    float  _subjectTooFarBackGroundShiftSumIsTooLowHysteresis;
    float  _subjectTooFarBackgroundShiftSumTooLowThreshold;
    float  _subjectTooFarDistanceThresholdHysteresis;
    bool  _subjectTooFarDistanceThresholdReached;
    float  _subjectTooFarFocusDistanceThreshold;
    bool  _subjectTooFarMonitoringEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) float focusDistanceToMaxAllowedFocusDistanceRatio;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool portraitSceneMonitoringRequiresStageThresholds;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)dealloc;
- (void)doubleExponentialSmoothing:(float)arg1 smoothValue:(float*)arg2 trendValue:(float*)arg3 dataFactor:(float)arg4 trendFactor:(float)arg5;
- (float)focusDistanceToMaxAllowedFocusDistanceRatio;
- (void)focusScanDidComplete;
- (id)initWithTuningParameters:(id)arg1 attachDebugFrameStatistics:(bool)arg2;
- (bool)portraitSceneMonitoringRequiresStageThresholds;
- (bool)resolveSDOFStatusWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 frameStatisticsByPortType:(id)arg2 sceneFlags:(unsigned long long)arg3 flashWillFire:(bool)arg4 effectStatus:(int*)arg5 stagePreviewStatus:(int*)arg6;
- (void)setAutoFocusInProgress:(bool)arg1 focusLocked:(bool)arg2 oneShotFocusScanInProgress:(bool)arg3;
- (void)setPortraitSceneMonitoringRequiresStageThresholds:(bool)arg1;
- (void)setSDOFBackgroundShiftSum:(float)arg1 invalidShiftRatio:(float)arg2 closeCanonicalDisparityAverage:(float)arg3 faceCanonicalDisparityAverages:(id)arg4 erodedForegroundRatio:(float)arg5 foregroundRatio:(float)arg6 occluded:(bool)arg7 faces:(id)arg8;

@end