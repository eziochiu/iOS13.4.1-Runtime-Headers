/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNANFDDetectorCompoundRequest : VNCompoundRequest

+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id*)arg3;
+ (Class)configurationClass;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

- (void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2;
- (id)initWithDetectorType:(id)arg1 configuration:(id)arg2;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

@end
