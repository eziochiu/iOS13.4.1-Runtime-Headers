/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudResourceManager : NSObject {
    bool  _enqueuedOperation;
    NSDate * _lastOperationDate;
    PLCloudResourcePrefetchManager * _prefetchManager;
    PLCloudResourcePruneManager * _pruneManager;
    NSObject<OS_dispatch_queue> * _workQueue;
}

- (void).cxx_destruct;
- (void)_runOnWorkQueueWithTransaction:(id)arg1 block:(id /* block */)arg2;
- (void)handleOptimizeModeChange;
- (id)init;
- (id)initWithCPLManager:(id)arg1 library:(id)arg2;
- (void)invalidate;
- (void)startAutomaticPrefetchAndPruneWithTimeout:(bool)arg1;
- (id)statusForDebug:(bool)arg1;
- (void)stop;
- (void)updateCacheDeletePurgeableAmount;

@end
