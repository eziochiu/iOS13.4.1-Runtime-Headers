/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGPetMemoryGenerator : PGFeaturedMemoryGenerator

- (void)_enumerateBestPotentialMemoriesInLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)arg1;
- (void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (void)_potentialPetMemoryForPet:(id)arg1 results:(id /* block */)arg2;
- (void)_randomEnumerateOverLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 rejectedNumbers:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; }*)arg3 enumerationBlock:(id /* block */)arg4;
- (bool)canFallbackToDejunkAndDedupeForShowMore;
- (id)confidenceThresholdByBlacklistedSceneIdentifier;
- (id)confidenceThresholdByWhitelistedSceneIdentifier;

@end