/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGTripMemoryGenerator : PGFeaturedMemoryGenerator {
    NSDate * _lowerBoundLocalDate;
    unsigned long long  _numberOfUntimelyRejects;
    unsigned long long  _subcategory;
    PGGraphHighlightGroupNode * _tripNode;
}

@property (nonatomic, retain) NSDate *lowerBoundLocalDate;
@property (readonly) unsigned long long subcategory;
@property (nonatomic, retain) PGGraphHighlightGroupNode *tripNode;

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (id)_tripNodeForPotentialMemory:(id)arg1;
- (id)initWithSubcategory:(unsigned long long)arg1 controller:(id)arg2;
- (id)lowerBoundLocalDate;
- (id)potentialMemoryWithTripNode:(id)arg1;
- (void)setLowerBoundLocalDate:(id)arg1;
- (void)setTripNode:(id)arg1;
- (unsigned long long)subcategory;
- (id)tripNode;

@end
