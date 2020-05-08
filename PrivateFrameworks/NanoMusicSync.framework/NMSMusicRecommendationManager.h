/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSMusicRecommendationManager : NSObject {
    double  _artworkRetryInterval;
    NSSet * _artworkRetryPlaylists;
    NSObject<OS_dispatch_source> * _artworkRetryTimer;
    bool  _hasFetchedInitialRecommendations;
    NSObject<OS_dispatch_group> * _initialRecommendationsFetchGroup;
    bool  _loadingContents;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _recommendationExpirationTimer;
    double  _recommendationRetryInterval;
    NSObject<OS_dispatch_source> * _recommendationRetryTimer;
    NSArray * _recommendations;
    bool  _wantsContentsUpdate;
}

@property (nonatomic) bool wantsContentsUpdate;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_deleteCachedArtworksWithTokens:(id)arg1;
- (id)_expirationDateForUpdateDate:(id)arg1 withOffsetDays:(long long)arg2 preferredTimeWindow:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)_fetchAddedDateForContainer:(id)arg1;
- (void)_finishLoadingContentsWithResponse:(id)arg1;
- (void)_handleActiveAccountDidChangeNotification:(id)arg1;
- (void)_handleArtworksDidUpdateNotification:(id)arg1;
- (void)_handleMediaLibraryDidChangeNotification:(id)arg1;
- (void)_handleMediaLibraryEntitiesAddedOrRemovedNotification:(id)arg1;
- (void)_handlePairedDeviceDidBecomeActiveNotification:(id)arg1;
- (void)_handlePairingFinishedNotification:(id)arg1;
- (void)_handleRecommendationSelectionsDidChangeNotification:(id)arg1;
- (void)_handleRecommendationStoreContentsDidChangeNotification:(id)arg1;
- (void)_handleSubscriptionStatusDidChangeNotification:(id)arg1;
- (void)_importArtworkForPlaylists:(id)arg1;
- (void)_importArtworkIfNecessaryForObjectsIgnorePreviousCache:(bool)arg1;
- (void)_invalidateArtworkRetryTimer;
- (void)_invalidateRecommendationExpirationTimer;
- (void)_invalidateRecommendationRetryTimer;
- (bool)_isRecommendationExpired;
- (void)_notifyMusicRecommendationsDidUpdateNotification;
- (void)_persistUpdatedRecommendationsWithResponse:(id)arg1;
- (id)_recommendations;
- (void)_registerForPairingFinishedNotification;
- (void)_reloadLibraryRecommendations;
- (void)_reloadRecommendationContentsIfNecessary;
- (void)_reloadRecommendationsFromDefaultsWithCompletion:(id /* block */)arg1;
- (void)_reloadStoreRecommendations;
- (void)_removeLegacyRecommendationsDefaultsIfNecessary;
- (void)_removePreviousRecommendationDefaults;
- (void)_retryFailedArtworkImportsIfNecessary;
- (void)_scheduleNextRecommendationReloadIfNecessary;
- (void)_setArtworkImageCache:(id)arg1 withToken:(id)arg2;
- (id)_sortedContainersBasedOnRecency;
- (void)_startArtworkRetryTimer;
- (void)_startRecommendationRetryTimer;
- (void)_unregisterForPairingFinishedNotification;
- (bool)_updateRecommendationsSelections;
- (bool)_updateWithRecommendations:(id)arg1;
- (void)dealloc;
- (void)fetchRecommendationsWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (bool)hasSelectedRecommendationWithIdentifier:(id)arg1;
- (id)init;
- (void)nms_deselectRecommendationIfNecessaryForModelObject:(id)arg1;
- (void)nms_fetchRecommendationForModelObject:(id)arg1 forRecommendationTypes:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)nms_fetchSelectedRecommendationTypesForModelObject:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)persistRecommendationsSelections:(id)arg1;
- (void)setWantsContentsUpdate:(bool)arg1;
- (bool)wantsContentsUpdate;

@end