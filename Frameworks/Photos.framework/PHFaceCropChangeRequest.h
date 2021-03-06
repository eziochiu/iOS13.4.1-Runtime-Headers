/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHFaceCropChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {
    PHRelationshipChangeRequestHelper * _faceHelper;
    NSString * _originatingFaceUUID;
    PHRelationshipChangeRequestHelper * _personHelper;
}

@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) id /* block */ concurrentWorkBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *faceHelper;
@property (readonly) unsigned long long hash;
@property (readonly) bool isNewRequest;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (getter=isMutated, readonly) bool mutated;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, copy) NSString *originatingFaceUUID;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *personHelper;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedFaceCrop;
@property (nonatomic, retain) NSData *resourceData;
@property (nonatomic) short state;
@property (readonly) Class superclass;

+ (id)_creationRequestForFaceCropWithOriginatingFace:(id)arg1 resourceData:(id)arg2 person:(id)arg3;
+ (id)_creationRequestForFaceCropWithOriginatingFace:(id)arg1 resourceData:(id)arg2 personLocalIdentifier:(id)arg3;
+ (bool)canGenerateUUIDWithoutEntitlements;
+ (id)changeRequestForFaceCrop:(id)arg1;
+ (id)creationRequestsForFaceCropsWithOriginatingFace:(id)arg1 resourceData:(id)arg2;
+ (void)deleteFaceCrops:(id)arg1;

- (void).cxx_destruct;
- (id)_mutableFaceObjectIDsAndUUIDs;
- (id)_mutablePersonObjectIDsAndUUIDs;
- (void)_prepareFaceHelperIfNeeded;
- (void)_preparePersonHelperIfNeeded;
- (bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)faceHelper;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (id)managedEntityName;
- (id)originatingFaceUUID;
- (id)personHelper;
- (id)placeholderForCreatedFaceCrop;
- (bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2;
- (bool)prepareForServicePreflightCheck:(id*)arg1;
- (id)resourceData;
- (void)setFace:(id)arg1;
- (void)setOriginatingFaceUUID:(id)arg1;
- (void)setResourceData:(id)arg1;
- (void)setState:(short)arg1;
- (short)state;
- (bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;

@end
