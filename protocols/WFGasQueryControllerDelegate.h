/* Generated by EzioChiu.
 */

@protocol WFGasQueryControllerDelegate

@required

- (WFNetworkProfile *)existingProfileWithSSID:(NSString *)arg1;
- (void)gasQueryController:(WFGasQueryController *)arg1 didUpdateProfiles:(NSSet *)arg2;

@end