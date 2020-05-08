/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGMoodSource : NSObject {
    PHAssetCollection * _assetCollection;
    PGManager * _graphManager;
    NSDictionary * _moodSourceDictionary;
    PGMoodVector * _negativeVector;
    PGMoodGeneratorOptions * _options;
    PGMoodVector * _positiveVector;
}

@property (readonly) PHAssetCollection *assetCollection;
@property (readonly) PGManager *graphManager;
@property (readonly) NSDictionary *moodSourceDictionary;
@property (retain) PGMoodVector *negativeVector;
@property (readonly) PGMoodGeneratorOptions *options;
@property (retain) PGMoodVector *positiveVector;

+ (id)_plistName;

- (void).cxx_destruct;
- (void)_combineMoodVectors;
- (id)_moodVectorForMoodIdentifier:(id)arg1;
- (id)_moodVectors;
- (id)_plistMoodIdentifiers;
- (unsigned long long)_sourceInputCount;
- (id)assetCollection;
- (id)graphManager;
- (id)initWithAssetCollection:(id)arg1 graphManager:(id)arg2 options:(id)arg3;
- (id)moodSourceDictionary;
- (id)negativeVector;
- (id)options;
- (id)positiveVector;
- (void)setNegativeVector:(id)arg1;
- (void)setPositiveVector:(id)arg1;
- (double)weight;

@end