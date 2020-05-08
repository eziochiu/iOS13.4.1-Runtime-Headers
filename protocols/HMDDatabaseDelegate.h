/* Generated by EzioChiu.
 */

@protocol HMDDatabaseDelegate <NSObject>

@optional

- (void)database:(id <HMDDatabase>)arg1 didCreateZoneWithName:(NSString *)arg2;
- (void)database:(id <HMDDatabase>)arg1 didReceiveMessageWithUserInfo:(NSDictionary *)arg2;
- (void)database:(id <HMDDatabase>)arg1 didRemoveZoneWithName:(NSString *)arg2;
- (NAFuture *)database:(id <HMDDatabase>)arg1 willRemoveOwnedZoneWithName:(NSString *)arg2;

@end