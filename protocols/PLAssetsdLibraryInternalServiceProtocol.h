/* Generated by EzioChiu.
 */

@protocol PLAssetsdLibraryInternalServiceProtocol <NSObject>

@required

- (void)applyGraphUpdates:(void *)arg1 supportingData:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)applySearchIndexUpdates:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)backgroundJobServiceRemoveAllBundleRecordsFromProcessingSet;
- (void)deleteiTunesSyncedContentWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)getAssetCountsWithReply:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, unsigned long long, NSError *, void*
- (void)getBackgroundJobServiceBundlesInQueueDictionaryWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getBackgroundJobServiceStateWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)getLibrarySizesFromDB:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSDictionary *, NSError *, void*
- (void)getSearchIndexProgressWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)getSizeOfResourcesToUploadByCPLWithReply:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, long long, NSError *, void*
- (void)invalidateBehavioralScoreOnAllAssetsWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)invalidateReverseLocationDataOnAllAssetsWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)markAnalysisStatesProcessedForWorkerType:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)markPersonAsNeedingKeyFaceWithPersonUUID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)previewAssetLocalIdentifiersWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)previewRenderedContentURLAtIndex:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSURL *, NSError *, void*
- (void)previewRenderedContentURLCountWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)registerBackgroundJobServiceIfNecessaryOnLibraryPath:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)reloadMomentGenerationOptions;
- (void)removeAnalysisRecordsForDeletedAssetsWithUUIDs:(NSArray *)arg1 workerType:(unsigned long long)arg2;
- (void)repairMemoriesWithUUIDs:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resetPendingAnalysisStatesWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setAssetKeywords:(void *)arg1 forAssetUUID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSSet *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)updateAssetLocationDataWithUUID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)waitForSearchIndexExistenceWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end