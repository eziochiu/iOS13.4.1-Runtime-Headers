/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARWorldTrackingOptions : NSObject <NSCopying> {
    NSMutableDictionary * _activeVideoFormatsMap;
    NSObject<OS_dispatch_semaphore> * _activeVideoFormatsSemaphore;
    bool  _alwaysUsePrimaryCameraForTracking;
    bool  _collaborationEnabled;
    bool  _deliverRawSceneUnderstandingResults;
    bool  _depthBuffersWillBeProvided;
    bool  _deterministicMode;
    NSString * _deviceModel;
    ARImageSensorSettings * _imageSensorSettings;
    ARImageSensorSettings * _imageSensorSettingsForUltraWide;
    ARWorldMap * _initialWorldMap;
    double  _minVergenceAngle;
    bool  _mlModelEnabled;
    unsigned long long  _planeDetection;
    bool  _planeEstimationShouldUseJasperData;
    bool  _relocalizationEnabled;
    unsigned long long  _sceneReconstruction;
    NSString * _slamConfigurationPreset;
    struct ARSpatialMappingParameters { 
        long long voxelSize; 
        long long bucketCount; 
    }  _spatialMappingParameters;
    bool  _useSpatialMappingQualityMode;
    NSNumber * _vioSessionID;
}

@property (nonatomic, readonly) NSDictionary *activeVideoFormatsMap;
@property (nonatomic) bool alwaysUsePrimaryCameraForTracking;
@property (getter=isCollaborationEnabled, nonatomic) bool collaborationEnabled;
@property (nonatomic) bool deliverRawSceneUnderstandingResults;
@property (nonatomic) bool depthBuffersWillBeProvided;
@property (nonatomic) bool deterministicMode;
@property (nonatomic, copy) NSString *deviceModel;
@property (nonatomic, copy) ARImageSensorSettings *imageSensorSettings;
@property (nonatomic, copy) ARImageSensorSettings *imageSensorSettingsForUltraWide;
@property (nonatomic, copy) ARWorldMap *initialWorldMap;
@property (nonatomic) double minVergenceAngle;
@property (nonatomic) bool mlModelEnabled;
@property (nonatomic) unsigned long long planeDetection;
@property (nonatomic) bool planeEstimationShouldUseJasperData;
@property (nonatomic) bool relocalizationEnabled;
@property (nonatomic) unsigned long long sceneReconstruction;
@property (nonatomic, copy) NSString *slamConfiguration;
@property (nonatomic) struct ARSpatialMappingParameters { long long x1; long long x2; } spatialMappingParameters;
@property (nonatomic) bool useSpatialMappingQualityMode;
@property (nonatomic, retain) NSNumber *vioSessionID;

- (void).cxx_destruct;
- (id)activeVideoFormatsMap;
- (bool)alwaysUsePrimaryCameraForTracking;
- (unsigned int)cameraIdForCaptureDeviceType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)createSLAMCalibration:(struct CV3DSLAMCalibration {}**)arg1;
- (void)createSLAMConfig:(struct CV3DSLAMConfig {}**)arg1;
- (bool)deliverRawSceneUnderstandingResults;
- (bool)depthBuffersWillBeProvided;
- (bool)deterministicMode;
- (id)deviceModel;
- (id)imageSensorSettings;
- (id)imageSensorSettingsForUltraWide;
- (id)init;
- (id)initWithImageSensorSettings:(id)arg1;
- (id)initialWorldMap;
- (bool)isCollaborationEnabled;
- (bool)isEqual:(id)arg1;
- (double)minVergenceAngle;
- (bool)mlModelEnabled;
- (unsigned long long)planeDetection;
- (bool)planeEstimationShouldUseJasperData;
- (bool)relocalizationEnabled;
- (unsigned long long)sceneReconstruction;
- (void)setAlwaysUsePrimaryCameraForTracking:(bool)arg1;
- (void)setCollaborationEnabled:(bool)arg1;
- (void)setDeliverRawSceneUnderstandingResults:(bool)arg1;
- (void)setDepthBuffersWillBeProvided:(bool)arg1;
- (void)setDeterministicMode:(bool)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setImageSensorSettings:(id)arg1;
- (void)setImageSensorSettingsForUltraWide:(id)arg1;
- (void)setInitialWorldMap:(id)arg1;
- (void)setMinVergenceAngle:(double)arg1;
- (void)setMlModelEnabled:(bool)arg1;
- (void)setPlaneDetection:(unsigned long long)arg1;
- (void)setPlaneEstimationShouldUseJasperData:(bool)arg1;
- (void)setRelocalizationEnabled:(bool)arg1;
- (void)setSceneReconstruction:(unsigned long long)arg1;
- (void)setSlamConfiguration:(id)arg1;
- (void)setSpatialMappingParameters:(struct ARSpatialMappingParameters { long long x1; long long x2; })arg1;
- (void)setUseSpatialMappingQualityMode:(bool)arg1;
- (void)setVioSessionID:(id)arg1;
- (int)setupCameraCalibration:(struct CV3DSLAMCalibration {}**)arg1 forImageSensorSettings:(id)arg2 deviceModel:(int)arg3;
- (bool)shouldUseUltraWide;
- (id)slamConfiguration;
- (struct ARSpatialMappingParameters { long long x1; long long x2; })spatialMappingParameters;
- (void)updateCameraMap;
- (bool)useSpatialMappingQualityMode;
- (id)vioSessionID;

@end