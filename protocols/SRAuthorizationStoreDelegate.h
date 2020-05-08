/* Generated by EzioChiu.
 */

@protocol SRAuthorizationStoreDelegate <NSObject>

@optional

- (void)authorizationStore:(id <SRAuthorizationStore>)arg1 didDetermineInitialAuthorizationValues:(NSDictionary *)arg2;
- (void)authorizationStore:(id <SRAuthorizationStore>)arg1 grantedAuthorizations:(NSSet *)arg2 forBundleId:(NSString *)arg3;
- (void)authorizationStore:(id <SRAuthorizationStore>)arg1 resetAuthorizations:(NSSet *)arg2 forBundleId:(NSString *)arg3;
- (void)authorizationStore:(id <SRAuthorizationStore>)arg1 revokedAuthorizations:(NSSet *)arg2 forBundleId:(NSString *)arg3;

@end