/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBIconController : UIViewController <BBObserverDelegate, FBSDisplayLayoutPublisherObserving, MCProfileConnectionObserver, PTSettingsKeyObserver, SBAlertItemsControllerObserver, SBApplicationRestrictionObserver, SBAssistantObserver, SBFloatingDockControllerDelegate, SBHIconManagerDelegate, SBHSidebarProviderDelegate, SBHomeScreenIconTransitionAnimatorDelegate, SBHomeScreenSpotlightDismissalDelegate, SBHomeScreenTodayViewControllerDelegate, SBIconAnimationContaining, SBIconModelApplicationDataSource, SBLayoutStateTransitionObserver, SBRootFolderControllerAccessoryViewControllerDelegate, SBRootFolderPageStateObserver, SBSearchGestureObserver, SPUIRemoteSearchViewDelegate, UIGestureRecognizerDelegate, WGWidgetGroupViewControllerDelegate> {
    bool  __ignoreMutatingIconListsOnApplicationInstall;
    NSMapTable * _activeInterfaceOrientationChangeDeferralAssertionsByReason;
    bool  _allowsUninstall;
    NSSet * _appIconForceTouchWindows;
    SBHIconImageCache * _appSwitcherHeaderIconImageCache;
    BBObserver * _bbObserver;
    long long  _currentIconListIndex;
    SBWorkspaceTransitionRequest * _currentTransitionRequest;
    NSTimer * _delayedLaunchRequestTimer;
    NSMutableSet * _delayedStyleWallpaperEffectViews;
    NSMapTable * _deviceOrientationUpdateDeferralAssertionsByReason;
    bool  _dismissingMenuForFolderPresentation;
    NSMutableSet * _displayIDsWithBadgingEnabled;
    <BSInvalidatable> * _displayLayoutTransition;
    NSTimer * _editingEndTimer;
    SBFloatingDockController * _floatingDockController;
    NSMapTable * _folderControllerDeferRotationForIconScrollingAssertions;
    bool  _hasRestrictedEnforcedLayout;
    NSSet * _hiddenTags;
    NSTimer * _iconEditingFeedbackWarmTimer;
    SBHIconManager * _iconManager;
    SBIconModel * _iconModel;
    unsigned long long  _iconOcclusionReasons;
    NSMutableArray * _iconTouchesFinishedBlocks;
    SBIconVisibilityService * _iconVisibilityService;
    NSIndexPath * _indexPathToResetTo;
    <SBRootFolderPageTransition> * _interactivePullToTodaySearchTransition;
    bool  _isAnimatingSignficantly;
    bool  _keyboardIsRotating;
    _UILegibilitySettings * _legibilitySettings;
    SBHIconImageCache * _notificationIconImageCache;
    PTSingleTestRecipe * _organizeInFoldersTestRecipe;
    SBAlertItemsController * _override_alertItemsController;
    SBApplicationController * _override_applicationController;
    SBApplicationPlaceholderController * _override_applicationPlaceholderController;
    SBAssistantController * _override_assistantController;
    SBMainDisplayPolicyAggregator * _override_policyAggregator;
    SBUIController * _override_userInterfaceController;
    bool  _performedInitialLayout;
    NSTimer * _popoverDelayTimer;
    SBFolderStatsQueryableMetric * _queryableFolderMetric;
    PTSingleTestRecipe * _relayoutTestRecipe;
    SBHRootFolderSettings * _rootFolderSettings;
    bool  _rotating;
    PTSingleTestRecipe * _runDownloadingIconTestRecipe;
    id /* block */  _searchGestureCompletionHandler;
    bool  _sendITunesNotification;
    bool  _showingSearch;
    <BSInvalidatable> * _sidebarAppearanceStateOverrideAssertion;
    <BSInvalidatable> * _significantAnimationColorSamplingAssertion;
    SBHomeScreenSpotlightViewController * _spotlightViewController;
    SBAppStatusBarDateTimeAssertion * _statusBarContentAssertion;
    NSMapTable * _suspendWallpaperAnimationForFolderAssertions;
    <BSInvalidatable> * _suspendWallpaperAnimationForSpotlightAssertion;
    SBHIconImageCache * _tableUIIconImageCache;
    SBTodayOverlayController * _todayOverlayController;
    SBHomeScreenTodayViewController * _todayViewController;
    PTSingleTestRecipe * _toggleSearchTestRecipe;
    BSEventQueue * _transitionEventQueue;
    bool  _uninstallingSystemAppsRestricted;
    NSSet * _visibleTags;
    WGWidgetGroupViewController * _widgetGroupViewController;
}

