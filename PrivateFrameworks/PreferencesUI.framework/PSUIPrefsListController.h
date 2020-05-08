/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIPrefsListController : PSListController <AAUISignInControllerDelegate, CoreTelephonyClientSubscriberDelegate, DevicePINControllerDelegate, PSTopLevelController, RadiosPreferencesDelegate, SUIKSearchResultsCollectionViewControllerDelegate, UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating> {
    NSArray * _MCUIBundleControllers;
    bool  __cellularDataSetting;
    bool  __cellularDataSettingInitialized;
    struct __CTServerConnection { } * __ctConnection;
    ACAccountStore * _accountStore;
    PSSpecifier * _appleAccountSpecifier;
    UIImage * _appleAccountSpecifierCachedIcon;
    PSSpecifier * _applePencilSpecifier;
    NSString * _bluetoothString;
    bool  _bluetoothValueIsClean;
    PSSpecifier * _carrierSelectionSpecifier;
    PSSpecifier * _classKitSpecifier;
    PSUIClassKitVisibilityArbitrator * _classKitVisibilityArbitrator;
    PSSpecifier * _classroomSpecifier;
    PSUIClassroomVisibilityArbitrator * _classroomVisibilityArbitrator;
    CoreTelephonyClient * _coreTelephonyClient;
    bool  _deferredURLLoadForThirdPartyApp;
    bool  _didFirstLoad;
    PSSpecifier * _emergencySOSSpecifier;
    PSSpecifier * _eqSpecifier;
    PSSpecifier * _ethernetSpecifier;
    PSSpecifier * _faceTimeSpecifier;
    FLPreferencesController * _followupController;
    NSArray * _followupSpecifiers;
    PSSpecifier * _gameCenterSpecifier;
    PSSpecifier * _healthKitSpecifier;
    struct __IOHIDManager { } * _hidManager;
    PSSpecifier * _homeKitSpecifier;
    HFHomeSettingsVisibilityArbitrator * _homeKitVisibilityArbitrator;
    bool  _initiallyLoadingThirdPartySpecifiers;
    bool  _launchedToTest;
    NSObject<OS_dispatch_queue> * _loadAllSpecifiersQueue;
    PSSpecifier * _messagesSpecifier;
    CNMonogrammer * _monogrammer;
    NSDictionary * _movedThirdPartySpecifiers;
    PSSpecifier * _notificationsSpecifier;
    NSSet * _originalDisplayIdentifiers;
    NSArray * _originalSpecifiers;
    PSSpecifier * _passcodeSpecifier;
    NSString * _pendingOffsetItemName;
    PSSpecifier * _personalHotspotSpecifier;
    AAUIProfilePictureStore * _profilePictureStore;
    bool  _refreshingThirdPartySpecifiers;
    SUIKSearchResultsCollectionViewController * _searchResultsController;
    PSSpecifier * _selectedSpecifier;
    AIDAServiceOwnersManager * _serviceOwnersManager;
    PSSpecifier * _siriSpecifier;
    EAAccessory * _speakerAccessory;
    PSSpecifier * _specifierToSelect;
    PSKeyboardNavigationSearchController * _spotlightSearchController;
    NSObject<OS_dispatch_queue> * _spyglassUpdateQueue;
    NSArray * _thirdPartySpecifiers;
    PSSpecifier * _tvSpecifier;
    VSAccountStore * _videoSubscriberAccountStore;
    PSSpecifier * _videoSubscriberGroupSpecifier;
    PSSpecifier * _videoSubscriberSpecifier;
    NSArray * _vpnBundleControllers;
    PSSpecifier * _wallpaperSpecifier;
    NSString * _wifiString;
    bool  _wifiValueIsClean;
    bool  skipSelectingDefaultCategoryOnLaunch;
}

@property (nonatomic) bool _cellularDataSetting;
@property (nonatomic) bool _cellularDataSettingInitialized;
@property (nonatomic) struct __CTServerConnection { }*_ctConnection;
@property (nonatomic, copy) NSString *bluetoothString;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool deferredURLLoadForThirdPartyApp;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FLPreferencesController *followupController;
@property (nonatomic, retain) NSArray *followupSpecifiers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SUIKSearchResultsCollectionViewController *searchResultsController;
@property (nonatomic) bool skipSelectingDefaultCategoryOnLaunch;
@property (nonatomic, retain) PSKeyboardNavigationSearchController *spotlightSearchController;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *wifiString;

+ (bool)airplaneMode;
+ (id)radiosPreferences;
+ (void)setAirplaneMode:(bool)arg1;

