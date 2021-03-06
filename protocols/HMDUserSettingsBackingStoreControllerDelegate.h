/* Generated by EzioChiu.
 */

@protocol HMDUserSettingsBackingStoreControllerDelegate <NSObject>

@required

- (HMDCloudShareParticipantsManager *)backingStoreController:(HMDUserSettingsBackingStoreController *)arg1 createParticipantManagerForCloudZone:(HMBCloudZone *)arg2;
- (void)didStartBackingStoreController:(HMDUserSettingsBackingStoreController *)arg1;
- (void)didStopBackingStoreController:(HMDUserSettingsBackingStoreController *)arg1;
- (bool)isCurrentUser;
- (bool)isRunningOnHomeOwnersDevice;
- (HMDUser *)ownerForUserSettingsBackingStoreController:(HMDUserSettingsBackingStoreController *)arg1;
- (NSUUID *)userUUID;

@end
