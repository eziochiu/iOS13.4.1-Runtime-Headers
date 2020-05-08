/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

@interface CSTodayPageViewController : CSPageViewController <CSPageViewControllerProtocol, CSTodayViewControllerDelegate, SBUICoronaAnimationControllerParticipant, SBUISpotlightInitiating> {
    CSTodayContentViewController * _contentViewController;
    CSLayoutStrategy * _layoutStrategy;
}

@property (nonatomic, readonly, copy) CSAppearance *activeAppearance;
@property (nonatomic, readonly, copy) CSBehavior *activeBehavior;
@property (nonatomic, readonly, copy) NSString *appearanceIdentifier;
@property (nonatomic, readonly) bool authenticated;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) long long backgroundStyle;
@property (nonatomic, readonly, copy) NSSet *components;
@property (nonatomic, retain) CSTodayContentViewController *contentViewController;
@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (nonatomic) <CSCoverSheetViewControllerProtocol> *coverSheetViewController;
@property (nonatomic, readonly) double customIdleExpirationTimeout;
@property (nonatomic, readonly) double customIdleWarningTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) CSPresentation *externalPresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long idleTimerDuration;
@property (nonatomic, readonly) long long idleTimerMode;
@property (nonatomic, readonly) long long idleWarnMode;
@property (nonatomic, retain) CSLayoutStrategy *layoutStrategy;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) long long notificationBehavior;
@property (nonatomic, readonly, copy) NSString *pageRole;
@property (nonatomic, readonly) long long participantState;
@property (nonatomic, readonly) long long presentationAltitude;
@property (nonatomic, readonly) <UICoordinateSpace> *presentationCoordinateSpace;
@property (nonatomic, readonly) long long presentationPriority;
@property (nonatomic, readonly, copy) NSArray *presentationRegions;
@property (nonatomic, readonly) long long presentationStyle;
@property (nonatomic, readonly) long long presentationTransition;
@property (nonatomic, readonly) long long presentationType;
@property (nonatomic) <CSCoverSheetViewPresenting> *presenter;
@property (nonatomic, readonly) long long proximityDetectionMode;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (nonatomic, readonly) long long scrollingStrategy;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CSTodayViewController *todayViewController;
@property (nonatomic, retain) SBViewControllerTransitionContext *transitionContext;
@property (getter=isTransitioning, nonatomic) bool transitioning;

+ (bool)isAvailableForConfiguration;
+ (unsigned long long)requiredCapabilities;

- (void).cxx_destruct;
- (bool)_isPortrait;
- (bool)_listBelowDateTime;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)cleanupAfterSpotlightDismissal;
- (id)contentViewController;
- (void)coronaAnimationController:(id)arg1 willAnimateCoronaTransitionWithAnimator:(id)arg2;
- (void)coverSheetTodayViewController:(id)arg1 contentViewsDidChange:(id)arg2;
- (void)coverSheetTodayViewControllerDidFocusSearchView:(id)arg1;
- (double)customListWidth;
- (double)dateTimeInsetX;
- (unsigned long long)dateTimeLayout;
- (id)displayLayoutElementIdentifier;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)layoutStrategy;
- (double)listInsetX;
- (unsigned long long)listLayout;
- (unsigned long long)listWidthStrategy;
- (double)minimumDateToListSpacing;
- (id)pageRole;
- (void)resetForSpotlightDismissalAnimated:(bool)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setLayoutStrategy:(id)arg1;
- (void)setTransitionContext:(id)arg1;
- (id)spotlightHeaderAcquiringViewController;
- (id)todayViewController;
- (id)transitionContext;
- (void)updateTransitionWhileRubberBandingInProgress:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end