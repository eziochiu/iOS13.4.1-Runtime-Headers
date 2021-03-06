/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFCoreDataDatabase : NSObject <WFDatabaseBackingStore> {
    NSPersistentContainer * _container;
    NSManagedObjectContext * _context;
    bool  _transactionInProgress;
}

@property (nonatomic, readonly) NSPersistentContainer *container;
@property (nonatomic, retain) NSManagedObjectContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool transactionInProgress;

- (void).cxx_destruct;
- (id)_syncToken;
- (id)accessResourceStatesForReference:(id)arg1;
- (void)accessStorageForDescriptor:(id)arg1 usingBlock:(id /* block */)arg2 withError:(id*)arg3;
- (id)allConfiguredTriggers;
- (void)clearTombstonesAndSyncState;
- (id)conflictingReferenceForReference:(id)arg1;
- (id)container;
- (id)context;
- (id)createTriggerWithRecord:(id)arg1 workflow:(id)arg2 error:(id*)arg3;
- (id)createWorkflowWithOptions:(id)arg1 error:(id*)arg2;
- (id)currentPerWorkflowStateDataForAccessResourceWithIdentifier:(id)arg1 forReference:(id)arg2;
- (void)deleteAllAccessResourceStateDataForReference:(id)arg1;
- (bool)deleteReference:(id)arg1 tombstone:(bool)arg2 error:(id*)arg3;
- (id)deletedWorkflows;
- (id)descriptorsForResult:(id)arg1 error:(id*)arg2;
- (id)duplicateReference:(id)arg1 newName:(id)arg2 error:(id*)arg3;
- (id)fileURL;
- (id)initWithStoreDescription:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isReference:(id)arg1 allowedToRunOnDomain:(id)arg2;
- (id)latestRunEvent;
- (id)logRunOfWorkflow:(id)arg1 withSource:(id)arg2 triggerID:(id)arg3;
- (void)moveReferenceFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)objectForDescriptor:(id)arg1;
- (id)objectOfClass:(Class)arg1 withIdentifier:(id)arg2 forKey:(id)arg3;
- (void)performTransactionWithBlock:(id /* block */)arg1 error:(id*)arg2;
- (id)referencesForWorkflowName:(id)arg1;
- (void)refresh;
- (bool)saveIfNecessary:(id*)arg1;
- (void)setConflictingReference:(id)arg1 forReference:(id)arg2;
- (void)setContext:(id)arg1;
- (void)setOutcome:(long long)arg1 forRunEvent:(id)arg2;
- (void)setPerWorkflowStateData:(id)arg1 forAccessResourceWithIdentifier:(id)arg2 forReference:(id)arg3;
- (void)setSyncToken:(id)arg1;
- (void)setTransactionInProgress:(bool)arg1;
- (void)setTrustedToRunScripts:(bool)arg1 forReference:(id)arg2 onDomain:(id)arg3;
- (void)setWorkflowOrdering:(id)arg1;
- (id)sortedRunEventsForTriggerID:(id)arg1;
- (id)sortedRunEventsWithSource:(id)arg1;
- (id)sortedVisibleWorkflows;
- (id)sortedVisibleWorkflowsByName;
- (id)sortedVisibleWorkflowsWithAssociatedAppBundleIdentifier:(id)arg1;
- (id)sortedVisibleWorkflowsWithType:(id)arg1;
- (id)sortedWorkflowsIncludingTombstonesAndConflicts;
- (bool)startObservingChangesForResult:(id)arg1;
- (id)syncToken;
- (bool)transactionInProgress;
- (id)visiblePredicate;
- (id)workflowReferenceWithName:(id)arg1;

@end
