/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDBackingAccount : NSObject {
    bool  _isPrimaryEmailVerified;
}

@property (nonatomic, readonly) NSString *displayedHostname;
@property (nonatomic, readonly) NSString *dsid;
@property (nonatomic, readonly) NSPersonNameComponents *fullName;
@property (nonatomic, readonly) bool iCloudDriveAllowsCellularAccess;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isFakeAccount;
@property (nonatomic, readonly) bool isPrimaryEmailVerified;
@property (nonatomic, readonly) NSString *personaIdentifier;
@property (nonatomic, readonly) NSString *primaryEmail;
@property (nonatomic, readonly) NSURL *privateCloudDBURL;
@property (nonatomic, readonly) NSURL *privateCodeServiceURL;
@property (nonatomic, readonly) NSURL *privateDatabaseRPCServiceURL;
@property (nonatomic, readonly) NSURL *privateDeviceServiceURL;
@property (nonatomic, readonly) NSURL *privateMetricsServiceURL;
@property (nonatomic, readonly) NSURL *privateShareServiceURL;
@property (nonatomic, readonly) NSString *serverPreferredPushEnvironment;
@property (nonatomic, readonly) NSString *sharingURLHostname;
@property (nonatomic, readonly) NSString *username;

+ (bool)_lockedEnsureCloudKitChildAccountOnParentAccount:(id)arg1 inStore:(id)arg2;
+ (Class)_platformBackingAccountClass;
+ (id)accountQueue;
+ (id)accountWithIdentifier:(id)arg1 inStore:(id)arg2;
+ (void)deviceCountForAccount:(id)arg1 ignoreCache:(bool)arg2 completionHandler:(id /* block */)arg3;
+ (void)ensureCloudKitChildAccountOnParentAccount:(id)arg1 inStore:(id)arg2;
+ (id)fakeAccountWithEmail:(id)arg1 password:(id)arg2 propertyOverrides:(id)arg3 overridesByDataclass:(id)arg4;
+ (id)primaryAccountInStore:(id)arg1;

- (id)_init;
- (id)accountPropertiesForDataclass:(id)arg1;
- (bool)canRenew;
- (id)ckAccount;
- (id)cloudKitAuthTokenWithError:(id*)arg1;
- (void)deviceCountWithCompletionHandler:(id /* block */)arg1;
- (id)displayedHostname;
- (id)dsid;
- (id)fullName;
- (id)iCloudAuthTokenWithError:(id*)arg1;
- (bool)iCloudDriveAllowsCellularAccess;
- (id)identifier;
- (id)init;
- (bool)isDataclassEnabled:(id)arg1;
- (bool)isFakeAccount;
- (bool)isPrimaryEmailVerified;
- (id)parentAppleAccount;
- (id)personaIdentifier;
- (id)primaryEmail;
- (id)privateCloudDBURL;
- (id)privateCodeServiceURL;
- (id)privateCodeServiceURLPreferringGateway:(bool)arg1;
- (id)privateDatabaseRPCServiceURL;
- (id)privateDeviceServiceURL;
- (id)privateMetricsServiceURL;
- (id)privateShareServiceURL;
- (void)renewAuthTokenInStore:(id)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)serverPreferredPushEnvironment;
- (id)sharingURLHostname;
- (void)updateAccountPropertiesAndSaveAccountInStore:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)urlForDataclass:(id)arg1;
- (id)urlForDataclass:(id)arg1 preferringGateway:(bool)arg2;
- (id)username;
- (void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 completionHandler:(id /* block */)arg4;

@end
