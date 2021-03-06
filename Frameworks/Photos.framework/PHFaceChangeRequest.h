/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHFaceChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {
    bool  _didSetFaceprint;
    PHFaceprint * _faceprint;
    bool  _shouldClearFaceCropGenerationState;
}

@property (nonatomic, copy) id adjustmentVersion;
@property (nonatomic) unsigned short ageType;
@property (nonatomic) unsigned short baldType;
@property (nonatomic) double blurScore;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic) long long clusterSequenceNumber;
@property (nonatomic, readonly) id /* block */ concurrentWorkBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short eyeMakeupType;
@property (nonatomic) unsigned short eyesState;
@property (nonatomic) long long faceAlgorithmVersion;
@property (nonatomic, retain) PHFaceprint *faceprint;
@property (nonatomic) unsigned short facialHairType;
@property (nonatomic) unsigned short genderType;
@property (nonatomic) unsigned short glassesType;
@property (nonatomic, retain) NSString *groupingIdentifier;
@property (nonatomic) unsigned short hairColorType;
@property (nonatomic) bool hasSmile;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic) bool hidden;
@property (getter=isInTrash, nonatomic) bool inTrash;
@property (readonly) bool isNewRequest;
@property (getter=isLeftEyeClosed, nonatomic) bool leftEyeClosed;
@property (nonatomic) double leftEyeX;
@property (nonatomic) double leftEyeY;
@property (nonatomic) unsigned short lipMakeupType;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (nonatomic) bool manual;
@property (nonatomic) double mouthX;
@property (nonatomic) double mouthY;
@property (getter=isMutated, readonly) bool mutated;
@property (nonatomic) long long nameSource;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedFace;
@property (nonatomic) double poseYaw;
@property (nonatomic) double quality;
@property (nonatomic) long long qualityMeasure;
@property (getter=isRightEyeClosed, nonatomic) bool rightEyeClosed;
@property (nonatomic) double rightEyeX;
@property (nonatomic) double rightEyeY;
@property (nonatomic) double roll;
@property (nonatomic) bool shouldClearFaceCropGenerationState;
@property (nonatomic) double size;
@property (nonatomic) unsigned short smileType;
@property (nonatomic) long long sourceHeight;
@property (nonatomic) long long sourceWidth;
@property (readonly) Class superclass;
@property (nonatomic) double yaw;

+ (bool)canGenerateUUIDWithoutEntitlements;
+ (id)changeRequestForFace:(id)arg1;
+ (id)creationRequestForFace;
+ (void)deleteFaces:(id)arg1;

- (void).cxx_destruct;
- (id)adjustmentVersion;
- (unsigned short)ageType;
- (bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3;
- (unsigned short)baldType;
- (double)blurScore;
- (double)centerX;
- (double)centerY;
- (long long)clusterSequenceNumber;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (unsigned short)eyeMakeupType;
- (unsigned short)eyesState;
- (long long)faceAlgorithmVersion;
- (id)faceprint;
- (unsigned short)facialHairType;
- (unsigned short)genderType;
- (unsigned short)glassesType;
- (id)groupingIdentifier;
- (unsigned short)hairColorType;
- (bool)hasSmile;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (bool)isHidden;
- (bool)isInTrash;
- (bool)isLeftEyeClosed;
- (bool)isRightEyeClosed;
- (double)leftEyeX;
- (double)leftEyeY;
- (unsigned short)lipMakeupType;
- (id)managedEntityName;
- (bool)manual;
- (double)mouthX;
- (double)mouthY;
- (long long)nameSource;
- (id)placeholderForCreatedFace;
- (double)poseYaw;
- (bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2;
- (bool)prepareForServicePreflightCheck:(id*)arg1;
- (double)quality;
- (long long)qualityMeasure;
- (double)rightEyeX;
- (double)rightEyeY;
- (double)roll;
- (void)setAdjustmentVersion:(id)arg1;
- (void)setAgeType:(unsigned short)arg1;
- (void)setBaldType:(unsigned short)arg1;
- (void)setBlurScore:(double)arg1;
- (void)setCenterX:(double)arg1;
- (void)setCenterY:(double)arg1;
- (void)setClusterSequenceNumber:(long long)arg1;
- (void)setEyeMakeupType:(unsigned short)arg1;
- (void)setEyesState:(unsigned short)arg1;
- (void)setFaceAlgorithmVersion:(long long)arg1;
- (void)setFaceprint:(id)arg1;
- (void)setFacialHairType:(unsigned short)arg1;
- (void)setGenderType:(unsigned short)arg1;
- (void)setGlassesType:(unsigned short)arg1;
- (void)setGroupingIdentifier:(id)arg1;
- (void)setHairColorType:(unsigned short)arg1;
- (void)setHasSmile:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setInTrash:(bool)arg1;
- (void)setLeftEyeClosed:(bool)arg1;
- (void)setLeftEyeX:(double)arg1;
- (void)setLeftEyeY:(double)arg1;
- (void)setLipMakeupType:(unsigned short)arg1;
- (void)setManual:(bool)arg1;
- (void)setMouthX:(double)arg1;
- (void)setMouthY:(double)arg1;
- (void)setNameSource:(long long)arg1;
- (void)setPoseYaw:(double)arg1;
- (void)setQuality:(double)arg1;
- (void)setQualityMeasure:(long long)arg1;
- (void)setRightEyeClosed:(bool)arg1;
- (void)setRightEyeX:(double)arg1;
- (void)setRightEyeY:(double)arg1;
- (void)setRoll:(double)arg1;
- (void)setShouldClearFaceCropGenerationState:(bool)arg1;
- (void)setSize:(double)arg1;
- (void)setSmileType:(unsigned short)arg1;
- (void)setSourceHeight:(long long)arg1;
- (void)setSourceWidth:(long long)arg1;
- (void)setYaw:(double)arg1;
- (bool)shouldClearFaceCropGenerationState;
- (double)size;
- (unsigned short)smileType;
- (long long)sourceHeight;
- (long long)sourceWidth;
- (double)yaw;

@end
