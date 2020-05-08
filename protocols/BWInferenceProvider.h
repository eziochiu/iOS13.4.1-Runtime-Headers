/* Generated by EzioChiu.
 */

@protocol BWInferenceProvider <BWInferenceJobProvider>

@required

- (NSArray *)cloneVideoRequirements;
- (int)executionTarget;
- (NSArray *)inputMetadataRequirements;
- (NSArray *)inputVideoRequirements;
- (BWInferenceProviderStorage *)newStorage;
- (NSArray *)outputMetadataRequirements;
- (NSArray *)outputVideoRequirements;
- (NSSet *)preventionReasons;
- (int)prewarmUsingLimitedMemory:(bool)arg1;
- (void)propagateInferenceResultsToInferenceDictionary:(NSMutableDictionary *)arg1 usingStorage:(BWInferenceProviderStorage *)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3;
- (int)type;

@end