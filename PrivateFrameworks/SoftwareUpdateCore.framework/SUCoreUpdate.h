/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
 */

@interface SUCoreUpdate : NSObject <SUCoreFSMDelegate, SUCoreMSUDelegate, SUCoreMobileAssetDelegate> {
    NSObject<OS_dispatch_queue> * _clientDelegateCallbackQueue;
    SUCoreMobileAsset * _maControl;
    SUCoreMSU * _msuControl;
    SUCorePolicy * _policy;
    NSDictionary * _stateTable;
    long long  _targetPhase;
    id  _updateDelegate;
    SUCoreDescriptor * _updateDescriptor;
    SUCoreFSM * _updateFSM;
    NSString * _updateName;
    NSObject<OS_os_transaction> * _updateTransaction;
    NSString * _updateUUID;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientDelegateCallbackQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SUCoreMobileAsset *maControl;
@property (nonatomic, readonly) SUCoreMSU *msuControl;
@property (nonatomic, retain) SUCorePolicy *policy;
@property (nonatomic, readonly) NSDictionary *stateTable;
@property (readonly) Class superclass;
@property (nonatomic) long long targetPhase;
@property (nonatomic, readonly) id updateDelegate;
@property (nonatomic, readonly) SUCoreDescriptor *updateDescriptor;
@property (nonatomic, readonly) SUCoreFSM *updateFSM;
@property (nonatomic, readonly) NSString *updateName;
@property (nonatomic, retain) NSObject<OS_os_transaction> *updateTransaction;
@property (nonatomic, readonly) NSString *updateUUID;

+ (id)_generateStateTable;

- (void).cxx_destruct;
- (void)_adjustTarget:(long long)arg1 withPolicy:(id)arg2;
- (void)_applyAttemptFailed:(id)arg1;
- (void)_cleanupAfterAttempt;
- (void)_eventWhetherAtTarget:(long long)arg1 eventAtTarget:(id)arg2 eventContinue:(id)arg3;
- (void)_trackUpdateAnomaly:(id)arg1 result:(long long)arg2 description:(id)arg3;
- (void)_updateAnomaly:(id)arg1;
- (void)_updateApplied;
- (void)_updateAssetDownloadPreflighted;
- (void)_updateAssetDownloadProgress:(id)arg1;
- (void)_updateAssetDownloadStalled:(id)arg1;
- (void)_updateAssetDownloaded:(id)arg1;
- (void)_updateAttemptFailed:(id)arg1;
- (void)_updateBrainLoadProgress:(id)arg1;
- (void)_updateBrainLoadStalled:(id)arg1;
- (void)_updateBrainLoaded:(id)arg1;
- (void)_updateCanceled;
- (void)_updatePrepareProgress:(id)arg1;
- (void)_updatePrepared:(id)arg1;
- (long long)actionApplyUpdate:(id)arg1 error:(id*)arg2;
- (long long)actionCancelPrepare:(id)arg1 error:(id*)arg2;
- (long long)actionCheckSpace:(id)arg1 error:(id*)arg2;
- (long long)actionDecideDownloadSpaceCheck:(id)arg1 error:(id*)arg2;
- (long long)actionDecideErrorSpaceCheck:(id)arg1 error:(id*)arg2;
- (long long)actionDownloadSU:(id)arg1 error:(id*)arg2;
- (long long)actionLoadBrain:(id)arg1 error:(id*)arg2;
- (long long)actionPreflightDownloadSU:(id)arg1 error:(id*)arg2;
- (long long)actionPrepareUpdate:(id)arg1 error:(id*)arg2;
- (long long)actionRemovePrepared:(id)arg1 error:(id*)arg2;
- (long long)actionRemoveSU:(id)arg1 error:(id*)arg2;
- (long long)actionReportAnomalyAPI:(id)arg1 error:(id*)arg2;
- (long long)actionReportApplied:(id)arg1 error:(id*)arg2;
- (long long)actionReportApplyFailed:(id)arg1 error:(id*)arg2;
- (long long)actionReportAttemptFailure:(id)arg1 error:(id*)arg2;
- (long long)actionReportBrainLoadProgress:(id)arg1 error:(id*)arg2;
- (long long)actionReportBrainLoadSuccess:(id)arg1 error:(id*)arg2;
- (long long)actionReportCanceled:(id)arg1 error:(id*)arg2;
- (long long)actionReportDownloadPreflighted:(id)arg1 error:(id*)arg2;
- (long long)actionReportDownloadProgress:(id)arg1 error:(id*)arg2;
- (long long)actionReportDownloadStalled:(id)arg1 error:(id*)arg2;
- (long long)actionReportNotSuspended:(id)arg1 error:(id*)arg2;
- (long long)actionReportPrepareProgress:(id)arg1 error:(id*)arg2;
- (long long)actionReportPrepared:(id)arg1 error:(id*)arg2;
- (long long)actionReportSUDownloaded:(id)arg1 error:(id*)arg2;
- (long long)actionResumeUpdate:(id)arg1 error:(id*)arg2;
- (long long)actionSuspendUpdate:(id)arg1 error:(id*)arg2;
- (long long)actionTargetDownloadSpaceCheck:(id)arg1 error:(id*)arg2;
- (long long)actionUnknownAction:(id)arg1 error:(id*)arg2;
- (long long)actionUpdateTarget:(id)arg1 error:(id*)arg2;
- (void)cancelCurrentUpdate;
- (id)clientDelegateCallbackQueue;
- (id)description;
- (id)initWithDelegate:(id)arg1 updateDescriptor:(id)arg2 updateUUID:(id)arg3;
- (id)initWithDelegate:(id)arg1 updateDescriptor:(id)arg2 updateUUID:(id)arg3 withCallbackQueue:(id)arg4;
- (void)maAnomaly:(id)arg1;
- (void)maAssetRemoveFailed:(id)arg1;
- (void)maAssetRemoved;
- (id)maControl;
- (void)maDownloadFailed:(id)arg1;
- (void)maDownloadProgress:(id)arg1;
- (void)maDownloadStalled:(id)arg1;
- (void)maDownloaded:(id)arg1;
- (void)msuApplied;
- (void)msuApplyFailed:(id)arg1;
- (void)msuBrainLoadFailed:(id)arg1;
- (void)msuBrainLoadProgress:(id)arg1;
- (void)msuBrainLoadStalled:(id)arg1;
- (void)msuBrainLoaded:(id)arg1;
- (id)msuControl;
- (void)msuPrepareFailed:(id)arg1;
- (void)msuPrepareProgress:(id)arg1;
- (void)msuPrepared:(id)arg1;
- (void)msuRemoveFailed:(id)arg1;
- (void)msuRemoved;
- (void)msuResumeFailed:(id)arg1;
- (void)msuResumed;
- (void)msuSUDownloadPreflightFailed:(id)arg1;
- (void)msuSUDownloadPreflighted;
- (void)msuSuspendFailed:(id)arg1;
- (void)msuSuspended;
- (long long)performAction:(id)arg1 onEvent:(id)arg2 inState:(id)arg3 withInfo:(id)arg4 nextState:(id)arg5 error:(id*)arg6;
- (id)policy;
- (void)setPolicy:(id)arg1;
- (void)setTargetPhase:(long long)arg1;
- (void)setUpdateTransaction:(id)arg1;
- (id)stateTable;
- (void)targetApplied:(id)arg1;
- (void)targetBrainLoaded:(id)arg1;
- (void)targetDownloadPreflighted:(id)arg1;
- (void)targetDownloaded:(id)arg1;
- (long long)targetPhase;
- (void)targetPrepared:(id)arg1;
- (id)updateDelegate;
- (id)updateDescriptor;
- (id)updateFSM;
- (id)updateName;
- (id)updateTransaction;
- (id)updateUUID;

@end