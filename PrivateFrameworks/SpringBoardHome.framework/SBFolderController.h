/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBFolderController : SBNestingViewController <BSDescriptionProviding, SBFolderControllerBackgroundViewDelegate, SBFolderControllerDelegate, SBFolderObserver, SBFolderViewDelegate, SBIconListViewDragObserver, SBIconLocationPresenting, SBIconViewQuerying, SBScaleIconZoomAnimationContaining> {
    bool  _active;
    unsigned long long  _allowedOrientations;
    SBFolderControllerAnimationContext * _animationContext;
    SBFolderControllerBackgroundView * _backgroundView;
    NSTimer * _closeFolderTimer;
    SBFolderControllerConfiguration * _configuration;
    SBFolderContainerView * _containerView;
    SBFolderView * _contentView;
    id  _context;
    UIColor * _defaultAccessibilityTintColor;
    NSMutableSet * _draggingEnteredIconListViews;
    UIStatusBar * _fakeStatusBar;
    NSMutableSet * _fakeStatusBarHidingReasons;
    SBFolder * _folder;
    <SBFolderControllerDelegate> * _folderDelegate;
    SBFolderIconImageCache * _folderIconImageCache;
    SBIconView * _folderIconView;
    bool  _grabbedIconHasEverEnteredFolderView;
    UIView * _headerView;
    SBIconAnimator * _iconAnimator;
    SBHIconImageCache * _iconImageCache;
    SBIconPageIndicatorImageSetCache * _iconPageIndicatorImageSetCache;
    <SBIconViewProviding> * _iconViewProvider;
    bool  _isAnimating;
    bool  _isEditing;
    bool  _isOpen;
    _UILegibilitySettings * _legibilitySettings;
    <SBIconListLayoutProvider> * _listLayoutProvider;
    bool  _occluded;
    long long  _orientation;
    NSString * _originatingIconLocation;
    SBIconListPageControl * _pageControl;
    NSMutableSet * _realStatusBarHidingReasons;
    bool  _rotating;
    <BSInvalidatable> * _statusBarAssertion;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, readonly) unsigned long long allowedOrientations;
@property (getter=isAnimating, nonatomic) bool animating;
@property (nonatomic, retain) SBFolderControllerAnimationContext *animationContext;
@property (nonatomic, readonly) UIWindow *animationWindow;
@property (nonatomic, readonly) bool canAcceptFolderIconDrags;
@property (nonatomic, readonly) bool closesAfterDragExits;
@property (nonatomic, copy) SBFolderControllerConfiguration *configuration;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) id context;
@property (nonatomic, readonly) SBIconListView *currentIconListView;
@property (nonatomic, readonly) NSIndexPath *currentIndexPath;
@property (nonatomic, readonly) long long currentPageIndex;
@property (nonatomic, readonly) double currentScrollingOffset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) SBFolderController *deepestFolderController;
@property (nonatomic, retain) UIColor *defaultAccessibilityTintColor;
@property (nonatomic, readonly) long long defaultPageIndex;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disablesScrollingWhileIconDragIsDropping;
@property (nonatomic, readonly) SBIconListView *dockIconListView;
@property (nonatomic, readonly) SBIconListView *dockListView;
@property (getter=isEditing, nonatomic, readonly) bool editing;
@property (nonatomic, readonly, copy) NSArray *extraViews;
@property (nonatomic, readonly) UIView *extraViewsContainer;
@property (nonatomic, retain) UIStatusBar *fakeStatusBar;
@property (nonatomic, readonly) UIView *fallbackIconContainerView;
@property (nonatomic, readonly) long long firstIconPageIndex;
@property (nonatomic, retain) SBFolder *folder;
@property (nonatomic, readonly) SBFolderContainerView *folderContainerView;
@property (nonatomic) <SBFolderControllerDelegate> *folderDelegate;
@property (nonatomic, readonly) SBFolderIconImageCache *folderIconImageCache;
@property (nonatomic, retain) SBIconView *folderIconView;
@property (nonatomic, readonly) SBFolderView *folderView;
@property (nonatomic, readonly) SBFolderView *folderViewIfLoaded;
@property (nonatomic, readonly) bool hasDock;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *headerView;
@property (nonatomic, retain) SBHIconImageCache *iconImageCache;
@property (nonatomic, retain) SBIconLayoutOverrideStrategy *iconLayoutOverrideStrategy;
@property (nonatomic, readonly) unsigned long long iconListViewCount;
@property (nonatomic, readonly, copy) NSArray *iconListViews;
@property (nonatomic, readonly) SBHIconModel *iconModel;
@property (nonatomic, readonly) SBIconPageIndicatorImageSetCache *iconPageIndicatorImageSetCache;
@property (nonatomic, readonly) <SBIconViewProviding> *iconViewProvider;
@property (nonatomic, readonly) SBFolderController *innerFolderController;
@property (nonatomic, readonly) long long lastIconPageIndex;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) <SBIconListLayoutProvider> *listLayoutProvider;
@property (nonatomic, readonly) long long maximumPageIndex;
@property (nonatomic, readonly) long long minimumPageIndex;
@property (getter=isOccluded, nonatomic) bool occluded;
@property (getter=isOpen, nonatomic) bool open;
@property (nonatomic) long long orientation;
@property (nonatomic, copy) NSString *originatingIconLocation;
@property (nonatomic, readonly) SBFolderController *outerFolderController;
@property (nonatomic, retain) SBIconListPageControl *pageControl;
@property (nonatomic) double pageControlAlpha;
@property (getter=isPageControlHidden, nonatomic) bool pageControlHidden;
@property (nonatomic, readonly, copy) NSSet *presentedIconLocations;
@property (getter=isRotating, nonatomic) bool rotating;
@property (getter=isScrollDecelerating, nonatomic, readonly) bool scrollDecelerating;
@property (getter=isScrollDragging, nonatomic, readonly) bool scrollDragging;
@property (getter=isScrollTracking, nonatomic, readonly) bool scrollTracking;
@property (getter=isScrolling, nonatomic, readonly) bool scrolling;
@property (nonatomic, readonly) bool shouldAnimateFirstTwoViewsAsOne;
@property (nonatomic, readonly) bool shouldAnimateLastTwoViewsAsOne;
@property (nonatomic, retain) <BSInvalidatable> *statusBarAssertion;
@property (nonatomic) double statusBarHeight;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool suspendsWallpaperAnimationWhileOpen;
@property (nonatomic, readonly) long long userInterfaceLayoutDirection;
@property (nonatomic, readonly) unsigned long long userInterfaceLayoutDirectionHandling;

