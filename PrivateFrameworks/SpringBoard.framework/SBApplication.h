/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBApplication : NSObject <BSDescriptionProviding, SBLeafIconDataSource, UISApplicationStateServiceDataSource, XBApplicationSnapshotManifestDelegate> {
    SBApplicationInfo * _appInfo;
    long long  _appSnapshotSequenceID;
    int  _applicationRestorationCheckState;
    NSString * _bundleIdentifier;
    bool  _calculatedSupportedTypes;
    long long  _currentClassicMode;
    unsigned int  _dataFlags;
    bool  _dataFlagsIsSet;
    FBSApplicationDataStore * _dataStore;
    long long  _defaultClassicModeOverride;
    unsigned long long  _displayedLaunchAlerts;
    unsigned int  _doingBackgroundNetworking;
    unsigned long long  _failedAutoLaunchCountForVOIP;
    unsigned long long  _failedLaunchCount;
    unsigned int  _hasBadgeValue;
    bool  _hasShownDataPlanAlertSinceLock;
    SBApplicationSupportServiceRequestContext * _initializationContext;
    bool  _isConnectedToExternalAccessory;
    unsigned int  _isNewlyInstalled;
    bool  _isNowRecordingApplication;
    bool  _isPlayingAudio;
    unsigned int  _isRecentlyUpdated;
    bool  _isRecordingAudio;
    bool  _isRestoringApplicationFromHiding;
    FBProcessExitContext * _lastExitContext;
    NSUserDefaults * _lazy_defaults;
    SBApplicationWakeScheduler * _legacyVOIPPeriodicWakeScheduler;
    FBApplicationProcess * _process;
    int  _showsProgressCount;
    XBApplicationSnapshotManifest * _snapshotManifest;
    NSHashTable * _statusBarStyleOverridesAssertions;
    NSMapTable * _statusBarStyleOverridesAssertionsByStyleOverride;
    int  _supportedTypes;
    NSMutableDictionary * _suppressVolumeHUDCategoriesBySceneIdentifier;
    SBApplicationProcessState * _threadUnsafe_processState;
    bool  _uninstalled;
}

@property (nonatomic, copy) id badgeValue;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (getter=isCacheCleaningTerminationAssertionHeld, nonatomic, readonly) bool cacheCleaningTerminationAssertionHeld;
@property (nonatomic, readonly) bool classicAppFullScreen;
@property (nonatomic, readonly) bool classicAppInsetForHomeAffordance;
@property (nonatomic, readonly) bool classicAppPhoneAppRunningOnPad;
@property (nonatomic, readonly) bool classicAppRequiresHiDPI;
@property (nonatomic, readonly) bool classicAppScaled;
@property (nonatomic, readonly) bool classicAppZoomedIn;
@property (setter=_setClassicAppZoomedIn:, nonatomic) bool classicAppZoomedIn;
@property (nonatomic, readonly) bool classicAppZoomedInOrRequiresHiDPI;
@property (getter=_classicMode, nonatomic, readonly) long long classicMode;
@property (getter=isConnectedToExternalAccessory, nonatomic) bool connectedToExternalAccessory;
@property (nonatomic, readonly) int dataUsage;
@property (readonly, copy) NSString *debugDescription;
@property (getter=_defaultClassicMode, nonatomic, readonly) long long defaultClassicMode;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, copy) NSArray *dynamicApplicationShortcutItems;
@property (nonatomic) unsigned long long failedAutoLaunchCountForVOIP;
@property (nonatomic, readonly) unsigned long long failedLaunchCount;
@property (nonatomic) bool hasShownDataPlanAlertSinceLock;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *iconIdentifier;
@property (nonatomic, readonly) bool ignoreScalingOfJailedStatusBar;
@property (nonatomic, readonly) bool includesStatusBarInClassicJail;
@property (nonatomic, retain) SBApplicationInfo *info;
@property (getter=isInternalApplication, nonatomic, readonly) bool internalApplication;
@property (getter=_internalProcessState, setter=_setInternalProcessState:, retain) SBApplicationProcessState *internalProcessState;
@property (nonatomic, readonly) bool isClassic;
@property (nonatomic, readonly) bool isFaceTime;
@property (nonatomic, readonly) bool isInsetForHomeAffordance;
@property (nonatomic, readonly) bool isMedusaCapable;
@property (nonatomic, readonly) bool isMobilePhone;
@property (nonatomic, readonly) bool isSetup;
@property (nonatomic, readonly) bool isSpringBoard;
@property (nonatomic, readonly) FBProcessExitContext *lastExitContext;
@property (nonatomic, readonly) SBApplicationWakeScheduler *legacyVOIPPeriodicWakeScheduler;
@property (nonatomic, readonly) bool mainSceneWantsFullscreen;
@property (nonatomic, retain) NSDate *nextWakeDate;
@property (getter=isNowRecordingApplication, nonatomic) bool nowRecordingApplication;
@property (getter=isPlayingAudio, nonatomic) bool playingAudio;
@property (nonatomic, readonly) SBApplicationProcessState *processState;
@property (getter=isRestoringIcon, nonatomic) bool restoringIcon;
@property (nonatomic) bool showsProgress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool suppressesControlCenter;
@property (nonatomic, readonly) bool suppressesCoverSheetGesture;
@property (getter=isSystemApplication, nonatomic, readonly) bool systemApplication;
@property (getter=isAnyTerminationAssertionHeld, nonatomic, readonly) bool terminationAssertionHeld;
@property (getter=isUninstallSupported, nonatomic, readonly) bool uninstallSupported;
@property (getter=isUninstalled, nonatomic) bool uninstalled;
@property (nonatomic) bool usesBackgroundNetwork;
@property (nonatomic) bool usesEdgeNetwork;
@property (nonatomic) bool usesWiFiNetwork;
@property (nonatomic) bool wantsAutoLaunchForVOIP;