@property (setter=_setIgnoreMutatingIconListsOnApplicationInstall:, nonatomic) bool _ignoreMutatingIconListsOnApplicationInstall;
@property (nonatomic, readonly) SBAlertItemsController *alertItemsController;
@property (nonatomic, readonly, copy) NSArray *allApplications;
@property (nonatomic, readonly) unsigned long long allowedInterfaceOrientations;
@property (nonatomic, readonly) UIWindow *animationWindow;
@property (nonatomic, readonly) NSSet *appIconForceTouchWindows;
@property (nonatomic, readonly) SBHIconImageCache *appSwitcherHeaderIconImageCache;
@property (nonatomic, readonly) SBHIconImageCache *appSwitcherUnmaskedIconImageCache;
@property (nonatomic, readonly) SBApplicationController *applicationController;
@property (nonatomic, readonly) SBApplicationPlaceholderController *applicationPlaceholderController;
@property (nonatomic, readonly) bool areAnyIconViewContextMenusShowing;
@property (nonatomic, readonly) SBAssistantController *assistantController;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) SBIconContentView *contentView;
@property (nonatomic, readonly) <SBIconAnimationContaining> *currentAnimationContainer;
@property (nonatomic, readonly) double currentDockHeight;
@property (getter=_currentFolderController, nonatomic, readonly) SBFolderController *currentFolderController;
@property (nonatomic, readonly) long long currentIconListIndex;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSTimer *delayedLaunchRequestTimer;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dismissingMenuForFolderPresentation;
@property (nonatomic, retain) <BSInvalidatable> *displayLayoutTransition;
@property (nonatomic, retain) NSTimer *editingEndTimer;
@property (nonatomic, readonly) UIView *fallbackIconContainerView;
@property (nonatomic, readonly) SBFloatingDockController *floatingDockController;
@property (nonatomic) bool hasRestrictedEnforcedLayout;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBIconDragManager *iconDragManager;
@property (nonatomic, retain) NSTimer *iconEditingFeedbackWarmTimer;
@property (nonatomic, readonly) SBHIconManager *iconManager;
@property (nonatomic) unsigned long long iconOcclusionReasons;
@property (nonatomic, readonly) bool iconsShouldAllowCloseBoxes;
@property (nonatomic, retain) <SBRootFolderPageTransition> *interactivePullToTodaySearchTransition;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, retain) SBIconModel *model;
@property (nonatomic, readonly) SBHIconImageCache *notificationIconImageCache;
@property (getter=_openFolderController, nonatomic, readonly) SBFolderController *openFolderController;
@property (nonatomic, readonly) PTSingleTestRecipe *organizeInFoldersTestRecipe;
@property (nonatomic, readonly) SBMainDisplayPolicyAggregator *policyAggregator;
@property (nonatomic, retain) NSTimer *popoverDelayTimer;
@property (nonatomic, readonly) PTSingleTestRecipe *relayoutTestRecipe;
@property (nonatomic, readonly) SBRootFolder *rootFolder;
@property (getter=_rootFolderController, nonatomic, readonly) SBRootFolderController *rootFolderController;
@property (nonatomic, readonly) SBHRootFolderSettings *rootFolderSettings;
@property (nonatomic, readonly) PTSingleTestRecipe *runDownloadingIconTestRecipe;
@property (nonatomic, copy) id /* block */ searchGestureCompletionHandler;
@property (getter=isShowingSidebar, nonatomic, readonly) bool showingSidebar;
@property (getter=isShowingTodayOverlay, nonatomic, readonly) bool showingTodayOverlay;
@property (nonatomic, retain) <BSInvalidatable> *sidebarAppearanceStateOverrideAssertion;
@property (getter=isSidebarPinned, nonatomic, readonly) bool sidebarPinned;
@property (nonatomic, retain) <BSInvalidatable> *significantAnimationColorSamplingAssertion;
@property (nonatomic, retain) SBHomeScreenSpotlightViewController *spotlightViewController;
@property (nonatomic, retain) SBAppStatusBarDateTimeAssertion *statusBarContentAssertion;
@property (readonly) Class superclass;
@property (nonatomic, retain) <BSInvalidatable> *suspendWallpaperAnimationForSpotlightAssertion;
@property (nonatomic, readonly) SBHIconImageCache *tableUIIconImageCache;
@property (nonatomic, retain) SBTodayOverlayController *todayOverlayController;
@property (nonatomic, retain) SBHomeScreenTodayViewController *todayViewController;
@property (nonatomic, readonly) PTSingleTestRecipe *toggleSearchTestRecipe;
@property (getter=isUninstallingSystemAppsRestricted, nonatomic) bool uninstallingSystemAppsRestricted;
@property (nonatomic, readonly) SBUIController *userInterfaceController;
@property (nonatomic, readonly, copy) NSSet *visibleIconStateDisplayIdentifiers;
@property (nonatomic, readonly) WGWidgetGroupViewController *widgetGroupViewController;

