/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNDetectFaceCaptureQualityRequest : VNImageBasedRequest <VNFaceObservationAccepting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *inputFaceObservations;
@property (readonly) Class superclass;

+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;

- (void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedFaceQuality:(id)arg3;
- (long long)dependencyProcessingOrdinality;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

@end
