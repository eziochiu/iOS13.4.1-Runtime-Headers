/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCloudKitMirroringDelegate : NSObject <NSPersistentStoreMirroringDelegate, PFCloudKitExporterDelegate> {
    PFCloudKitThrottledNotificationObserver * _accountChangeObserver;
    PFCloudKitThrottledNotificationObserver * _appActivateLifecycleObserver;
    PFCloudKitThrottledNotificationObserver * _appDeactivateLifecycleObserver;
    NSString * _ckDatabaseName;
    NSObject<OS_dispatch_queue> * _cloudKitQueue;
    NSObject<OS_dispatch_semaphore> * _cloudKitQueueSemaphore;
    CKContainer * _container;
    CDDCloudKitClient * _coredatadClient;
    CKDatabase * _database;
    CKDatabaseSubscription * _databaseSubscription;
    PFCloudKitExporterOptions * _exporterOptions;
    bool  _hadObservedStore;
    NSError * _lastInitializationError;
    CKNotificationListener * _notificationListener;
    NSPersistentStoreCoordinator * _observedCoordinator;
    NSSQLCore * _observedStore;
    NSCloudKitMirroringDelegateOptions * _options;
    CKRecordZone * _recordZone;
    NSCloudKitMirroringRequestManager * _requestManager;
    CKScheduler * _scheduler;
    bool  _successfullyInitialized;
}

@property (nonatomic, readonly) NSString *ckDatabaseName;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cloudKitQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *cloudKitQueueSemaphore;
@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) CKDatabase *database;
@property (nonatomic, readonly) CKDatabaseSubscription *databaseSubscription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PFCloudKitExporterOptions *exporterOptions;
@property (nonatomic, readonly) bool hadObservedStore;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSError *lastInitializationError;
@property (nonatomic, readonly) CKNotificationListener *notificationListener;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *observedCoordinator;
@property (nonatomic, readonly) NSPersistentStore *observedStore;
@property (nonatomic, readonly, copy) NSCloudKitMirroringDelegateOptions *options;
@property (nonatomic, readonly) CKRecordZone *recordZone;
@property (nonatomic, readonly, retain) NSCloudKitMirroringRequestManager *requestManager;
@property (nonatomic, readonly) CKScheduler *scheduler;
@property (nonatomic, readonly) bool successfullyInitialized;
@property (readonly) Class superclass;

