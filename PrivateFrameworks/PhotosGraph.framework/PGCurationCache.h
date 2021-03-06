/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGCurationCache : CLSDBCache

+ (id)defaultCacheName;

- (id)_curatedAssetIdentifiersForEventWithIdentifier:(id)arg1 options:(id)arg2;
- (id)_curatedKeyAssetIdentifierForEventWithIdentifier:(id)arg1 options:(id)arg2;
- (id)_fetchCurationObjectForEntityName:(id)arg1 predicate:(id)arg2;
- (void)_invalidateCacheForEventWithIdentifier:(id)arg1;
- (void)_invalidateCacheForEventWithIdentifier:(id)arg1 precision:(unsigned long long)arg2;
- (void)_invalidateCacheForEventsWithIdentifiers:(id)arg1;
- (void)_setCuratedAssets:(id)arg1 forEventWithIdentifier:(id)arg2 options:(id)arg3;
- (void)_setCuratedKeyAsset:(id)arg1 forEventWithIdentifier:(id)arg2 options:(id)arg3;
- (void)_setProperties:(id)arg1 forCurationObjectWithEntityName:(id)arg2 eventIdentifier:(id)arg3 precision:(unsigned long long)arg4 predicate:(id)arg5;
- (double)contentScoreForMoment:(id)arg1 precision:(unsigned long long)arg2 isCached:(bool*)arg3;
- (double)contentScoreForMomentLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 isCached:(bool*)arg3;
- (id)curatedAssetIdentifiersForCollectionWithIdentifier:(id)arg1 options:(id)arg2;
- (id)curatedAssetIdentifiersForMoment:(id)arg1 options:(id)arg2;
- (id)curatedKeyAssetIdentifierForCollectionWithIdentifier:(id)arg1 options:(id)arg2;
- (id)curatedKeyAssetIdentifierForMoment:(id)arg1 options:(id)arg2;
- (id)dataModelName;
- (id)initAtURL:(id)arg1;
- (void)invalidateCacheForCollectionWithIdentifier:(id)arg1;
- (void)invalidateCacheForEventIdentifiers:(id)arg1;
- (void)invalidateCacheForMomentIdentifier:(id)arg1;
- (void)invalidateCacheForMomentIdentifier:(id)arg1 precision:(unsigned long long)arg2;
- (bool)isMomentInteresting:(id)arg1 precision:(unsigned long long)arg2 isCached:(bool*)arg3;
- (bool)isMomentLocalIdentifierInteresting:(id)arg1 precision:(unsigned long long)arg2 isCached:(bool*)arg3;
- (void)setContentScore:(double)arg1 forMoment:(id)arg2 precision:(unsigned long long)arg3;
- (void)setCuratedAssets:(id)arg1 forCollectionWithIdentifier:(id)arg2 options:(id)arg3;
- (void)setCuratedAssets:(id)arg1 forMoment:(id)arg2 options:(id)arg3;
- (void)setCuratedKeyAsset:(id)arg1 forCollectionWithIdentifier:(id)arg2 options:(id)arg3;
- (void)setCuratedKeyAsset:(id)arg1 forMoment:(id)arg2 options:(id)arg3;
- (void)setMeanContentScore:(double)arg1 forMoment:(id)arg2 precision:(unsigned long long)arg3;
- (void)setMomentInteresting:(bool)arg1 forMoment:(id)arg2 precision:(unsigned long long)arg3;

@end
