/* Generated by EzioChiu.
 */

@protocol CRKKeychain

@required

- (NSData *)addCertificate:(id <CRKCertificate>)arg1 toAccessGroup:(NSString *)arg2;
- (NSData *)addIdentity:(id <CRKIdentity>)arg1 toAccessGroup:(NSString *)arg2;
- (NSData *)addPrivateKey:(id <CRKPrivateKey>)arg1 toAccessGroup:(NSString *)arg2;
- (<CRKCertificate> *)certificateWithPersistentID:(NSData *)arg1;
- (<CRKIdentity> *)identityWithPersistentID:(NSData *)arg1;
- (<CRKCertificate> *)makeCertificateWithData:(NSData *)arg1;
- (<CRKIdentity> *)makeIdentityWithCertificate:(id <CRKCertificate>)arg1 privateKey:(id <CRKPrivateKey>)arg2;
- (<CRKIdentity> *)makeIdentityWithConfiguration:(CRKIdentityConfiguration *)arg1;
- (<CRKPrivateKey> *)makePrivateKeyWithData:(NSData *)arg1;
- (<CRKPrivateKey> *)privateKeyWithPersistentID:(NSData *)arg1;
- (void)removeItemWithPersistentID:(NSData *)arg1;

@end