+ (id)_appStateKeysToPrefetch;
+ (long long)_classicModeForLaunchingSize:(struct CGSize { double x1; double x2; })arg1;
+ (struct CGSize { double x1; double x2; })_defaultLaunchingSizeForDisplayConfiguration:(id)arg1 classicMode:(long long)arg2;
+ (id)_deviceSafeAreaInsets;
+ (void)_markAllManifestsForReingestion;
+ (void)_reingestStaticDefaultImagesForAllApps;
+ (id)restrictedClassicModeDisplayConfigurationForDisplayConfiguration:(id)arg1 classicMode:(long long)arg2;
+ (id)snapshotSortDescriptorForContentTypeMask;
+ (id)snapshotSortDescriptorForCreationDate;
+ (id)snapshotSortDescriptorForCustomSafeAreaInsets:(id)arg1;
+ (id)snapshotSortDescriptorForImageScale:(double)arg1;
+ (id)snapshotSortDescriptorForInterfaceOrientationMask:(unsigned long long)arg1;
+ (id)snapshotSortDescriptorForLaunchInterfaceIdentifier:(id)arg1;
+ (id)snapshotSortDescriptorForNames:(id)arg1;
+ (id)snapshotSortDescriptorForRequiredOSVersion:(id)arg1;
+ (id)snapshotSortDescriptorForScheme:(id)arg1;
+ (id)snapshotSortDescriptorForStatusBarStateMask:(unsigned long long)arg1;
+ (id)snapshotSortDescriptorForUIUserInterfaceStyle:(long long)arg1;
+ (id)snapshotSortDescriptorPreferringProtectedContent;
+ (id)snapshotSortDescriptorsForNames:(id)arg1 scheme:(id)arg2 imageScale:(double)arg3 userInterfaceStyle:(long long)arg4 statusBarStateMask:(unsigned long long)arg5 interfaceOrientationMask:(unsigned long long)arg6 requiredOSVersion:(id)arg7;

