/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBRootFolderView : SBFolderView <SBDockViewDelegate, _UISettingsKeyObserver> {
    long long  _activeSidebarAnimationCount;
    bool  _allowsAutoscrollToTodayView;
    bool  _allowsFreeScrollingUntilScrollingEnds;
    double  _baseOffsetForDeterminingScrollToSearchThreshold;
    SBHMinusPageStepper * _customPageAnimationStepper;
    unsigned long long  _dockEdge;
    bool  _dockExternal;
    SBDockIconListView * _dockListView;
    NSHashTable * _dockOffscreenProgressSettingClients;
    bool  _dockPinnedForRotation;
    <BSInvalidatable> * _dockStateDumpHandle;
    SBDockView * _dockView;
    bool  _dockViewBorrowed;
    SBTitledHomeScreenButton * _doneButton;
    <SBIconListViewIconLocationTransitioning> * _firstListViewIconLocationTransitionHandler;
    SBHRootFolderSettings * _folderSettings;
    long long  _iconListFrameOrientationOverride;
    UILabel * _idleTextView;
    unsigned long long  _ignoresOverscrollOnFirstPageOrientations;
    bool  _isTodayViewBouncing;
    double  _pageWidthWhenScrollToSearchBeganDragging;
    NSMutableSet * _parallaxDisabledReasons;
    SBFParallaxSettings * _parallaxSettings;
    UIView * _portraitHeaderView;
    double  _pullDownSearchVisibilityProgress;
    double  _scrollOffsetWhenScrollingBegan;
    bool  _scrollToSearchIsDraggingOrAnimating;
    double  _scrollingAdjustment;
    SBSearchBackdropView * _searchBackdropView;
    SBSearchGesture * _searchGesture;
    _SBRootFolderLayoutWrapperView * _searchPulldownWrapperView;
    _SBRootFolderLayoutWrapperView * _searchableTodayWrapperView;
    bool  _shiftsPullDownSearchForVisibility;
    bool  _showsDoneButton;
    unsigned long long  _sidebarAllowedOrientations;
    bool  _sidebarEffectivelyVisible;
    double  _sidebarPinned;
    bool  _sidebarSlideGestureActive;
    double  _sidebarVisibilityProgress;
    bool  _sidebarVisibleWhenScrollingBegan;
    _SBRootFolderLayoutWrapperView * _sidebarWrapperView;
    bool  _todayViewBouncing;
    bool  _todayViewPageHidden;
    double  _todayViewVisibilityProgress;
    bool  _userAttemptedToOverscrollDuringCurrentGesture;
    bool  _wasScrolling;
}

@property (nonatomic) bool allowsAutoscrollToTodayView;
@property (nonatomic) bool allowsFreeScrollingUntilScrollingEnds;
@property (nonatomic, readonly) double currentDockOffscreenFraction;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBRootFolderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long dockEdge;
@property (getter=isDockExternal, nonatomic, readonly) bool dockExternal;
@property (nonatomic, readonly) double dockHeight;
@property (nonatomic, readonly, copy) NSString *dockIconLocation;
@property (getter=isDockPinnedForRotation, nonatomic, readonly) bool dockPinnedForRotation;
@property (nonatomic, readonly) SBDockView *dockView;
@property (getter=isDockViewBorrowed, nonatomic) bool dockViewBorrowed;
@property (getter=isDockVisible, nonatomic, readonly) bool dockVisible;
@property (nonatomic, retain) SBTitledHomeScreenButton *doneButton;
@property (nonatomic, readonly) double effectiveSidebarVisibilityProgress;
@property (nonatomic, retain) <SBIconListViewIconLocationTransitioning> *firstListViewIconLocationTransitionHandler;
@property (nonatomic, retain) SBRootFolder *folder;
@property (nonatomic, retain) SBHRootFolderSettings *folderSettings;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hidesOffscreenCustomPageViews;
@property (nonatomic, readonly) unsigned long long ignoresOverscrollOnFirstPageOrientations;
@property (getter=isOnTodayPage, nonatomic, readonly) bool onTodayPage;
@property (nonatomic, readonly) SBFParallaxSettings *parallaxSettings;
@property (nonatomic, readonly) UIView *portraitHeaderView;
@property (nonatomic, readonly) UIView *pullDownSearchView;
@property (nonatomic) double pullDownSearchVisibilityProgress;
@property (nonatomic) double scrollingAdjustment;
@property (nonatomic, readonly) SBSearchBackdropView *searchBackdropView;
@property (nonatomic, retain) SBSearchGesture *searchGesture;
@property (getter=isSearchHidden, nonatomic) bool searchHidden;
@property (nonatomic, readonly) UIView *searchableTodayWrapperView;
@property (nonatomic) bool shiftsPullDownSearchForVisibility;
@property (nonatomic, readonly) bool shouldFadeDockOutDuringTransitionToTodayView;
@property (nonatomic, readonly) bool shouldFadePageControlOutDuringTransitionToTodayView;
@property (nonatomic) bool showsDoneButton;
@property (nonatomic, readonly) unsigned long long sidebarAllowedOrientations;
@property (getter=isSidebarEffectivelyVisible, nonatomic) bool sidebarEffectivelyVisible;
@property (nonatomic, readonly) long long sidebarPageIndex;
@property (getter=isSidebarPinned, nonatomic) double sidebarPinned;
@property (getter=isSidebarSlideGestureActive, nonatomic) bool sidebarSlideGestureActive;
@property (nonatomic, readonly) UIView *sidebarView;
@property (getter=isSidebarVisibilityGestureActive, nonatomic, readonly) bool sidebarVisibilityGestureActive;
@property (nonatomic) double sidebarVisibilityProgress;
@property (getter=wasSidebarVisibleWhenScrollingBegan, nonatomic) bool sidebarVisibleWhenScrollingBegan;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *todayView;
@property (getter=isTodayViewBouncing, nonatomic) bool todayViewBouncing;
@property (getter=isTodayViewPageHidden, nonatomic) bool todayViewPageHidden;
@property (nonatomic, readonly) long long todayViewPageIndex;
@property (nonatomic, readonly) double todayViewPageScrollOffset;
@property (nonatomic) double todayViewVisibilityProgress;
@property (nonatomic) bool userAttemptedToOverscrollDuringCurrentGesture;

