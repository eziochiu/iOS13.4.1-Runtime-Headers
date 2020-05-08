/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAAssetFingerprintDatasetBuilder : NSObject {
    PHACoreDuetDatasetStorage * _datasetStore;
    long long  _fingerprintVersion;
    NSString * _inputName;
    NSString * _labelName;
    NSArray * _negativeAssetIdentifiers;
    NSString * _negativesDatasetName;
    NSString * _negativesSubsetName;
    PHPhotoLibrary * _photoLibrary;
    long long  _policy;
    NSArray * _positiveAssetIdentifiers;
    NSString * _positivesDatasetName;
    NSString * _positivesSubsetName;
    NSNumber * _totalNumberOfSamples;
}

@property (nonatomic, retain) PHACoreDuetDatasetStorage *datasetStore;
@property (nonatomic, readonly) long long fingerprintVersion;
@property (nonatomic, readonly) NSString *inputName;
@property (nonatomic, readonly) NSString *labelName;
@property (nonatomic, retain) NSArray *negativeAssetIdentifiers;
@property (nonatomic, readonly) NSString *negativesDatasetName;
@property (nonatomic, readonly) NSString *negativesSubsetName;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) long long policy;
@property (nonatomic, retain) NSArray *positiveAssetIdentifiers;
@property (nonatomic, readonly) NSString *positivesDatasetName;
@property (nonatomic, readonly) NSString *positivesSubsetName;
@property (nonatomic, readonly) NSNumber *totalNumberOfSamples;

+ (id)_randomIndicesWithUpperBound:(unsigned long long)arg1 count:(unsigned long long)arg2;
+ (long long)datasetBuilderPolicyForPolicyName:(id)arg1;

- (void).cxx_destruct;
- (id)_assetIdentifiersForCoreDuetDatasetName:(id)arg1 subsetName:(id)arg2;
- (id)_datasetWithNumberOfPositiveSamples:(id)arg1 numberOfNegativeSamples:(id)arg2 error:(id*)arg3;
- (id)_fetchOptionsForCurrentSceneprintVersion;
- (id)_randomAssetsOfCount:(unsigned long long)arg1 error:(id*)arg2;
- (id)_sampleAssetsOfCount:(unsigned long long)arg1 fromAssetIdentifiers:(id)arg2 error:(id*)arg3;
- (id)balancedDatasetWithError:(id*)arg1;
- (id)balancedStrictDatasetWithError:(id*)arg1;
- (id)datasetStore;
- (id)datasetWithError:(id*)arg1;
- (long long)fingerprintVersion;
- (id)initWithPolicy:(long long)arg1 fingerprintVersion:(long long)arg2 inputName:(id)arg3 labelName:(id)arg4 positivesDatasetName:(id)arg5 positivesSubsetName:(id)arg6 negativesDatasetName:(id)arg7 negativesSubsetName:(id)arg8 totalNumberOfSamples:(id)arg9 photoLibrary:(id)arg10;
- (id)inputName;
- (id)labelName;
- (id)negativeAssetIdentifiers;
- (id)negativesDatasetName;
- (id)negativesSubsetName;
- (id)photoLibrary;
- (long long)policy;
- (id)positiveAssetIdentifiers;
- (id)positivesDatasetName;
- (id)positivesSubsetName;
- (void)setDatasetStore:(id)arg1;
- (void)setNegativeAssetIdentifiers:(id)arg1;
- (void)setPositiveAssetIdentifiers:(id)arg1;
- (id)totalNumberOfSamples;
- (id)unbalancedDatasetWithError:(id*)arg1;

@end