- (void).cxx_destruct;
- (void)__noteSnapshotDidUpdate:(long long)arg1 forSceneIdentifier:(id)arg2;
- (int)_applicationRestorationCheckState;
- (id)_baseSceneIdentifier;
- (bool)_bypassesClassicMode;
- (void)_calculateSupportedTypesForSplashBoard;
- (void)_calculateSupportedTypesLazilyIfNecessary;
- (bool)_canLaunchInClassicMode:(long long)arg1;
- (void)_cancelPreheatForUserLaunchIfNecessary;
- (bool)_classicAppScaledOnPhone;
- (bool)_classicAppScaledPadOnPad;
- (bool)_classicAppScaledPhoneOnPad;
- (long long)_classicMode;
- (long long)_classicModeForHostingExtenstionContainedInApplication:(id)arg1;
- (long long)_classicModeFromSplashBoard;
- (long long)_classicModeFromSupportedTypes;
- (void)_clearSceneTitles;
- (id)_dataStore;
- (long long)_defaultClassicMode;
- (id)_defaultLaunchImageBaseName;
- (id)_defaultPNGNameFromSuspensionSettingsWithExpiration:(double*)arg1 sceneID:(id)arg2;
- (id)_defaultPNGNameUsingFallbacksWithSceneID:(id)arg1 contentOverridesContext:(id)arg2;
- (void)_didExitWithContext:(id)arg1;
- (void)_didSuspend;
- (bool)_exposeRealDisplayCornerRadii;
- (void)_ingestDefaultPNGsInManifest:(id)arg1 withLaunchImageBaseName:(id)arg2;
- (void)_ingestInfoPlistImagesInManifest:(id)arg1;
- (id)_initializationContext;
- (id)_internalProcessState;
- (void)_invalidateStatusBarStyleOverridesAssertions;
- (bool)_isClassicViaOverride;
- (bool)_isNewEnoughToKnowAboutRoundPads;
- (bool)_isNewlyInstalled;
- (bool)_isRecentlyUpdated;
- (void)_lockStateDidChange:(id)arg1;
- (id)_normalizeSnapshotName:(id)arg1;
- (void)_noteIconDataSourceDidChange;
- (void)_noteProcess:(id)arg1 didChangeToState:(id)arg2;
- (void)_noteSnapshotDidUpdateForSceneIdentifier:(id)arg1;
- (void)_noteSnapshotDidUpdateForSceneIdentifiers:(id)arg1;
- (long long)_pad_classicModeFromSplashBoard;
- (long long)_phoneOnPad_classicModeFromSplashBoard;
- (long long)_phone_classicModeFromSplashBoard;
- (id)_preferredImagePathByScaleInBundle:(id)arg1 resourceName:(id)arg2 ofType:(id)arg3 scale:(double)arg4 outScale:(double*)arg5;
- (id)_preferredImagePathInBundle:(id)arg1 baseResourceName:(id)arg2 ofType:(id)arg3 forMainScene:(bool)arg4 size:(struct CGSize { double x1; double x2; })arg5 scale:(double)arg6 outScale:(double*)arg7;
- (void)_processDidLaunch:(id)arg1;
- (void)_processWillLaunch:(id)arg1;
- (void)_purgeAndResetStaticDefaultImagesInSnapshotManifest;
- (void)_purgeStaticDefaultImagesInSnapshotManifest;
- (void)_recalculateApplicationSupportedTypes;
- (void)_reingestStaticDefaultImagesInSnapshotManifest;
- (void)_resetDataUsage;
- (void)_resetLaunchImageIngestionStatus;
- (void)_saveSnapshotForSceneHandle:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (id)_sceneIdentifierForStoredPersistenceIdentifier:(id)arg1;
- (void)_setApplicationRestorationCheckState:(int)arg1;
- (void)_setClassicAppZoomedIn:(bool)arg1;
- (void)_setCurrentClassicMode:(long long)arg1;
- (void)_setDataUsage:(int)arg1;
- (void)_setDefaultClassicModeOverride:(long long)arg1;
- (void)_setInternalProcessState:(id)arg1;
- (void)_setNewlyInstalled:(bool)arg1;
- (void)_setRecentlyUpdated:(bool)arg1;
- (id)_snapshotManifest;
- (id)_snapshotsWithImageName:(id)arg1 sceneHandle:(id)arg2 launchingSize:(struct CGSize { double x1; double x2; })arg3 launchingScale:(double)arg4 contentTypeMask:(unsigned long long)arg5 statusBarStateMask:(unsigned long long)arg6 launchingOrientation:(long long)arg7 contentOverridesContext:(id)arg8 userInterfaceStyle:(long long)arg9 displayEdgeInfo:(id)arg10;
- (int)_supportedTypeForClassicModeNone;
- (bool)_supportsApplicationType:(int)arg1;
- (void)_terminationAssertionEfficacyChangedTo:(unsigned long long)arg1;
- (void)_updateProcess:(id)arg1 withState:(id)arg2;
- (void)_updateRecentlyUpdatedTimer;
- (bool)_useSupportedTypesForSplashBoard;
- (long long)accessoryTypeForIcon:(id)arg1;
- (id)badgeNumberOrStringForIcon:(id)arg1;
- (id)badgeValue;
- (id)bestSnapshotWithImageName:(id)arg1 sceneHandle:(id)arg2 variantID:(id)arg3 scale:(double)arg4 size:(struct CGSize { double x1; double x2; })arg5 contentTypeMask:(unsigned long long)arg6 statusBarStateMask:(unsigned long long)arg7 launchingOrientation:(long long)arg8 contentOverridesContext:(id)arg9 userInterfaceStyle:(long long)arg10 displayEdgeInfo:(id)arg11;
- (id)bundleIdentifier;
- (id)cachedImageForSnapshot:(id)arg1 interfaceOrientation:(long long)arg2;
- (bool)canShowSystemVolumeHUDForCategory:(id)arg1 forSceneIdentifier:(id)arg2;
- (bool)classicAppFullScreen;
- (bool)classicAppInsetForHomeAffordance;
- (bool)classicAppPhoneAppRunningOnPad;
- (bool)classicAppRequiresHiDPI;
- (bool)classicAppScaled;
- (bool)classicAppZoomedIn;
- (bool)classicAppZoomedInOrRequiresHiDPI;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createDownscaledVariantForSnapshot:(id)arg1 sceneHandle:(id)arg2 scaleFactor:(double)arg3 didSaveImage:(id /* block */)arg4;
- (int)dataUsage;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })defaultLaunchingSizeForDisplayConfiguration:(id)arg1;
- (void)deleteAllSnapshots;
- (void)deleteSnapshotForContext:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)displayName;
- (id)dynamicApplicationShortcutItems;
- (unsigned long long)failedAutoLaunchCountForVOIP;
- (unsigned long long)failedLaunchCount;
- (void)flushSnapshotsForAllScenes;
- (void)flushSnapshotsForAllScenesIncludingAllLegacyImages;
- (void)flushSnapshotsForSceneID:(id)arg1;
- (id)formattedAccessoryStringForIcon:(id)arg1;
- (bool)hasDisplayedLaunchAlertForType:(unsigned long long)arg1;
- (bool)hasShownDataPlanAlertSinceLock;
- (id)icon:(id)arg1 displayNameForLocation:(id)arg2;
- (id)icon:(id)arg1 displayNameForObscuredDisabledLaunchForLocation:(id)arg2;
- (id)icon:(id)arg1 imageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg2;
- (bool)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3;
- (id)icon:(id)arg1 unmaskedImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg2;
- (bool)iconAllowsLaunch:(id)arg1;
- (bool)iconCanTightenLabel:(id)arg1;
- (bool)iconCanTruncateLabel:(id)arg1;
- (bool)iconCompleteUninstall:(id)arg1;
- (bool)iconDisallowsLaunchForObscuredReason:(id)arg1;
- (id)iconIdentifier;
- (bool)iconSupportsUninstall:(id)arg1;
- (bool)ignoreScalingOfJailedStatusBar;
- (id)imageForSnapshot:(id)arg1 interfaceOrientation:(long long)arg2;
- (bool)includesStatusBarInClassicJail;
- (id)info;
- (id)initWithApplicationInfo:(id)arg1;
- (bool)isAnyTerminationAssertionHeld;
- (bool)isCacheCleaningTerminationAssertionHeld;
- (bool)isClassic;
- (bool)isConnectedToExternalAccessory;
- (bool)isFaceTime;
- (bool)isInsetForHomeAffordance;
- (bool)isInternalApplication;
- (bool)isMedusaCapable;
- (bool)isMobilePhone;
- (bool)isNowRecordingApplication;
- (bool)isPlayingAudio;
- (bool)isRestoringIcon;
- (bool)isSameExecutableAsApplication:(id)arg1;
- (bool)isSetup;
- (bool)isSpringBoard;
- (bool)isSystemApplication;
- (bool)isTimedOutForIcon:(id)arg1;
- (bool)isUninstallSupported;
- (bool)isUninstalled;
- (bool)isWebApplication;
- (long long)labelAccessoryTypeForIcon:(id)arg1;
- (id)lastExitContext;
- (id)legacyVOIPPeriodicWakeScheduler;
- (bool)mainSceneWantsFullscreen;
- (void)manifest:(id)arg1 didPurgeProtectedContentSnapshotsWithGroupIdentifiers:(id)arg2;
- (void)markNewlyInstalled;
- (void)markRecentlyUpdated;
- (id)mostRecentSceneSnapshotsForSceneHandle:(id)arg1 scale:(double)arg2 launchingOrientation:(long long)arg3;
- (id)nextWakeDate;
- (void)preHeatForUserLaunchIfNecessaryWithAbsoluteTime:(unsigned long long)arg1 andContinuousTime:(unsigned long long)arg2;
- (unsigned long long)priorityForIcon:(id)arg1;
- (id)processState;
- (void)purgeCaches;
- (void)refreshLaunchImagesInSnapshotManifestIfNeeded;
- (void)releaseStatusBarStyleOverridesAssertion:(id)arg1;
- (id)restrictedClassicModeDisplayConfigurationForDisplayConfiguration:(id)arg1;
- (void)saveSnapshotForSceneHandle:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)saveSuspendSnapshot:(id)arg1 forSceneHandle:(id)arg2;
- (void)setAudioCategoriesThatDisableSystemVolumeHUD:(id)arg1 forSceneIdentifier:(id)arg2;
- (void)setBadgeValue:(id)arg1;
- (void)setConnectedToExternalAccessory:(bool)arg1;
- (void)setDynamicApplicationShortcutItems:(id)arg1;
- (void)setFailedAutoLaunchCountForVOIP:(unsigned long long)arg1;
- (void)setHasDisplayedLaunchAlert:(bool)arg1 forType:(unsigned long long)arg2;
- (void)setHasShownDataPlanAlertSinceLock:(bool)arg1;
- (void)setInfo:(id)arg1;
- (void)setNextWakeDate:(id)arg1;
- (void)setNowRecordingApplication:(bool)arg1;
- (void)setPlayingAudio:(bool)arg1;
- (void)setRestoringIcon:(bool)arg1;
- (void)setShowsProgress:(bool)arg1;
- (void)setUninstalled:(bool)arg1;
- (void)setUsesBackgroundNetwork:(bool)arg1;
- (void)setUsesEdgeNetwork:(bool)arg1;
- (void)setUsesWiFiNetwork:(bool)arg1;
- (void)setWantsAutoLaunchForVOIP:(bool)arg1;
- (bool)shouldReceiveSourceApplicationContextFromOriginatingApplication:(id)arg1;
- (bool)showsProgress;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })snapshotFrameForClassicInsideBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forOrientation:(long long)arg2 scaleFactor:(double*)arg3 inReferenceSpace:(bool)arg4;
- (struct CGSize { double x1; double x2; })snapshotSizeAdjustedForLegacyStatusBarBasedOnSize:(struct CGSize { double x1; double x2; })arg1 interfaceOrientation:(long long)arg2 contentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (id)statusBarStyleOverridesAssertionsByStyleOverride;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)suppressesControlCenter;
- (bool)suppressesCoverSheetGesture;
- (void)takeStatusBarStyleOverridesAssertion:(id)arg1;
- (bool)usesBackgroundNetwork;
- (bool)usesEdgeNetwork;
- (bool)usesWiFiNetwork;
- (bool)wantsAutoLaunchForVOIP;

@end