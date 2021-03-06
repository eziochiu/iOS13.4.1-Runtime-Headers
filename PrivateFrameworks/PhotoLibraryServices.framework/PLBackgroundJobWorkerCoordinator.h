/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLBackgroundJobWorkerCoordinator : NSObject {
    PLBackgroundJobWorkerPriorityTuple * _currentWorker;
    <PLBackgroundJobWorkerCoordinatorDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _pendingWorkers;
    NSArray * _workerClassesAsStrings;
}

@property (nonatomic) <PLBackgroundJobWorkerCoordinatorDelegate> *delegate;

- (void).cxx_destruct;
- (void)_handleAllWorkersCompleted;
- (void)_processNextWorker;
- (id)_workersForBundle:(id)arg1;
- (id)delegate;
- (bool)hasPendingJobsForBundle:(id)arg1 priority:(unsigned long long)arg2;
- (id)init;
- (id)initWithWorkerClassesAsStrings:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)stopAllBackgorundJobs;
- (void)submitBundleForProcessing:(id)arg1 priority:(unsigned long long)arg2;

@end
