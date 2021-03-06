/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCallerIdentificationResult : NSObject {
    NSString * _callerIdentifier;
    float  _confidence;
    PHFace * _face;
}

@property (nonatomic, readonly) NSString *callerIdentifier;
@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) PHFace *face;

- (void).cxx_destruct;
- (id)callerIdentifier;
- (float)confidence;
- (id)face;
- (id)initWithCallerIdentifier:(id)arg1 face:(id)arg2 andConfidence:(float)arg3;

@end