+ (Class)_contentViewClass;
+ (Class)configurationClass;
+ (id)iconLocation;
+ (Class)listViewClass;

- (void).cxx_destruct;
- (id)_addEmptyListForce:(bool)arg1;
- (void)_addFakeStatusBarView;
- (bool)_allowUserInteraction;
- (bool)_canAcceptIconDropSession:(id)arg1 inListView:(id)arg2;
- (void)_cancelAllInteractionTimers;
- (void)_cancelCloseFolderTimer;
- (void)_clearIconAnimator;
- (void)_closeFolderTimerFired;
- (void)_compactFolder;
- (void)_configureForInnerFolderController:(id)arg1;
- (unsigned long long)_depth;
- (void)_fadeHomescreenAndDockIfNecessaryForFolderOpen:(bool)arg1;
- (void)_hideFakeStatusBarForReason:(id)arg1;
- (void)_hideStatusBarForReason:(id)arg1;
- (bool)_homescreenAndDockShouldFade;
- (bool)_iconAppearsOnCurrentPage:(id)arg1;
- (void)_invalidate;
- (bool)_listIndexIsVisible:(unsigned long long)arg1;
- (id)_makeContentViewWithConfiguration:(id)arg1;
- (id)_newAnimatorForZoomUp:(bool)arg1;
- (void)_noteFolderListsDidChange;
- (void)_removeFakeStatusBar;
- (void)_removeFakeStatusBarAndAssertionIfExists;
- (void)_resetFakeStatusBarFrameOnly;
- (void)_resetFakeStatusBarMatchMoveAnimation;
- (void)_resetFakeStatusBarSettingsIfNecessary;
- (void)_resetIconLists;
- (void)_setCloseFolderTimerIfNecessary;
- (void)_setHomescreenAndDockAlpha:(double)arg1;
- (void)_unhideFakeStatusBarForReason:(id)arg1;
- (void)_unhideStatusBarForReason:(id)arg1;
- (void)_updateAssociatedControllerStateAnimated:(bool)arg1;
- (void)_updateFolderRequiredTrailingEmptyListCount;
- (void)_updateHomescreenAndDockFade;
- (void)_updateStateOfAssociatedController:(id)arg1 animated:(bool)arg2;
- (id)accessibilityTintColorForScreenRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)addEmptyListView;
- (void)addViewToHierarchyForNestedViewController:(id)arg1;
- (unsigned long long)allowedOrientations;
- (void)animateScrollToDefaultPageWithCompletionHandler:(id /* block */)arg1;
- (id)animationContext;
- (id)animationWindow;
- (void)beginEditingTitle;
- (id)beginModifyingDockOffscreenFractionForReason:(id)arg1;
- (id)borrowScalingView;
- (bool)canAcceptFolderIconDrags;
- (void)cancelScrolling;
- (bool)closesAfterDragExits;
- (id)configuration;
- (void)configureInnerFolderControllerConfiguration:(id)arg1;
- (id)containerView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentOverlayInsetsFromParentIfAvailableForFolderController:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentOverlayInsetsFromParentIfAvailableForFolderView:(id)arg1;
- (id)contentView;
- (id)context;
- (Class)controllerClassForFolder:(id)arg1;
- (id)currentIconListView;
- (id)currentIndexPath;
- (long long)currentPageIndex;
- (double)currentScrollingOffset;
- (id)deepestFolderController;
- (id)defaultAccessibilityTintColor;
- (long long)defaultPageIndex;
- (void)delegateDidChange;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)disablesScrollingWhileIconDragIsDropping;
- (id)dockIconListView;
- (id)dockListView;
- (bool)doesPageContainIconListView:(long long)arg1;
- (void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateDisplayedIconViewsUsingBlock:(id /* block */)arg1;
- (id)extraViews;
- (id)extraViewsContainer;
- (void)fadeContentForMagnificationFraction:(double)arg1;
- (void)fadeContentForMinificationFraction:(double)arg1;
- (id)fakeStatusBar;
- (id)fakeStatusBarForFolderController:(id)arg1;
- (id)fallbackIconContainerView;
- (long long)firstIconPageIndex;
- (id)firstIconViewForIcon:(id)arg1;
- (id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;
- (id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;
- (id)folder;
- (void)folder:(id)arg1 didAddIcons:(id)arg2 removedIcons:(id)arg3;
- (void)folder:(id)arg1 didAddList:(id)arg2;
- (void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;
- (void)folder:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (id)folderContainerView;
- (id)folderController:(id)arg1 accessibilityTintColorForScreenRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)folderController:(id)arg1 canChangeCurrentPageIndexToIndex:(long long)arg2;
- (void)folderController:(id)arg1 draggedIconShouldDropFromListView:(id)arg2;
- (id)folderController:(id)arg1 iconAnimatorForOperation:(long long)arg2 onViewController:(id)arg3 animated:(bool)arg4 initialDelay:(double*)arg5;
- (bool)folderController:(id)arg1 iconListView:(id)arg2 canHandleIconDropSession:(id)arg3;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDragItem:(id)arg3 willAnimateDropWithAnimator:(id)arg4;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSession:(id)arg3 didPauseAtLocation:(struct CGPoint { double x1; double x2; })arg4;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidEnter:(id)arg3;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidExit:(id)arg3;
- (id)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidUpdate:(id)arg3;
- (void)folderController:(id)arg1 iconListView:(id)arg2 performIconDrop:(id)arg3;
- (id)folderController:(id)arg1 iconListView:(id)arg2 previewForDroppingIconDragItem:(id)arg3 proposedPreview:(id)arg4;
- (bool)folderController:(id)arg1 iconListView:(id)arg2 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg3 onIconView:(id)arg4;
- (void)folderController:(id)arg1 iconListView:(id)arg2 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg3;
- (void)folderController:(id)arg1 willCreateInnerFolderControllerWithConfiguration:(id)arg2;
- (void)folderController:(id)arg1 willRemoveFakeStatusBar:(id)arg2;
- (void)folderController:(id)arg1 willUseIconTransitionAnimator:(id)arg2 forOperation:(long long)arg3 onViewController:(id)arg4 animated:(bool)arg5;
- (void)folderControllerDidClose:(id)arg1;
- (void)folderControllerDidEndScrolling:(id)arg1;
- (void)folderControllerDidOpen:(id)arg1;
- (id)folderControllerForFolder:(id)arg1;
- (void)folderControllerShouldBeginEditing:(id)arg1;
- (bool)folderControllerShouldClose:(id)arg1 withPinchGesture:(id)arg2;
- (void)folderControllerShouldEndEditing:(id)arg1;
- (id)folderControllerWantsToHideStatusBar:(id)arg1;
- (void)folderControllerWillBeginScrolling:(id)arg1;
- (void)folderControllerWillClose:(id)arg1;
- (void)folderControllerWillOpen:(id)arg1;
- (id)folderDelegate;
- (id)folderIconImageCache;
- (id)folderIconView;
- (id)folderView;
- (id)folderView:(id)arg1 accessibilityTintColorForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)folderView:(id)arg1 canChangeCurrentPageIndexToIndex:(long long)arg2;
- (void)folderView:(id)arg1 currentPageIndexDidChange:(long long)arg2;
- (void)folderView:(id)arg1 currentPageIndexWillChange:(long long)arg2;
- (bool)folderView:(id)arg1 iconListView:(id)arg2 canHandleIconDropSession:(id)arg3;
- (void)folderView:(id)arg1 iconListView:(id)arg2 iconDragItem:(id)arg3 willAnimateDropWithAnimator:(id)arg4;
- (void)folderView:(id)arg1 iconListView:(id)arg2 iconDropSession:(id)arg3 didPauseAtLocation:(struct CGPoint { double x1; double x2; })arg4;
- (void)folderView:(id)arg1 iconListView:(id)arg2 iconDropSessionDidEnter:(id)arg3;
- (void)folderView:(id)arg1 iconListView:(id)arg2 iconDropSessionDidExit:(id)arg3;
- (id)folderView:(id)arg1 iconListView:(id)arg2 iconDropSessionDidUpdate:(id)arg3;
- (void)folderView:(id)arg1 iconListView:(id)arg2 performIconDrop:(id)arg3;
- (id)folderView:(id)arg1 iconListView:(id)arg2 previewForDroppingIconDragItem:(id)arg3 proposedPreview:(id)arg4;
- (bool)folderView:(id)arg1 iconListView:(id)arg2 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg3 onIconView:(id)arg4;
- (void)folderView:(id)arg1 iconListView:(id)arg2 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg3;
- (void)folderView:(id)arg1 willAnimateScrollToPageIndex:(long long)arg2;
- (void)folderViewDidChangeOrientation:(id)arg1;
- (void)folderViewDidEndScrolling:(id)arg1;
- (void)folderViewDidScroll:(id)arg1;
- (id)folderViewIfLoaded;
- (void)folderViewShouldBeginEditing:(id)arg1;
- (void)folderViewShouldClose:(id)arg1 withPinchGesture:(id)arg2;
- (void)folderViewShouldEndEditing:(id)arg1;
- (void)folderViewWillBeginDragging:(id)arg1;
- (void)folderViewWillBeginScrolling:(id)arg1;
- (void)folderViewWillEndDragging:(id)arg1;
- (void)folderViewWillUpdatePageDuringScrolling:(id)arg1;
- (bool)hasDock;
- (id)headerView;
- (id)iconImageCache;
- (id)iconLayoutOverrideStrategy;
- (void)iconListView:(id)arg1 concludeIconDrop:(id)arg2;
- (void)iconListView:(id)arg1 iconDropSessionDidEnd:(id)arg2;
- (id)iconListViewAtIndex:(unsigned long long)arg1;
- (id)iconListViewAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (Class)iconListViewClassForFolderView:(id)arg1;
- (unsigned long long)iconListViewCount;
- (id)iconListViewForDrag:(id)arg1;
- (id)iconListViewForTouch:(id)arg1;
- (unsigned long long)iconListViewIndexForPageIndex:(long long)arg1;
- (id)iconListViews;
- (id)iconLocation;
- (id)iconLocationForFolderView:(id)arg1;
- (id)iconModel;
- (id)iconPageIndicatorImageSetCache;
- (id)iconViewForIcon:(id)arg1 location:(id)arg2;
- (id)iconViewProvider;
- (id)initWithConfiguration:(id)arg1;
- (id)innerFolderController;
- (void)invalidate;
- (bool)isActive;
- (bool)isAnimating;
- (bool)isDisplayingIcon:(id)arg1;
- (bool)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;
- (bool)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;
- (bool)isDisplayingIconView:(id)arg1;
- (bool)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;
- (bool)isEditing;
- (bool)isEffectivelyOccluded;
- (bool)isEffectivelyOccludedIfHasInnerFolder:(bool)arg1;
- (bool)isOccluded;
- (bool)isOpen;
- (bool)isPageControlHidden;
- (bool)isPresentingIconLocation:(id)arg1;
- (bool)isRotating;
- (bool)isScrollDecelerating;
- (bool)isScrollDragging;
- (bool)isScrollTracking;
- (bool)isScrolling;
- (long long)lastIconPageIndex;
- (void)layoutIconLists:(double)arg1 animationType:(long long)arg2 forceRelayout:(bool)arg3;
- (id)legibilitySettings;
- (id)listLayoutProvider;
- (void)loadView;
- (id)matchMoveSourceViewForIconView:(id)arg1;
- (long long)maximumPageIndex;
- (double)minimumHomeScreenScaleForFolderController:(id)arg1;
- (double)minimumHomeScreenScaleForFolderControllerBackgroundView:(id)arg1;
- (double)minimumHomeScreenScaleForFolderView:(id)arg1;
- (long long)minimumPageIndex;
- (id)nestingViewController:(id)arg1 animationControllerForOperation:(long long)arg2 onViewController:(id)arg3 animated:(bool)arg4;
- (id)nestingViewController:(id)arg1 sourceViewForPresentingViewController:(id)arg2;
- (void)nestingViewController:(id)arg1 willPerformOperation:(long long)arg2 onViewController:(id)arg3 withTransitionCoordinator:(id)arg4;
- (void)noteIconDrag:(id)arg1 didChangeInIconListView:(id)arg2;
- (void)noteIconDrag:(id)arg1 didEnterIconListView:(id)arg2;
- (void)noteIconDrag:(id)arg1 didExitIconListView:(id)arg2;
- (void)noteIconDragDidEnd:(id)arg1;
- (void)noteUserIsInteractingWithIcons;
- (long long)orientation;
- (void)orientationDidChange:(long long)arg1;
- (id)originatingIconLocation;
- (id)outerFolderController;
- (id)pageControl;
- (double)pageControlAlpha;
- (long long)pageIndexForIconListViewIndex:(unsigned long long)arg1;
- (void)parentDelegateDidChange;
- (void)popFolderAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)prepareForAnimation:(id)arg1 withTargetIcon:(id)arg2;
- (void)prepareToClose;
- (void)prepareToLaunchTappedIcon:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)prepareToOpen;
- (void)prepareToTearDown;
- (id)presentedIconLocations;
- (void)pushFolderIcon:(id)arg1 location:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)removeViewFromHierarchyForNestedViewController:(id)arg1;
- (bool)restoreExpandedIndexPath:(id)arg1;
- (void)returnScalingView;
- (void)revealIcon:(id)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)setActive:(bool)arg1;
- (void)setAnimating:(bool)arg1;
- (void)setAnimationContext:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContentAlpha:(double)arg1;
- (void)setCurrentPageIndex:(long long)arg1;
- (bool)setCurrentPageIndex:(long long)arg1 animated:(bool)arg2;
- (bool)setCurrentPageIndex:(long long)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setCurrentPageIndexToListDirectlyContainingIcon:(id)arg1 animated:(bool)arg2;
- (void)setCurrentPageIndexToListDirectlyContainingIcon:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setDefaultAccessibilityTintColor:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setFakeStatusBar:(id)arg1;
- (void)setFolder:(id)arg1;
- (void)setFolderDelegate:(id)arg1;
- (void)setFolderIconImageCache:(id)arg1;
- (void)setFolderIconView:(id)arg1;
- (void)setIconImageCache:(id)arg1;
- (void)setIconLayoutOverrideStrategy:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setOccluded:(bool)arg1;
- (void)setOpen:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOriginatingIconLocation:(id)arg1;
- (void)setPageControl:(id)arg1;
- (void)setPageControlAlpha:(double)arg1;
- (void)setPageControlHidden:(bool)arg1;
- (void)setRotating:(bool)arg1;
- (void)setScrollingDisabled:(bool)arg1 forReason:(id)arg2;
- (void)setStatusBarAssertion:(id)arg1;
- (void)setStatusBarHeight:(double)arg1;
- (bool)shouldAnimateFirstTwoViewsAsOne;
- (bool)shouldAnimateLastTwoViewsAsOne;
- (bool)shouldOpenFolderIcon:(id)arg1;
- (id)statusBarAssertion;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })statusBarEdgeInsetsForFolderController:(id)arg1;
- (double)statusBarHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })statusBarInsetsForOrientation:(long long)arg1;
- (id)statusBarStyleRequestForFolderController:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)suspendsWallpaperAnimationWhileOpen;
- (void)unscatterAnimated:(bool)arg1 afterDelay:(double)arg2 withCompletion:(id /* block */)arg3;
- (void)updateContentViewOcclusion;
- (void)updateContentViewOcclusionWithOverriddenHasInnerFolder:(bool)arg1;
- (long long)userInterfaceLayoutDirection;
- (unsigned long long)userInterfaceLayoutDirectionHandling;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 forOperation:(long long)arg2 withTransitionCoordinator:(id)arg3;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end