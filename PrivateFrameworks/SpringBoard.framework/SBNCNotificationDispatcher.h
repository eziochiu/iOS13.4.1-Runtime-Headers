/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBNCNotificationDispatcher : NSObject <CSCoverSheetViewControllerObserver, SBFNotificationExtensionVisibilityProviding> {
    SBNCAlertingController * _alertingController;
    SBNotificationBannerDestination * _bannerDestination;
    SBNotificationLegacyCarDestination * _carDestination;
    SBCommunicationPolicyManager * _communicationPolicyManager;
    <SBNotificationDestination> * _dashBoardDestination;
    NCNotificationDispatcher * _dispatcher;
    SBNCNotificationDispatcherDelegate * _dispatcherDelegate;
    SBLockScreenManager * _lockScreenManager;
    SBLockStateAggregator * _lockStateAggregator;
    SBNotificationCenterDestination * _notificationCenterDestination;
    NCBulletinNotificationSource * _notificationSource;
    SBStarkNotificationSceneComponentManager * _starkComponentManager;
    SBUserAlertNotificationSource * _userNotificationAlertSource;
    SBWalletNotificationSource * _walletNotificationSource;
}

@property (nonatomic, retain) SBNCAlertingController *alertingController;
@property (nonatomic, readonly) SBNotificationBannerDestination *bannerDestination;
@property (nonatomic, retain) SBNotificationLegacyCarDestination *carDestination;
@property (nonatomic, readonly) <SBStarkNotificationsAgent> *carNotificationsAgent;
@property (nonatomic, retain) SBCommunicationPolicyManager *communicationPolicyManager;
@property (nonatomic, readonly) <SBNotificationDestination> *dashBoardDestination;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NCNotificationDispatcher *dispatcher;
@property (nonatomic, retain) SBNCNotificationDispatcherDelegate *dispatcherDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBLockScreenManager *lockScreenManager;
@property (nonatomic, retain) SBLockStateAggregator *lockStateAggregator;
@property (nonatomic, readonly) SBNotificationCenterDestination *notificationCenterDestination;
@property (nonatomic, retain) NCBulletinNotificationSource *notificationSource;
@property (nonatomic, retain) SBStarkNotificationSceneComponentManager *starkComponentManager;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBUserAlertNotificationSource *userNotificationAlertSource;
@property (nonatomic, readonly) SBWalletNotificationSource *walletNotificationSource;

- (void).cxx_destruct;
- (void)_aggregateLockStateDidChange;
- (void)_carNotificationActiveConfigurationDidChange;
- (bool)_lockScreenWantsBanners;
- (void)_setupNewDestinationsForDispatcher:(id)arg1;
- (void)_updateActiveDestinations;
- (id)alertingController;
- (id)bannerDestination;
- (id)carDestination;
- (id)carNotificationsAgent;
- (id)communicationPolicyManager;
- (void)coverSheetViewController:(id)arg1 didChangeActiveBehavior:(id)arg2;
- (id)dashBoardDestination;
- (id)dispatcher;
- (id)dispatcherDelegate;
- (id)init;
- (bool)isNotificationContentExtensionVisible:(id)arg1;
- (id)lockScreenManager;
- (id)lockStateAggregator;
- (id)notificationCenterDestination;
- (id)notificationSource;
- (void)setAlertingController:(id)arg1;
- (void)setCarDestination:(id)arg1;
- (void)setCommunicationPolicyManager:(id)arg1;
- (void)setDispatcher:(id)arg1;
- (void)setDispatcherDelegate:(id)arg1;
- (void)setLockScreenManager:(id)arg1;
- (void)setLockStateAggregator:(id)arg1;
- (void)setNotificationSource:(id)arg1;
- (void)setStarkComponentManager:(id)arg1;
- (void)setUserNotificationAlertSource:(id)arg1;
- (id)starkComponentManager;
- (id)userNotificationAlertSource;
- (id)walletNotificationSource;

@end