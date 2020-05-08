/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordZoneChangesOperation : CKDFetchBatchedRecordsOperation {
    long long  _changeTypes;
    bool  _clientIsUsingLegacyCKFetchRecordChangesOperationAPI;
    id /* block */  _recordChangedBlock;
    CKDFetchZoneChangesRequestOperationResult * _savedResult;
    id /* block */  _serverChangeTokenUpdatedBlock;
}

@property (nonatomic) long long changeTypes;
@property (nonatomic) bool clientIsUsingLegacyCKFetchRecordChangesOperationAPI;
@property (nonatomic, copy) id /* block */ recordChangedBlock;
@property (nonatomic, retain) CKDFetchZoneChangesRequestOperationResult *savedResult;
@property (nonatomic, copy) id /* block */ serverChangeTokenUpdatedBlock;

- (void).cxx_destruct;
- (id)_createAndConfigureURLRequestForZoneIDs:(id)arg1 optionsByZoneID:(id)arg2;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_noteChangedRecordWithID:(id)arg1 recordType:(id)arg2 record:(id)arg3 error:(id)arg4;
- (void)_noteCompletedURLRequest:(id)arg1 withSchedulerInfo:(id)arg2;
- (void)_noteDeletedRecordWithID:(id)arg1 recordType:(id)arg2;
- (void)_noteOperationBeginning;
- (void)_noteOperationEnding;
- (void)_noteOperationFinishedBlockEnd;
- (id)_optionsForZonesWithPendingChangesAfterRequest:(id)arg1;
- (id)activityCreate;
- (id)analyticsPayload;
- (long long)changeTypes;
- (bool)clientIsUsingLegacyCKFetchRecordChangesOperationAPI;
- (void)fillOutOperationResult:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (Class)operationResultClass;
- (id)pipeliningDescription;
- (id /* block */)recordChangedBlock;
- (id)savedResult;
- (id /* block */)serverChangeTokenUpdatedBlock;
- (void)setChangeTypes:(long long)arg1;
- (void)setClientIsUsingLegacyCKFetchRecordChangesOperationAPI:(bool)arg1;
- (void)setRecordChangedBlock:(id /* block */)arg1;
- (void)setSavedResult:(id)arg1;
- (void)setServerChangeTokenUpdatedBlock:(id /* block */)arg1;

@end