/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGDayInHistoryMemoryGenerator : PGMemoryGenerator {
    NSDate * _localDate;
}

@property (nonatomic, retain) NSDate *localDate;

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (id)localDate;
- (void)setLocalDate:(id)arg1;

@end