+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;

- (void).cxx_destruct;
- (void)_acquireAssertionsForFolderController:(id)arg1;
- (id)_aggregateLoggingAppKeyForIcon:(id)arg1;
- (void)_backupRestoringDidChange:(id)arg1;
- (bool)_badgesAreEnabledForSectionInfo:(id)arg1;
- (void)_beginDisablingAllOrientationChangesForReason:(id)arg1;
- (void)_controlCenterWillDismiss:(id)arg1;
- (void)_controlCenterWillPresent:(id)arg1;
- (void)_coverSheetDidPresent:(id)arg1;
- (void)_coverSheetWillPresent:(id)arg1;
- (id)_createTestFolder;
- (id)_createTestFolderWithOverrideIconList:(id)arg1;
- (id)_currentFolderController;
- (long long)_effectiveOrientation;
- (void)_endDisablingAllOrientationChangesForReason:(id)arg1;
- (void)_enqueueTransitionName:(id)arg1 withHandler:(id /* block */)arg2;
- (void)_ensureRootFolderController;
- (void)_failCurrentTestWithMessage:(id)arg1;
- (unsigned long long)_foldersInList:(id)arg1;
- (void)_forceTouchControllerWillPresent:(id)arg1;
- (void)_iconForceTouchControllerDidDismiss:(id)arg1;
- (void)_iconForceTouchControllerWillPresent:(id)arg1;
- (void)_iconVisibilityChanged:(id)arg1;
- (bool)_ignoreMutatingIconListsOnApplicationInstall;
- (void)_installedAppsDidChange:(id)arg1;
- (void)_invalidateAssertionsForFolderController:(id)arg1;
- (bool)_isHostedByCoverSheet;
- (void)_launchFromIconView:(id)arg1;
- (void)_lockScreenUIWillLock:(id)arg1;
- (void)_mutateIconListsForInstalledAppsDidChangeWithController:(id)arg1 added:(id)arg2 modified:(id)arg3 removed:(id)arg4;
- (id)_openFolderController;
- (void)_performInitialLayoutWithOrientation:(long long)arg1;
- (id)_policyAggregator;
- (id)_ppt_currentHomescreenState;
- (void)_ppt_restoreHomescreenState:(id)arg1;
- (void)_primaryAppleAcountDidChange:(id)arg1;
- (void)_relinquishStatusBarContentAssertion;
- (id)_rootFolderController;
- (void)_runAppIconForceTouchTest:(id)arg1 withOptions:(id)arg2;
- (void)_runFolderCloseTest;
- (void)_runFolderOpenTest;
- (void)_runFolderTestWithName:(id)arg1 actions:(id /* block */)arg2;
- (void)_runScrollFolderTest:(long long)arg1;
- (void)_runTest:(id /* block */)arg1 afterMovingIconsIntoFolder:(id)arg2 withFolderOpen:(bool)arg3;
- (void)_selectIconModel:(bool)arg1;
- (void)_setIgnoreMutatingIconListsOnApplicationInstall:(bool)arg1;
- (bool)_shouldHideAppIconForceTouchInfoForApplication:(id)arg1;
- (bool)_shouldRespondToIconCloseBoxes;
- (void)_showInfoAlertIfNeeded:(bool)arg1;
- (void)_storeAccountDidChange:(id)arg1;
- (struct CGSize { double x1; double x2; })_suggestedTodayViewSizeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_todayOverlayControllerIfNeeded;
- (void)_updateEnabledBadgesSetWithSections:(id)arg1;
- (void)_updateStatusBarContentAssertion;
- (void)_updateUninstallingSystemAppsRestricted;
- (void)_updateVisibleIconsAfterOcclusionChange;
- (void)_updateVisibleIconsViewsForAllowableCloseBoxes;
- (void)activateTodayViewWithCompletion:(id /* block */)arg1;
- (void)addIconOcclusionReason:(unsigned long long)arg1 updateVisibleIcons:(bool)arg2;
- (id)additionalIconModelForIconManager:(id)arg1;
- (id)alertItemsController;
- (void)alertItemsController:(id)arg1 didActivateAlertItem:(id)arg2;
- (void)alertItemsController:(id)arg1 didDeactivateAlertItem:(id)arg2 forReason:(int)arg3;
- (void)alertItemsController:(id)arg1 willActivateAlertItem:(id)arg2;
- (id)allApplications;
- (unsigned long long)allowedInterfaceOrientations;
- (unsigned long long)allowedInterfaceOrientationsForIconManager:(id)arg1;
- (bool)allowsBadgingForIcon:(id)arg1;
- (bool)allowsUninstall;
- (id)animationWindow;
- (id)animator:(id)arg1 animationSettingsForOperation:(unsigned long long)arg2 childViewController:(id)arg3;
- (id)appIconForceTouchWindows;
- (id)appSwitcherHeaderIconImageCache;
- (id)appSwitcherUnmaskedIconImageCache;
- (id)applicationController;
- (id)applicationPlaceholderController;
- (void)applicationRestrictionController:(id)arg1 didUpdateVisibleTags:(id)arg2 hiddenTags:(id)arg3;
- (bool)areAnyIconViewContextMenusAnimating;
- (bool)areAnyIconViewContextMenusShowing;
- (bool)areHomeScreenIconsOccluded;
- (id)assistantController;
- (void)assistantWillAppear:(id)arg1;
- (void)completeSidebarAnimationsIfNeeded;
- (id)containerView;
- (id)containerViewForPresentingContextMenuForIconView:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentOverlayInsetsFromParentIfAvailableForFolderController:(id)arg1;
- (id)contentView;
- (id)currentAnimationContainer;
- (double)currentDockHeight;
- (long long)currentIconListIndex;
- (void)dealloc;
- (id)defaultIconStateForIconManager:(id)arg1;
- (unsigned long long)defaultSearchViewPresentationSourceForViewController:(id)arg1;
- (id)delayedLaunchRequestTimer;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)dismissAppIconForceTouchControllers:(id /* block */)arg1;
- (void)dismissSearchView;
- (void)dismissTodayOverlay;
- (bool)dismissingMenuForFolderPresentation;
- (id)displayLayoutTransition;
- (double)distanceToTopOfSpotlightIconsForIconManager:(id)arg1;
- (void)earlyTerminateAnyContextMenuAnimations;
- (id)editingEndTimer;
- (id)fallbackIconContainerView;
- (id)firstPageLeafIdentifiersForIconManager:(id)arg1;
- (id)floatingDockController;
- (void)folderController:(id)arg1 iconListView:(id)arg2 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg3;
- (id)folderNameForDisplayID:(id)arg1;
- (void)handleHomeButtonTap;
- (void)handleSpotlightDismissalFromViewController:(id)arg1;
- (void)handleSpotlightPresentationFromViewController:(id)arg1;
- (bool)hasRestrictedEnforcedLayout;
- (id)iconDragManager;
- (id)iconEditingFeedbackWarmTimer;
- (id)iconManager;
- (id)iconManager:(id)arg1 accessibilityTintColorForIconView:(id)arg2;
- (id)iconManager:(id)arg1 accessibilityTintColorForScreenRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)iconManager:(id)arg1 additionalDragLiftScaleForIconView:(id)arg2;
- (bool)iconManager:(id)arg1 allowsBadgingForIcon:(id)arg2;
- (id)iconManager:(id)arg1 animator:(id)arg2 animationSettingsForOperation:(unsigned long long)arg3 childViewController:(id)arg4;
- (id)iconManager:(id)arg1 applicationBundleURLForShortcutsWithIconView:(id)arg2;
- (id)iconManager:(id)arg1 applicationShortcutItemsForIconView:(id)arg2;
- (id)iconManager:(id)arg1 applicationShortcutWidgetBundleIdentifierForShortcutsWithIconView:(id)arg2;
- (id)iconManager:(id)arg1 backgroundViewForComponentsOfIconView:(id)arg2;
- (id)iconManager:(id)arg1 backgroundViewForDockForRootFolderController:(id)arg2;
- (id)iconManager:(id)arg1 backgroundViewForEditingDoneButtonForRootFolderController:(id)arg2;
- (bool)iconManager:(id)arg1 canBeginDragForIconView:(id)arg2;
- (long long)iconManager:(id)arg1 closeBoxTypeForIconView:(id)arg2 proposedType:(long long)arg3;
- (void)iconManager:(id)arg1 configureIconView:(id)arg2 forIcon:(id)arg3;
- (id)iconManager:(id)arg1 containerViewForPresentingContextMenuForIconView:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })iconManager:(id)arg1 contentOverlayInsetsFromParentIfAvailableForFolderController:(id)arg2;
- (id)iconManager:(id)arg1 defaultAutomaticFavoriteIconIdentifiersWithMaximumCount:(unsigned long long)arg2;
- (void)iconManager:(id)arg1 didAddItemsToIconDragWithUniqueIdentifier:(id)arg2 numberOfDraggedItems:(unsigned long long)arg3;
- (void)iconManager:(id)arg1 didCloseFolder:(id)arg2;
- (void)iconManager:(id)arg1 didCreateRootFolderController:(id)arg2;
- (void)iconManager:(id)arg1 didCreateRootViewController:(id)arg2;
- (void)iconManager:(id)arg1 didEndIconDragWithUniqueIdentifier:(id)arg2 numberOfDraggedItems:(unsigned long long)arg3;
- (void)iconManager:(id)arg1 didOpenFolder:(id)arg2;
- (void)iconManager:(id)arg1 didReceiveTapOnLaunchDisabledIconView:(id)arg2;
- (void)iconManager:(id)arg1 didSpringLoadIconView:(id)arg2;
- (id)iconManager:(id)arg1 dragPreviewForIconView:(id)arg2 dragPreviewForItem:(id)arg3 session:(id)arg4 previewParameters:(id)arg5;
- (long long)iconManager:(id)arg1 draggingStartLocationForIconView:(id)arg2 proposedStartLocation:(long long)arg3;
- (id)iconManager:(id)arg1 fakeStatusBarForFolderController:(id)arg2;
- (bool)iconManager:(id)arg1 folderController:(id)arg2 canChangeCurrentPageIndexToIndex:(long long)arg3;
- (void)iconManager:(id)arg1 folderControllerDidEndScrolling:(id)arg2;
- (void)iconManager:(id)arg1 folderControllerWillBeginScrolling:(id)arg2;
- (void)iconManager:(id)arg1 iconDropSessionDidEnter:(id)arg2;
- (void)iconManager:(id)arg1 iconView:(id)arg2 willUseContextMenuStyle:(id)arg3;
- (bool)iconManager:(id)arg1 iconViewDisplaysCloseBox:(id)arg2;
- (id)iconManager:(id)arg1 launchActionsForIconView:(id)arg2;
- (void)iconManager:(id)arg1 launchIconForIconView:(id)arg2;
- (id)iconManager:(id)arg1 launchURLForIconView:(id)arg2;
- (id)iconManager:(id)arg1 localizedFolderNameForDefaultDisplayName:(id)arg2;
- (double)iconManager:(id)arg1 minimumHomeScreenScaleForFolderController:(id)arg2;
- (void)iconManager:(id)arg1 nestingViewController:(id)arg2 willPerformOperation:(long long)arg3 onViewController:(id)arg4 withTransitionCoordinator:(id)arg5;
- (void)iconManager:(id)arg1 possibleUserIconTapBegan:(id)arg2;
- (void)iconManager:(id)arg1 possibleUserIconTapBeganAfterInformingIcon:(id)arg2;
- (id)iconManager:(id)arg1 reasonToDisallowInteractionOnIconView:(id)arg2;
- (void)iconManager:(id)arg1 rootFolderController:(id)arg2 didChangeEffectiveSidebarVisibilityProgress:(double)arg3;
- (void)iconManager:(id)arg1 rootFolderController:(id)arg2 didChangeSidebarVisibilityProgress:(double)arg3;
- (void)iconManager:(id)arg1 rootFolderController:(id)arg2 didEndOverscrollOnFirstPageWithVelocity:(double)arg3;
- (void)iconManager:(id)arg1 rootFolderController:(id)arg2 didOverscrollOnFirstPageByAmount:(double)arg3;
- (void)iconManager:(id)arg1 rootFolderController:(id)arg2 willUsePropertyAnimator:(id)arg3 toTransitionToState:(long long)arg4;
- (void)iconManager:(id)arg1 rootFolderController:(id)arg2 willUseTransitionContext:(id)arg3 toTransitionToState:(long long)arg4;
- (bool)iconManager:(id)arg1 shouldActivateApplicationShortcutItem:(id)arg2 atIndex:(unsigned long long)arg3 forIconView:(id)arg4;
- (bool)iconManager:(id)arg1 shouldContinueToUseBackgroundView:(id)arg2 forComponentsOfIconView:(id)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })iconManager:(id)arg1 statusBarEdgeInsetsForFolderController:(id)arg2;
- (void)iconManager:(id)arg1 statusBarInsetsDidChange:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)iconManager:(id)arg1 statusBarStyleRequestForFolderController:(id)arg2;
- (void)iconManager:(id)arg1 touchesEndedForIconView:(id)arg2;
- (void)iconManager:(id)arg1 wantsToAdjustTodayContentForEdgeBounceForScrollOffset:(struct CGPoint { double x1; double x2; })arg2;
- (id)iconManager:(id)arg1 wantsToHideStatusBarForFolderController:(id)arg2;
- (void)iconManager:(id)arg1 wantsUninstallForIcon:(id)arg2 location:(id)arg3;
- (void)iconManager:(id)arg1 willBeginIconDragWithUniqueIdentifier:(id)arg2 numberOfDraggedItems:(unsigned long long)arg3;
- (void)iconManager:(id)arg1 willCloseFolder:(id)arg2;
- (void)iconManager:(id)arg1 willCloseFolderController:(id)arg2;
- (void)iconManager:(id)arg1 willDestroyRootFolderController:(id)arg2;
- (void)iconManager:(id)arg1 willDestroyRootViewController:(id)arg2;
- (void)iconManager:(id)arg1 willOpenFolder:(id)arg2;
- (void)iconManager:(id)arg1 willOpenFolderController:(id)arg2;
- (void)iconManager:(id)arg1 willPrepareIconViewForLaunch:(id)arg2;
- (void)iconManager:(id)arg1 willRemoveFakeStatusBar:(id)arg2 forFolderController:(id)arg3;
- (void)iconManager:(id)arg1 willUseIconImageCache:(id)arg2;
- (void)iconManager:(id)arg1 willUseRootFolderControllerConfiguration:(id)arg2;
- (bool)iconManagerCanBeginIconDrags:(id)arg1;
- (bool)iconManagerCanSaveIconState:(id)arg1;
- (bool)iconManagerCanUseSeparateWindowForRotation:(id)arg1;
- (void)iconManagerDidFinishInstallForIcon:(id)arg1;
- (void)iconManagerDidNoteIconStateChangedExternally:(id)arg1;
- (void)iconManagerDidSaveIconState:(id)arg1;
- (void)iconManagerFolderAnimatingDidChange:(id)arg1;
- (void)iconManagerIconDraggingDidChange:(id)arg1;
- (id)iconModel:(id)arg1 applicationWithBundleIdentifier:(id)arg2;
- (unsigned long long)iconOcclusionReasons;
- (id)iconPathForIconWithDisplayID:(id)arg1;
- (bool)iconsShouldAllowCloseBoxes;
- (bool)importIconState:(id)arg1;
- (id)initWithApplicationController:(id)arg1 applicationPlaceholderController:(id)arg2 userInterfaceController:(id)arg3 policyAggregator:(id)arg4 alertItemsController:(id)arg5 assistantController:(id)arg6;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)interactivePullToTodaySearchTransition;
- (long long)interfaceOrientationForIconManager:(id)arg1;
- (bool)isEditingAllowedForIconManager:(id)arg1;
- (bool)isFloatingDockVisibleForIconManager:(id)arg1;
- (bool)isIconContentPossiblyVisibleOverApplicationForIconManager:(id)arg1;
- (bool)isRootFolderContentVisibleForIconManager:(id)arg1;
- (bool)isShowingSidebar;
- (bool)isShowingTodayOverlay;
- (bool)isSidebarPinned;
- (bool)isUninstallSupportedForIcon:(id)arg1;
- (bool)isUninstallingSystemAppsRestricted;
- (id)launchActionsForIconView:(id)arg1;
- (id)launchActivationSettingsForIconView:(id)arg1;
- (id)launchURLForIconView:(id)arg1;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (id)legibilitySettings;
- (void)loadView;
- (id)localizedDefaultFolderNameForIconManager:(id)arg1;
- (id)localizedFolderNameForDefaultDisplayName:(id)arg1;
- (unsigned long long)maximumListCountForFoldersForIconManager:(id)arg1;
- (double)minimumHomeScreenScale;
- (double)minimumHomeScreenScaleForFloatingDockController:(id)arg1;
- (id)model;
- (void)noteFloatingDockWillAnimateChangeInHeight;
- (void)noteFloatingDockWillChangeHeight;
- (void)noteTransientOverlayPresented;
- (void)noteViewCovered;
- (void)noteViewUncovered;
- (id)notificationIconImageCache;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(bool)arg2;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (id)organizeInFoldersTestRecipe;
- (long long)orientation;
- (void)performAfterContextMenuAnimationsHaveCompleted:(id /* block */)arg1;
- (id)placeholdersByDisplayIDForIconModel:(id)arg1;
- (id)policyAggregator;
- (void)popToCurrentRootIconListWhenPossible;
- (id)popoverDelayTimer;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)publisher:(id)arg1 didUpdateLayout:(id)arg2 withTransition:(id)arg3;
- (id)recycledViewsContainerProviderForIconManager:(id)arg1;
- (id)relayoutTestRecipe;
- (void)removeIconOcclusionReason:(unsigned long long)arg1 updateVisibleIcons:(bool)arg2;
- (bool)resetHomeScreenLayout;
- (id)rootFolder;
- (id)rootFolderController:(id)arg1 transitionContextForTransitioningToState:(long long)arg2 animated:(bool)arg3 interactive:(bool)arg4;
- (void)rootFolderController:(id)arg1 transitionDidFinish:(id)arg2;
- (void)rootFolderController:(id)arg1 transitionWillBegin:(id)arg2;
- (void)rootFolderController:(id)arg1 transitionWillFinish:(id)arg2;
- (void)rootFolderController:(id)arg1 transitionWillReverse:(id)arg2;
- (void)rootFolderPageStateProvider:(id)arg1 didContinueTransitionToState:(long long)arg2 progress:(double)arg3;
- (void)rootFolderPageStateProvider:(id)arg1 didEndTransitionFromState:(long long)arg2 toState:(long long)arg3 successfully:(bool)arg4;
- (void)rootFolderPageStateProvider:(id)arg1 willBeginTransitionToState:(long long)arg2 animated:(bool)arg3 interactive:(bool)arg4;
- (void)rootFolderPageStateProvider:(id)arg1 willEndTransitionToState:(long long)arg2 successfully:(bool)arg3;
- (id)rootFolderSettings;
- (id)runDownloadingIconTestRecipe;
- (void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2;
- (void)searchGesture:(id)arg1 completedShowing:(bool)arg2;
- (id /* block */)searchGestureCompletionHandler;
- (void)setDelayedLaunchRequestTimer:(id)arg1;
- (void)setDismissingMenuForFolderPresentation:(bool)arg1;
- (void)setDisplayLayoutTransition:(id)arg1;
- (void)setEditingEndTimer:(id)arg1;
- (void)setHasRestrictedEnforcedLayout:(bool)arg1;
- (void)setIconEditingFeedbackWarmTimer:(id)arg1;
- (void)setIconOcclusionReasons:(unsigned long long)arg1;
- (void)setInteractivePullToTodaySearchTransition:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setPopoverDelayTimer:(id)arg1;
- (void)setSearchGestureCompletionHandler:(id /* block */)arg1;
- (void)setSidebarAppearanceStateOverrideAssertion:(id)arg1;
- (void)setSignificantAnimationColorSamplingAssertion:(id)arg1;
- (void)setSpotlightViewController:(id)arg1;
- (void)setStatusBarContentAssertion:(id)arg1;
- (void)setSuspendWallpaperAnimationForSpotlightAssertion:(id)arg1;
- (void)setTodayOverlayController:(id)arg1;
- (void)setTodayViewController:(id)arg1;
- (void)setUninstallingSystemAppsRestricted:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)shouldAutorotate;
- (bool)shouldUseLiveBlurForBackgroundViewForComponentsOfIconView:(id)arg1;
- (id)sidebarAppearanceStateOverrideAssertion;
- (id)significantAnimationColorSamplingAssertion;
- (id)spotlightViewController;
- (id)statusBarContentAssertion;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)supportedInterfaceOrientations;
- (id)suspendWallpaperAnimationForSpotlightAssertion;
- (id)tableUIIconImageCache;
- (id)todayOverlayController;
- (id)todayViewController;
- (void)todayViewController:(id)arg1 didEndInteractivePullToSearchSuccessfully:(bool)arg2;
- (void)todayViewController:(id)arg1 didUpdateInteractivePullToSearchWithProgress:(double)arg2;
- (bool)todayViewControllerCanBeginInteractivePullToSearch:(id)arg1;
- (void)todayViewControllerDidBeginInteractivePullToSearch:(id)arg1;
- (void)todayViewControllerDidFocusSearchField:(id)arg1;
- (id)toggleSearchTestRecipe;
- (id)transitionContextToShowSpotlight:(bool)arg1 fromTodayView:(bool)arg2 animated:(bool)arg3 interactive:(bool)arg4;
- (void)updateContentViewOrientationAndLayoutIfNeeded;
- (void)updateNumberOfRowsWithDuration:(double)arg1;
- (id)userInterfaceController;
- (id)userInterfaceControllerIfExists;
- (id)viewControllerForPresentingViewControllersForIconManager:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)visibleIconStateDisplayIdentifiers;
- (id)widgetGroupViewController;
- (struct CGSize { double x1; double x2; })widgetGroupViewController:(id)arg1 sizeForInterfaceOrientation:(long long)arg2;
- (void)widgetGroupViewControllerDidChangeHeaderVisibility:(id)arg1;
- (id)windowForIconDragPreviewsForIconManager:(id)arg1;

@end