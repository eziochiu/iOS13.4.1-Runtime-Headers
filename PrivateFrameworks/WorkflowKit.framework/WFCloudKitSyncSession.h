/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFCloudKitSyncSession : NSObject {
    CKContainer * _container;
    CKDatabase * _database;
    CKRecordZoneID * _recordZoneID;
    CKRecordID * _userRecordID;
}

@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) CKDatabase *database;
@property (nonatomic, readonly) CKRecordZoneID *recordZoneID;
@property (nonatomic, readonly) CKRecordID *userRecordID;

+ (id)checkForConflictsBetweenIncomingChanges:(id)arg1 incomingDeletes:(id)arg2 outgoingChanges:(id)arg3 outgoingDeletes:(id)arg4 incomingOrderedWorkflowIDs:(id)arg5 outgoingOrderedWorkflowIDs:(id)arg6 detectingDuplicateWorkflowsInDatabase:(id)arg7 outWorkflowIDsToRename:(id*)arg8 outLocalWorkflowsToDelete:(id*)arg9;
+ (bool)ignoresUserDeletedZoneErrors;
+ (void)initialize;
+ (bool)isSyncEnabled;
+ (bool)isSyncOrderingEnabled;
+ (id)mergePreviousOrdering:(id)arg1 incomingOrdering:(id)arg2 outgoingOrdering:(id)arg3 sendOutgoingChange:(bool*)arg4 saveLocalChange:(bool*)arg5;
+ (void)setIgnoresUserDeletedZoneErrors:(bool)arg1;
+ (void)setSyncEnabled:(bool)arg1;
+ (void)setVoiceShortcutMigrationDidRun:(bool)arg1;
+ (void)setVoiceShortcutMigrationDidSync:(bool)arg1;
+ (bool)voiceShortcutMigrationDidRun;
+ (bool)voiceShortcutMigrationDidSync;

- (void).cxx_destruct;
- (id)accountNameForSyncToken;
- (id)applyConflictResolution:(id)arg1 inDatabase:(id)arg2;
- (bool)buildOutgoingChangesFromDatabase:(id)arg1 sendAllChanges:(bool)arg2 outChangedWorkflows:(out id*)arg3 outPreSyncHashes:(out id*)arg4 outDeletedWorkflowIDs:(out id*)arg5 outOrderedWorkflowIDs:(out id*)arg6;
- (void)clearSyncStateForWorkflows:(id)arg1 inDatabase:(id)arg2;
- (id)container;
- (bool)createRecordZoneIfNecessaryWithDatabase:(id)arg1 error:(id*)arg2;
- (id)database;
- (bool)fetchChangesFromCloudKitSinceChangeToken:(id)arg1 outChangedWorkflowRecords:(out id*)arg2 outDeleted:(out id*)arg3 outOrderedWorkflowIDs:(out id*)arg4 outNewServerChangeToken:(out id*)arg5 error:(id*)arg6;
- (long long)fetchCurrentAccountInfo;
- (id)init;
- (void)pruneIncomingChanges:(id)arg1 deletes:(id)arg2 inDatabase:(id)arg3 outWorkflowsToReupload:(id*)arg4;
- (bool)pushChangesToCloudKit:(id)arg1 deletes:(id)arg2 ordering:(id)arg3 outSuccessfulChanges:(out id*)arg4 outSuccessfulDeletes:(out id*)arg5 outOrderingSaved:(bool*)arg6 database:(id)arg7 error:(id*)arg8;
- (id)recordZoneID;
- (bool)saveIncomingChanges:(id)arg1 incomingDeletes:(id)arg2 conflicts:(id)arg3 mergedOrderedWorkflowIDs:(id)arg4 sentChanges:(id)arg5 sentDeletes:(id)arg6 sentOrdering:(bool)arg7 saveOrderingLocally:(bool)arg8 isOrderingEnabled:(bool)arg9 localWorkflowsToDelete:(id)arg10 workflowIDsToRename:(id)arg11 preSyncHashes:(id)arg12 serverChangeToken:(id)arg13 inDatabase:(id)arg14;
- (void)startSubscriptionForRemoteChanges;
- (void)syncDatabase:(id)arg1 completion:(id /* block */)arg2;
- (void)syncDatabase:(id)arg1 includingOrdering:(bool)arg2 completion:(id /* block */)arg3;
- (id)userRecordID;

@end
