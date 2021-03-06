/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBBannerController : NSObject <SBAssistantObserver, SBBannerContainerViewControllerDelegate, SBBulletinBusyClient, SBBulletinWindowClient, SBUIBannerTargetImplementation> {
    id /* block */  _assistantDismissCompletionBlock;
    bool  _assistantIsFullyVisible;
    id /* block */  _assistantRevealCompletionBlock;
    NSMapTable * _bannerContextToViewControllerCache;
    SBBannerContainerViewController * _bannerViewController;
    <BSInvalidatable> * _deferOrientationUpdatesAssertion;
    bool  _dismissalOverdue;
    bool  _dismissingBannerForAssistantDismiss;
    bool  _dismissingBannerForAssistantReveal;
    bool  _enableDelayActive;
    bool  _locked;
    id /* block */  _overdueCompletionBlock;
    long long  _overdueDismissReason;
    NSMutableArray * _pendingBannerContextsNeedingRepop;
    bool  _replaceDelayIsActive;
    bool  _showingStickyDurationBanner;
    bool  _soundIsPlaying;
    NSHashTable * _sources;
    bool  _suppressingBanners;
    NSHashTable * _suppressionAssertions;
    unsigned long long  _transitionCount;
}

@property (nonatomic, readonly) void*bannerTargetIdentifier;
@property (nonatomic, readonly) long long bannerTargetIdiom;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_sharedInstanceCreateIfNecessary:(bool)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;

- (void).cxx_destruct;
- (void)_acquireDeferOrientationUpdatesAssertionIfNeeded;
- (id)_bannerContainerView;
- (id)_bannerContext;
- (id)_bannerItem;
- (bool)_canDequeueIgnoringStickyBanner:(bool)arg1;
- (void)_cancelBannerDismissTimers;
- (void)_dequeueAfterDelayIfPossible;
- (bool)_dequeueBannerIfPossible;
- (bool)_dequeueBannerIfPossibleIgnoringStickyBanner:(bool)arg1 existingDismissReason:(long long)arg2;
- (id)_dequeueNextBannerContext;
- (void)_dismissIntervalElapsed;
- (void)_dismissOverdueOrDequeueIfPossible;
- (void)_disposeOfDeferOrientationUpdatesAssertion;
- (void)_fireCompletionBlockForBannerAnimationForAssistantDismissIfNecessary;
- (void)_fireCompletionBlockForBannerAnimationForAssistantRevealIfNecessary;
- (bool)_isItemShowable:(id)arg1 fromSource:(id)arg2;
- (void)_lockStateChanged:(id)arg1;
- (id)_newBannerContentViewController;
- (id)_pendingBannerContextForSourceNeedingRepop:(id)arg1;
- (void)_performHideTransitionWithContext:(id)arg1 animated:(bool)arg2 reason:(long long)arg3 completion:(id /* block */)arg4;
- (void)_performReplaceTransitionWithContext:(id)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (void)_performRevealTransitionWithContext:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_performTransition:(long long)arg1 withAnimation:(bool)arg2 context:(id)arg3 reason:(long long)arg4 completion:(id /* block */)arg5;
- (void)_presentBannerForContext:(id)arg1 reason:(long long)arg2;
- (void)_removePendingContextsForSourceNeedingRepop:(id)arg1;
- (void)_replaceIntervalElapsed;
- (void)_setBannerSticky:(bool)arg1;
- (void)_setBannerViewControllerForContext:(id)arg1;
- (void)_setOverdueCompletionBlock:(id /* block */)arg1;
- (void)_setupBannerDismissTimers;
- (bool)_shouldPendStickyBannerContext:(id)arg1 withReason:(long long)arg2;
- (void)_soundDidFinishPlayingForBannerContext:(id)arg1;
- (void)_stopCurrentSound;
- (void)_tryToDismissWithAnimation:(bool)arg1 reason:(long long)arg2 forceEvenIfBusy:(bool)arg3 completion:(id /* block */)arg4;
- (void)_updateBannerSuppressionState;
- (void)_updateBannerSuppressionStateAndDequeueIfPossible:(bool)arg1 withDelay:(bool)arg2;
- (id)_viewControllerForPresentation;
- (id)acquireBannerSuppressionAssertionForReason:(id)arg1;
- (void)assistantDidAppear:(id)arg1;
- (void)assistantDidDisappear:(id)arg1;
- (void)assistantWillAppear:(id)arg1;
- (void)assistantWillDisappear:(id)arg1;
- (void*)bannerTargetIdentifier;
- (long long)bannerTargetIdiom;
- (void)bannerViewControllerDidDismissAction:(id)arg1;
- (void)bannerViewControllerDidSelectAction:(id)arg1;
- (void)bulletinWindowStoppedBeingBusy;
- (void)cacheBannerForContext:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)currentBannerContextForSource:(id)arg1;
- (void)dealloc;
- (void)dismissBannerWithAnimation:(bool)arg1 reason:(long long)arg2;
- (void)dismissBannerWithAnimation:(bool)arg1 reason:(long long)arg2 forceEvenIfBusy:(bool)arg3;
- (void)dismissBannerWithAnimation:(bool)arg1 reason:(long long)arg2 forceEvenIfBusy:(bool)arg3 completion:(id /* block */)arg4;
- (void)dismissCurrentBannerContextForSource:(id)arg1;
- (id)init;
- (bool)isShowingBanner;
- (bool)isShowingModalBanner;
- (bool)isShowingModalBannerWithKeyboard;
- (bool)isTransitioningBanner;
- (void)modallyPresentBannerWithContext:(id)arg1;
- (void)registerSource:(id)arg1;
- (void)removeCachedBannerForContext:(id)arg1;
- (void)signalSource:(id)arg1;
- (void)unregisterSource:(id)arg1;

@end