+ (bool)checkAndCreateDirectoryAtURL:(id)arg1 wipeIfExists:(bool)arg2 error:(id*)arg3;
+ (bool)checkForCloudKitTablesInStoreAtURL:(id)arg1 withPersistentStoreCoordinator:(id)arg2 withConfiguration:(id)arg3;
+ (bool)checkIfContentsOfStore:(id)arg1 matchContentsOfStore:(id)arg2 error:(id*)arg3;
+ (id)cloudKitMachServiceName;
+ (id)cloudKitMetadataTransformerName;
+ (id)createCloudKitServerWithMachServiceName:(id)arg1 andStorageDirectoryPath:(id)arg2;
+ (void)initialize;
+ (bool)isFirstPartyContainerIdentifier:(id)arg1;
+ (id)makeACopyOfTheStoreAtURL:(id)arg1 withCoordinator:(id)arg2 error:(id*)arg3;
+ (void)printMetadataForStoreAtURL:(id)arg1 withConfiguration:(id)arg2 operateOnACopy:(bool)arg3;
+ (void)printRepresentativeSchemaForModelAtURL:(id)arg1 orStoreAtURL:(id)arg2 withConfiguration:(id)arg3;
+ (id)stringForResetReason:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_beginWatchingForChanges;
- (bool)_createSchemaWithMonitor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)_dateExceedsSchedulingThreshold:(id)arg1;
- (void)_enqueueRequest:(id)arg1;
- (void)_executeRequest:(id)arg1;
- (void)_finishedRequest:(id)arg1 withResult:(id)arg2;
- (void)_openTransactionWithLabel:(id)arg1 andExecuteWorkBlock:(id /* block */)arg2;
- (void)_performDelegateResetRequest:(id)arg1;
- (void)_performExportProgressRequest:(id)arg1;
- (void)_performExportWithRequest:(id)arg1;
- (void)_performFetchRecordsRequest:(id)arg1;
- (void)_performImportWithRequest:(id)arg1;
- (void)_performMetadataResetRequest:(id)arg1;
- (void)_performResetZoneRequest:(id)arg1;
- (void)_performSchemaInitializationRequest:(id)arg1;
- (void)_performSerializationRequest:(id)arg1;
- (void)_performSetupRequest:(id)arg1;
- (void)_postResetSyncNotificationWithName:(id)arg1 forError:(id)arg2;
- (bool)_recoverFromError:(id)arg1 withMonitor:(id)arg2;
- (bool)_recoverFromPartialError:(id)arg1 withMonitor:(id)arg2;
- (void)_requestAbortedNotInitialized:(id)arg1;
- (void)_requestEncounteredRecoverableError:(id)arg1 withResult:(id)arg2;
- (void)_requestEncounteredUnrecoverableError:(id)arg1 withResult:(id)arg2;
- (void)_respondToAccountOrIdentityChangeNotification:(id)arg1;
- (void)_respondToApplicationActivationNotification:(id)arg1;
- (void)_respondToApplicationDeactivationNotification:(id)arg1;
- (void)_scheduleAutomatedExportWithLabel:(id)arg1 activity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_scheduleAutomatedImportWithLabel:(id)arg1 activity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_setAccountNotificationBackoffInterval:(long long)arg1;
- (void)_setAppActivateObserver:(id)arg1;
- (void)_setAppDeactivateObserver:(id)arg1;
- (void)_setContainer:(id)arg1;
- (void)_setDatabase:(id)arg1;
- (void)_setObservedStore:(id)arg1 observedCoordinator:(id)arg2;
- (void)_setRequestManager:(id)arg1;
- (void)_setUpCloudKitIntegration;
- (void)_setZone:(id)arg1;
- (void)applicationDidActivate:(id)arg1;
- (void)applicationWillDeactivate:(id)arg1;
- (void)checkAndExecuteNextRequest;
- (void)checkAndScheduleImportIfNecessary:(bool)arg1;
- (void)checkForNewChanges;
- (void)ckAccountOrIdentityChangedHandler:(id)arg1;
- (id)ckDatabaseName;
- (id)cloudKitQueue;
- (id)cloudKitQueueSemaphore;
- (id)container;
- (void)coordinatorWillRemoveStore:(id)arg1;
- (id)database;
- (id)databaseSubscription;
- (void)dealloc;
- (id)executeMirroringRequest:(id)arg1 error:(id*)arg2;
- (void)exporter:(id)arg1 willScheduleOperations:(id)arg2;
- (id)exporterOptions;
- (void)fetchChangesAndUpdateObservedStore;
- (void)finishedAutomatedRequestWithResult:(id)arg1;
- (bool)hadObservedStore;
- (void)handleErrorInResult:(id)arg1;
- (id)initWithCloudKitContainerOptions:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (id)lastInitializationError;
- (void)logResetSyncNotification:(id)arg1;
- (void)managedObjectContextSaved:(id)arg1;
- (id)newActivityWithIdentifier:(id)arg1;
- (id)notificationListener;
- (void)observeChangesForStore:(id)arg1 inPersistentStoreCoordinator:(id)arg2;
- (id)observedCoordinator;
- (id)observedStore;
- (id)options;
- (void)persistentStoreCoordinator:(id)arg1 didSuccessfullyAddPersistentStore:(id)arg2 withDescription:(id)arg3;
- (void)postDidResetNotificationForError:(id)arg1;
- (void)postWillResetNotificationForError:(id)arg1;
- (id)recordZone;
- (bool)recoverFromError:(id)arg1;
- (void)remoteStoreDidChange:(id)arg1;
- (void)removeNotificationRegistrations;
- (id)requestManager;
- (void)resetAfterError:(id)arg1;
- (void)resetAfterError:(id)arg1 andKeepContainer:(bool)arg2;
- (id)resetNotificationUserInfoForError:(id)arg1;
- (void)scheduleExportWithMonitor:(id)arg1;
- (id)scheduler;
- (void)storesDidChange:(id)arg1;
- (bool)successfullyInitialized;
- (void)tearDown;
- (bool)validateManagedObjectModel:(id)arg1 forUseWithStoreWithDescription:(id)arg2 error:(id*)arg3;

@end