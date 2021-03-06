/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAStoreSyncStatusUpdater : NSObject

+ (unsigned long long)_accountErrorForNSError:(id)arg1;
+ (unsigned long long)_ekAccountErrorFromCoreDAVErrorCode:(int)arg1;
+ (unsigned long long)_ekAccountErrorFromCoreDAVHTTPError:(id)arg1;
+ (unsigned long long)_ekAccountErrorFromDAErrorCode:(long long)arg1;
+ (unsigned long long)_ekAccountErrorFromDAValidationErrorCode:(unsigned long long)arg1;
+ (unsigned long long)_ekAccountErrorFromSubCalErrorCode:(long long)arg1;
+ (unsigned long long)_ekAccountErrorFromURLError:(id)arg1;
+ (id)_eventStore;
+ (id)_eventStorePurger;
+ (bool)_isCanceledError:(id)arg1;
+ (void)_updateStatusForSource:(id)arg1 lastSyncStartDate:(id)arg2 lastSyncEndDate:(id)arg3 lastSyncError:(unsigned long long*)arg4 canceled:(bool)arg5;
+ (void)_updateStatusForStoreWithExternalID:(id)arg1 lastSyncStartDate:(id)arg2 lastSyncEndDate:(id)arg3 lastSyncError:(unsigned long long*)arg4 canceled:(bool)arg5;
+ (void)resetSyncStatusForAllStoresIfNecessary;
+ (void)resetSyncStatusIfNecessaryForStoresOfType:(unsigned long long)arg1;
+ (void)syncEndedForStoreWithExternalID:(id)arg1 withError:(id)arg2;
+ (void)syncStartedForStoreWithExternalID:(id)arg1;

@end