- (void).cxx_destruct;
- (void)NETRBStateChangedNotification:(id)arg1;
- (void)NETRBStateChangedNotification:(id)arg1 completion:(id /* block */)arg2;
- (id)_accountStore;
- (void)_beginObservingAccountStoreDidChangeNotification;
- (void)_beginObservingProfilePictureStoreDidChangeNotification;
- (id)_cachedIconForAppleAccountSpecifier;
- (bool)_canSelectSpecifierAtIndexPath:(id)arg1;
- (bool)_cellularDataSetting;
- (bool)_cellularDataSettingInitialized;
- (void)_configureImageViewForRow:(id)arg1;
- (struct __CTServerConnection { }*)_ctConnection;
- (void)_downArrowKeyPressed;
- (void)_handleOnsiteProfileInstallation;
- (void)_insertOrRemovePaymentSpecifierAsNeededCompletion:(id /* block */)arg1;
- (void)_loadThirdPartySpecifiersIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)_loadThirdPartySpecifiersWithCompletion:(id /* block */)arg1;
- (void)_localeChanged;
- (void)_newCarrierNotification;
- (void)_presentAppleAccountSignInController:(id)arg1;
- (id)_primarySpecifierOrdering;
- (id)_profilePictureStore;
- (void)_reallyLoadThirdPartySpecifiersForApps:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)_removeCachedAppleAccountIcon;
- (void)_saveIconToCacheForAppleAccountSpecifier:(id)arg1;
- (id)_serviceOwnersManager;
- (void)_setAirplaneMode:(bool)arg1;
- (void)_setupAppleAccountSpecifier:(id)arg1;
- (void)_setupAppleAccountSpecifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_setupAppleAccountSpecifier:(id)arg1 title:(id)arg2;
- (void)_setupAppleAccountSpecifierForLogin:(id)arg1;
- (void)_setupCachedAppleAccountSpecifier:(id)arg1;
- (void)_showControllerFromSpecifier:(id)arg1;
- (void)_showDetailTargetDidChange:(id)arg1;
- (bool)_showSOS;
- (id)_sidebarSpecifierForCategoryController;
- (id)_silhouetteMonogramIcon;
- (id)_specifierDictionaryForBundlePath:(id)arg1 identifier:(id)arg2 internalIcon:(bool)arg3 searchPlist:(id)arg4;
- (id)_specifierDictionaryForDeveloperBundlePath:(id)arg1 identifier:(id)arg2;
- (void)_tabKeyPressed;
- (void)_upArrowKeyPressed;
- (void)_videoSubscriberAccountAvailabilityDidChange:(id)arg1;
- (void)_videoSubscriberAccountStoreDidChange:(id)arg1;
- (void)airplaneModeChanged;
- (id)appleAccountIconLocalCacheURL;
- (void)appleAccountSpecifierWasTappedWhileInCachedState:(id)arg1;
- (void)appleAccountsDidChange;
- (void)asyncSpecifiersFirstLoad;
- (void)bluetoothPowerChanged:(id)arg1;
- (id)bluetoothString;
- (id)bluetoothValue:(id)arg1;
- (void)bluetoothValueFetch:(id)arg1;
- (id)bundle;
- (bool)canBecomeFirstResponder;
- (id)categoryController;
- (id)cellularDataStatusForSpecifier:(id)arg1;
- (void)checkDeveloperSettingsState;
- (void)clearCache;
- (void)configureApplePencilSpecifier;
- (id)configurePasscodeSpecifierFromSpecifiers:(id)arg1;
- (void)configureTopLevelSpecifier:(id)arg1;
- (void)confirmationSpecifierCancelled:(id)arg1;
- (void)confirmationSpecifierConfirmed:(id)arg1;
- (void)dealloc;
- (bool)deferredURLLoadForThirdPartyApp;
- (bool)deviceSupportsApplePay;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (void)didDismissSearchController:(id)arg1;
- (void)didSelectRowAtIndexPath:(id)arg1;
- (void)dismissPopover;
- (void)displayIdentifiersChanged;
- (void)fetchCellularDataEnabled;
- (id)followupController;
- (id)followupSpecifiers;
- (id)generalViewController;
- (id)getAirplaneMode:(id)arg1;
- (id)getAllSpecifiers;
- (id)getTetheringStatus:(id)arg1;
- (bool)handlePendingURL;
- (void)iMessageSupportMayHaveChanged;
- (void)iconChangedForBundleID:(id)arg1;
- (id)identifierForSelectedIndex;
- (void)indexManifests;
- (void)indexThirdPartyAppsAndManifests;
- (id)init;
- (void)insertMovedThirdPartySpecifiersAnimated:(bool)arg1;
- (void)insertOrderedSpecifier:(id)arg1 animated:(bool)arg2;
- (long long)insertionIndexForSpecifier:(id)arg1 inSpecifiers:(id)arg2;
- (bool)isCellularDataEnabled;
- (id)keyCommands;
- (void)lazyLoadSpecialBundleForSpecifier:(id)arg1;
- (void)loadPPTTestSpecifiers:(int)arg1;
- (void)loadThirdPartySpecifierIfNeededForBundleID:(id)arg1;
- (void)loadView;
- (long long)navigationItemLargeTitleDisplayMode;
- (id)passbookSpecifier;
- (id)phoneStatusForSpecifier:(id)arg1;
- (void)popToRoot;
- (void)profilePictureDidChange;
- (void)refresh3rdPartyBundles;
- (void)reloadAsyncSpecifiersWithCompletion:(id /* block */)arg1;
- (void)reloadCellularRelatedSpecifiers;
- (void)reloadSpecifiers;
- (void)removeApplePencilListener;
- (void)rerootNavigationController;
- (bool)searchBarShouldEndEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchResultsCollectionViewController:(id)arg1 didSelectURL:(id)arg2;
- (id)searchResultsCollectionViewController:(id)arg1 iconForCategory:(id)arg2;
- (bool)searchResultsCollectionViewController:(id)arg1 shouldShowCategory:(id)arg2;
- (long long)searchResultsCollectionViewController:(id)arg1 sortCategory1:(id)arg2 sortCategory2:(id)arg3;
- (id)searchResultsController;
- (void)selectDefaultCategory;
- (void)selectDefaultCategoryForced:(bool)arg1;
- (void)selectDefaultCategoryForced:(bool)arg1 showController:(bool)arg2;
- (id)selectSpecifier:(id)arg1;
- (void)setAirplaneMode:(id)arg1 specifier:(id)arg2;
- (void)setBluetoothString:(id)arg1;
- (void)setDeferredURLLoadForThirdPartyApp:(bool)arg1;
- (void)setDesiredVerticalContentOffsetItemNamed:(id)arg1;
- (void)setFollowupController:(id)arg1;
- (void)setFollowupSpecifiers:(id)arg1;
- (void)setSearchResultsController:(id)arg1;
- (void)setSkipSelectingDefaultCategoryOnLaunch:(bool)arg1;
- (void)setSpeakerAccessory:(id)arg1 eqAvailable:(bool)arg2;
- (void)setSpotlightSearchController:(id)arg1;
- (void)setWifiString:(id)arg1;
- (void)set_cellularDataSetting:(bool)arg1;
- (void)set_cellularDataSettingInitialized:(bool)arg1;
- (void)set_ctConnection:(struct __CTServerConnection { }*)arg1;
- (void)setupDaemonsIfNeeded;
- (void)setupPrimaryAppleAccountGroup:(id)arg1;
- (bool)shouldDeferPushForSpecifierID:(id)arg1 urlDictionary:(id)arg2;
- (bool)shouldReloadSpecifiersOnResume;
- (bool)shouldShowApplePencilSpecifier;
- (bool)shouldShowClassKitSpecifier;
- (bool)shouldShowClassroomSpecifier;
- (bool)shouldShowEthernetSpecifier;
- (bool)shouldShowFaceID;
- (bool)shouldShowSimulatorSettings;
- (bool)shouldShowTouchID;
- (void)showDeviceSupervisionInfo;
- (void)showPINSheet:(id)arg1;
- (void)signInController:(id)arg1 didCompleteWithSuccess:(bool)arg2 error:(id)arg3;
- (void)signInControllerDidCancel:(id)arg1;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (bool)skipSelectingDefaultCategoryOnLaunch;
- (id)specifierForBundle:(id)arg1;
- (id)specifiers;
- (id)spotlightSearchController;
- (void)suspend;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)testSpecifierCountAfterBlock:(id /* block */)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateAccountSpecifiers;
- (void)updateApplePayWithCompletion:(id /* block */)arg1;
- (void)updateApplePencilWithCompletion:(id /* block */)arg1;
- (void)updateClassKitSpecifierWithCompletion:(id /* block */)arg1;
- (void)updateClassroomSpecifierWithCompletion:(id /* block */)arg1;
- (void)updateEthernet;
- (void)updateEthernetWithCompletion:(id /* block */)arg1;
- (void)updateFollowupSpecifiersWithCompletion:(id /* block */)arg1;
- (void)updateHomeKitSpecifierWithCompletion:(id /* block */)arg1;
- (void)updatePersonalHotspot;
- (void)updateRestrictedSettings;
- (void)updateSOSWithCompletion:(id /* block */)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)updateSpyglassWithCompletion:(id /* block */)arg1;
- (void)updateSupervisedTextWithCompletion:(id /* block */)arg1;
- (void)updateVPNWithCompletion:(id /* block */)arg1;
- (void)updateVideoSubscriberAccountWithCompletion:(id /* block */)arg1;
- (void)updateWifi;
- (id)videoSubscriberAccountValue:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)wifiGetCurrentWiFiNetwork;
- (id)wifiNetwork:(id)arg1;
- (id)wifiString;
- (void)willBecomeActive;
- (void)willEnterForeground;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end