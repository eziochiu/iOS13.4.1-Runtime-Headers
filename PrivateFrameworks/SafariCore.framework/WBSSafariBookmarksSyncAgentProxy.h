/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSSafariBookmarksSyncAgentProxy : NSObject <WBSSafariBookmarksSyncAgentProtocol> {
    NSXPCConnection * __connection;
}

@property (retain) NSXPCConnection *_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedProxy;

- (void).cxx_destruct;
- (id)_connection;
- (void)beginMigrationFromDAV;
- (void)clearLocalDataIncludingMigrationState:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)collectDiagnosticsDataWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)deleteCloudTabCloseRequestsWithUUIDStrings:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteDevicesWithUUIDStrings:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchRemoteMigrationStateWithCompletionHandler:(id /* block */)arg1;
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsWithCompletionHandler:(id /* block */)arg1;
- (void)fetchUserIdentityWithCompletionHandler:(id /* block */)arg1;
- (void)generateDAVServerIDsForExistingBookmarksWithCompletionHandler:(id /* block */)arg1;
- (void)getCloudTabContainerManateeStateWithCompletionHandler:(id /* block */)arg1;
- (void)getCloudTabDevicesWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)migrateToCloudKitWithCompletionHandler:(id /* block */)arg1;
- (void)observeRemoteMigrationStateForSecondaryMigration;
- (void)registerForPushNotificationsIfNeeded;
- (void)resetToDAVDatabaseWithCompletionHandler:(id /* block */)arg1;
- (void)saveCloudTabCloseRequestWithDictionaryRepresentation:(id)arg1 closeRequestUUIDString:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(id)arg1 deviceUUIDString:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setUsesOpportunisticPushTopic:(bool)arg1;
- (void)set_connection:(id)arg1;
- (void)userAccountDidChange:(long long)arg1;
- (void)userDidUpdateBookmarkDatabase;

@end