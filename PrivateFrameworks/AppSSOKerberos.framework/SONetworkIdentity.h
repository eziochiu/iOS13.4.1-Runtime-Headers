/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
 */

@interface SONetworkIdentity : NSObject {
    NSString * _bundleIdentifier;
    NSObject<OS_nw_path> * _lastpath;
    NSString * _networkFingerprint;
    NSString * _realm;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSObject<OS_nw_path> *lastpath;
@property (nonatomic, retain) NSString *networkFingerprint;
@property (nonatomic, retain) NSString *realm;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)determineNetworkFingerprint;
- (id)getInterfaceSignature:(id)arg1;
- (id)getVPNServerSignature:(id)arg1;
- (id)initForRealm:(id)arg1 andBundleIdentifier:(id)arg2;
- (id)lastpath;
- (id)networkFingerprint;
- (id)realm;
- (void)setBundleIdentifier:(id)arg1;
- (void)setLastpath:(id)arg1;
- (void)setNetworkFingerprint:(id)arg1;
- (void)setRealm:(id)arg1;

@end