+ (id)defaultIconLocation;
+ (id)dockIconLocation;
+ (id)sidebarVisibilityProgressAnimator;

- (void).cxx_destruct;
- (void)_adjustTodayContentForEdgeBounce;
- (double)_adjustedPageControlVerticalOffsetForInternalDock:(double)arg1;
- (void)_animateViewsForPullingToSearch;
- (void)_animateViewsForPullingToSearchWithMetrics:(const struct SBRootFolderViewMetrics { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; double x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg1;
- (void)_animateViewsForScrollingToTodayView;
- (void)_animateViewsForScrollingToTodayViewWithMetrics:(const struct SBRootFolderViewMetrics { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; double x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg1;
- (void)_captureInitialSearchScrollTrackingState;
- (void)_checkSidebarVisibilityProgressAfterScroll;
- (void)_cleanUpAfterOverscrollScrollGestureEnded:(id)arg1;
- (void)_cleanUpAfterScrolling;
- (void)_cleanupAfterExtraScrollGesturesCompleted;
- (void)_cleanupAfterSidebarSlideGestureCompleted:(id)arg1;
- (void)_configureParallax;
- (void)_currentPageIndexDidChangeFromPageIndex:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_iconListFrameForPageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 atIndex:(unsigned long long)arg2;
- (bool)_isSidebarCollapsed;
- (bool)_isSidebarEnabledForCurrentOrientation;
- (bool)_isSidebarEnabledForCurrentPage;
- (bool)_isSidebarEnabledForIconListIndex:(unsigned long long)arg1 orientation:(long long)arg2;
- (bool)_isSidebarEnabledForOrientation:(long long)arg1;
- (bool)_isSidebarEnabledForPageIndex:(long long)arg1;
- (bool)_isSidebarEnabledForPageIndex:(long long)arg1 orientation:(long long)arg2;
- (void)_layoutSubviews;
- (void)_layoutSubviewsForPulldownSearch;
- (void)_layoutSubviewsForSidebarWithMetrics:(const struct SBRootFolderViewMetrics { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; double x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg1;
- (void)_layoutSubviewsForTodayViewWithMetrics:(const struct SBRootFolderViewMetrics { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; double x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg1;
- (unsigned long long)_leadingCustomPageCount;
- (double)_minimumHomeScreenScale;
- (void)_overscrollScrollPanGestureRecognizerDidUpdate:(id)arg1;
- (double)_pageWidth;
- (void)_prepareSidebarViewForOrientationTransition;
- (void)_removeParallax;
- (void)_resetSearchScrollTrackingState;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scaledBoundsForMinimumHomeScreenScale;
- (double)_scrollOffsetForContentAtPageIndex:(long long)arg1;
- (double)_scrollOffsetForPageAtIndex:(long long)arg1 pageWidth:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scrollViewFrameForDockEdge:(unsigned long long)arg1;
- (void)_setParallaxDisabled:(bool)arg1 forReason:(id)arg2;
- (void)_setSidebarViewHidden:(bool)arg1;
- (void)_setupSearchBackdropViewIfNecessary;
- (void)_setupStateDumper;
- (bool)_shouldHideSidebarView;
- (bool)_shouldIgnoreOverscrollOnFirstPageForCurrentOrientation;
- (bool)_shouldIgnoreOverscrollOnFirstPageForOrientation:(long long)arg1;
- (void)_sidebarScrollPanGestureRecognizerDidUpdate:(id)arg1;
- (double)_sidebarVisibilityProgressForPanGestureRecognizer:(id)arg1 presenting:(bool)arg2;
- (double)_spotlightFirstIconRowOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_statusBarInsetsForDockEdge:(unsigned long long)arg1 dockOffscreenPercentage:(double)arg2;
- (void)_updateDockOffscreenFractionWithMetrics:(const struct SBRootFolderViewMetrics { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; double x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg1;
- (void)_updateDockViewZOrdering;
- (void)_updateEditingStateAnimated:(bool)arg1;
- (void)_updateIconListIndexSearchableAndTodayViewsWithLayout:(bool)arg1;
- (void)_updateIconListLegibilitySettings;
- (void)_updateScrollingState:(bool)arg1;
- (void)_updateSidebarViewHidden;
- (void)_willScrollToPageIndex:(long long)arg1 animated:(bool)arg2;
- (id)accessibilityTintColorForDockView:(id)arg1;
- (id)additionalIconListViews;
- (double)additionalScrollWidthToKeepVisibleInOneDirection;
- (bool)allowsAutoscrollToTodayView;
- (bool)allowsFreeScrollingUntilScrollingEnds;
- (id)beginModifyingDockOffscreenFractionForReason:(id)arg1;
- (void)borrowDockView;
- (void)cleanUpAfterTransition;
- (void)clientDidChangeDockOffScreenFraction:(id)arg1;
- (double)currentDockOffscreenFraction;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (unsigned long long)dockEdge;
- (double)dockHeight;
- (id)dockIconLocation;
- (id)dockView;
- (id)doneButton;
- (double)effectiveSidebarVisibilityProgress;
- (double)effectiveStatusBarHeight;
- (void)fadeContentForMinificationFraction:(double)arg1;
- (id)firstListViewIconLocationTransitionHandler;
- (void)folderDidChange;
- (id)folderSettings;
- (void)getMetrics:(struct SBRootFolderViewMetrics { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; double x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg1;
- (void)getMetrics:(struct SBRootFolderViewMetrics { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; double x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg1 dockEdge:(unsigned long long)arg2;
- (bool)hidesOffscreenCustomPageViews;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)iconListViewAtIndex:(unsigned long long)arg1;
- (id)iconListViewAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)iconLocationForListAtIndex:(unsigned long long)arg1;
- (bool)iconScrollView:(id)arg1 shouldSetAutoscrollContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (bool)iconScrollView:(id)arg1 shouldSetContentOffset:(struct CGPoint { double x1; double x2; }*)arg2 animated:(bool)arg3;
- (void)iconScrollViewDidCancelTouchTracking:(id)arg1;
- (unsigned long long)ignoresOverscrollOnFirstPageOrientations;
- (id)initWithConfiguration:(id)arg1;
- (bool)isDockExternal;
- (bool)isDockPinnedForRotation;
- (bool)isDockViewBorrowed;
- (bool)isDockVisible;
- (bool)isModifyingDockOfScreenFraction;
- (bool)isOnSidebarPage;
- (bool)isOnTodayPage;
- (bool)isPageIndexCustomAndRightmost:(long long)arg1;
- (bool)isSearchHidden;
- (bool)isSidebarEffectivelyVisible;
- (double)isSidebarPinned;
- (bool)isSidebarSlideGestureActive;
- (bool)isSidebarVisibilityGestureActive;
- (bool)isTodayViewBouncing;
- (bool)isTodayViewPageHidden;
- (void)layoutDockViewWithMetrics:(const struct SBRootFolderViewMetrics { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; double x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg1;
- (void)layoutIconLists:(double)arg1 animationType:(long long)arg2 forceRelayout:(bool)arg3;
- (void)layoutPageControlWithMetrics:(const struct SBRootFolderViewMetrics { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; double x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg1;
- (void)layoutPortraitHeaderViewWithMetrics:(const struct SBRootFolderViewMetrics { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; double x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg1;
- (void)layoutSearchableViews;
- (void)layoutSearchableViewsWithMetrics:(const struct SBRootFolderViewMetrics { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; double x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg1;
- (double)maxDockHeight;
- (double)minimumHomeScreenScaleForDockView:(id)arg1;
- (void)noteSidebarFinishedAnimating;
- (void)noteSidebarIsAnimating;
- (id)parallaxSettings;
- (id)portraitHeaderView;
- (void)prepareForTransition;
- (void)prepareToTearDown;
- (id)pullDownSearchView;
- (double)pullDownSearchVisibilityProgress;
- (void)removeDockOffscreenFractionClient:(id)arg1;
- (void)resetIconListViews;
- (void)returnDockView;
- (void)returnScalingView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (double)scrollableWidthForVisibleColumnRange;
- (double)scrollingAdjustment;
- (id)searchBackdropView;
- (id)searchGesture;
- (id)searchableTodayWrapperView;
- (void)setAllowsAutoscrollToTodayView:(bool)arg1;
- (void)setAllowsFreeScrollingUntilScrollingEnds:(bool)arg1;
- (void)setContentAlpha:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDockEdge:(unsigned long long)arg1;
- (void)setDockViewBorrowed:(bool)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setFirstListViewIconLocationTransitionHandler:(id)arg1;
- (void)setFolderSettings:(id)arg1;
- (void)setIdleText:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setNeedsLayout;
- (void)setOrientation:(long long)arg1;
- (void)setPullDownSearchVisibilityProgress:(double)arg1;
- (void)setScrollingAdjustment:(double)arg1;
- (void)setSearchGesture:(id)arg1;
- (void)setSearchHidden:(bool)arg1;
- (void)setShiftsPullDownSearchForVisibility:(bool)arg1;
- (void)setShowsDoneButton:(bool)arg1;
- (void)setShowsDoneButton:(bool)arg1 animated:(bool)arg2;
- (void)setSidebarEffectivelyVisible:(bool)arg1;
- (void)setSidebarPinned:(double)arg1;
- (void)setSidebarSlideGestureActive:(bool)arg1;
- (void)setSidebarVisibilityProgress:(double)arg1;
- (void)setSidebarVisibilityProgress:(double)arg1 animator:(id)arg2;
- (void)setSidebarVisibleWhenScrollingBegan:(bool)arg1;
- (void)setTodayViewBouncing:(bool)arg1;
- (void)setTodayViewPageHidden:(bool)arg1;
- (void)setTodayViewVisibilityProgress:(double)arg1;
- (void)setUserAttemptedToOverscrollDuringCurrentGesture:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)shiftsPullDownSearchForVisibility;
- (bool)shouldEndSidebarGestureWithSidebarVisibleWithCurrentProgress:(double)arg1 velocity:(double)arg2;
- (bool)shouldFadeDockOutDuringTransitionToTodayView;
- (bool)shouldFadePageControlOutDuringTransitionToTodayView;
- (bool)shouldPinScrollingToFirstIconPageScrollOffsetForProposedScrollOffset:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldScrollDockDuringTransitionToTodayView;
- (bool)shouldScrollPageControlDuringTransitionToTodayView;
- (bool)showsDoneButton;
- (unsigned long long)sidebarAllowedOrientations;
- (long long)sidebarPageIndex;
- (id)sidebarView;
- (double)sidebarViewPageScrollOffsetUsingPageWidth:(double)arg1;
- (double)sidebarVisibilityProgress;
- (double)sidebarVisibilityProgressForLayout;
- (double)sidebarWidthUsingPageWidth:(double)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })statusBarInsetsForDockEdge:(unsigned long long)arg1;
- (void)tearDownListViews;
- (id)todayView;
- (long long)todayViewPageIndex;
- (double)todayViewPageScrollOffset;
- (double)todayViewPageScrollOffsetUsingPageWidth:(double)arg1;
- (double)todayViewVisibilityProgress;
- (void)updateAccessibilityTintColors;
- (void)updateDockViewOrientation;
- (void)updateIconListIndexAndVisibility:(bool)arg1;
- (void)updateIconListViews;
- (bool)userAttemptedToOverscrollDuringCurrentGesture;
- (bool)wasSidebarVisibleWhenScrollingBegan;
- (void)willMoveToWindow:(id)arg1;

@end
