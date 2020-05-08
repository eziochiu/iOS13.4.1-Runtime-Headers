/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKIDSMessageGenerator : NSObject {
    bool  _destinationIsInstructor;
}

@property (nonatomic, readonly) bool destinationIsInstructor;

- (id)addInstructorKeyIfNeededToDictionary:(id)arg1;
- (bool)destinationIsInstructor;
- (id)init;
- (id)initForInstructorDestination:(bool)arg1;
- (id)messageToRequestCertificateFromDevice:(id)arg1;
- (id)messageWithActiveCertificate:(id)arg1 stagedCertificate:(id)arg2 fromDevice:(id)arg3;
- (id)messageWithAdvertisingIdentifier:(id)arg1 activeCertificate:(id)arg2 stagedCertificate:(id)arg3 fromDevice:(id)arg4;

@end