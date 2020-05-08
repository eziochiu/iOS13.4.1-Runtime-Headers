/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBSynchronizeCloudCriticalDataOperation : NSObject {
    bool  _needsSync;
    NSOperationQueue * _operationQueue;
    NSObject<OS_dispatch_queue> * _queue;
    SBBootDefaults * _queue_bootDefaults;
    BSMonotonicReferenceTime * _queue_cloudSyncStartReferenceTime;
    bool  _queue_isComplete;
    unsigned long long  _queue_operationCount;
    NSObject<OS_dispatch_group> * _queue_operationGroup;
    NSMutableArray * _testOperations;
}

@property (getter=isComplete, nonatomic, readonly) bool complete;

- (void).cxx_destruct;
- (void)_addTestOperation:(id)arg1;
- (void)_fetchDomains:(id)arg1 fromIndex:(long long)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (unsigned long long)_pendingOperationCount;
- (void)_queue_addOperation:(id)arg1;
- (id)_queue_fetchCloudAccountOperation;
- (id)_queue_fetchCloudDefaultsOperation;
- (id)_queue_fetchMDMProfilesOperation;
- (bool)_queue_isComplete;
- (id)_queue_migrateSoundPreferencesOperation;
- (void)_queue_startFetchingCloudCriticalData;
- (id)init;
- (id)initWithDefaults:(id)arg1 userManager:(id)arg2;
- (bool)isComplete;
- (void)startSynchronize;
- (bool)waitForSynchronizeToCompleteWithTimeout:(double)arg1;

@end