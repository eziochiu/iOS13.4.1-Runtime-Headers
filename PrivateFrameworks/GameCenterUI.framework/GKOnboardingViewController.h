/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKOnboardingViewController : UIViewController <UIScrollViewDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> {
    NSMutableDictionary * _analyticsPayload;
    UIView * _bubblePlaceholder;
    UIView * _bubblesAnchorView;
    GKBubbleFlowContainerView * _bubblesContainerView;
    UIView * _buttonContainer;
    <GKOnboardingFlowDelegate> * _delegate;
    NSString * _lastPersonalizationVersionDisplayed;
    unsigned long long  _lastPrivacyNoticeVersionDisplayed;
    UILabel * _mainTitle;
    OBBoldTrayButton * _nextButton;
    bool  _presenting;
    UIView * _privacyContainer;
    UIView * _privacyContentView;
    OBPrivacyLinkController * _privacyLink;
    UIScrollView * _scrollView;
    UILabel * _subTitle;
    double  _transitionDuration;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, retain) NSMutableDictionary *analyticsPayload;
@property (nonatomic, retain) UIView *bubblePlaceholder;
@property (nonatomic, retain) UIView *bubblesAnchorView;
@property (nonatomic, retain) GKBubbleFlowContainerView *bubblesContainerView;
@property (nonatomic, retain) UIView *buttonContainer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GKOnboardingFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *lastPersonalizationVersionDisplayed;
@property (nonatomic) unsigned long long lastPrivacyNoticeVersionDisplayed;
@property (nonatomic, retain) UILabel *mainTitle;
@property (nonatomic, retain) OBBoldTrayButton *nextButton;
@property (getter=isPresenting, nonatomic) bool presenting;
@property (nonatomic, retain) UIView *privacyContainer;
@property (nonatomic, retain) UIView *privacyContentView;
@property (nonatomic, retain) OBPrivacyLinkController *privacyLink;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) UILabel *subTitle;
@property (readonly) Class superclass;
@property (nonatomic) double transitionDuration;
@property (nonatomic, retain) UIVisualEffectView *visualEffectView;

- (void).cxx_destruct;
- (void)addPrivacyLink;
- (id)analyticsPayload;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animationEnded:(bool)arg1;
- (id)basicAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
- (id)bubblePlaceholder;
- (id)bubblesAnchorView;
- (id)bubblesContainerView;
- (id)buttonContainer;
- (void)constrainTextInView:(id)arg1 toFontSize:(double)arg2;
- (id)delegate;
- (bool)didDisplayPrivacyNotice;
- (bool)isPresenting;
- (id)lastPersonalizationVersionDisplayed;
- (unsigned long long)lastPrivacyNoticeVersionDisplayed;
- (id)mainTitle;
- (id)nextButton;
- (void)nextPressed:(id)arg1;
- (void)presentPersonalizationScreen;
- (id)privacyContainer;
- (id)privacyContentView;
- (id)privacyLink;
- (void)removeConstraintsForView:(id)arg1;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAnalyticsPayload:(id)arg1;
- (void)setBubblePlaceholder:(id)arg1;
- (void)setBubblesAnchorView:(id)arg1;
- (void)setBubblesContainerView:(id)arg1;
- (void)setButtonContainer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastPersonalizationVersionDisplayed:(id)arg1;
- (void)setLastPrivacyNoticeVersionDisplayed:(unsigned long long)arg1;
- (void)setMainTitle:(id)arg1;
- (void)setNextButton:(id)arg1;
- (void)setPresenting:(bool)arg1;
- (void)setPrivacyContainer:(id)arg1;
- (void)setPrivacyContentView:(id)arg1;
- (void)setPrivacyLink:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setSubTitle:(id)arg1;
- (void)setTransitionDuration:(double)arg1;
- (void)setVisualEffectView:(id)arg1;
- (bool)shouldPresentPersonalizationScreen;
- (void)showSignOutAlert;
- (void)signOutPressed:(id)arg1;
- (id)subTitle;
- (double)transitionDuration;
- (double)transitionDuration:(id)arg1;
- (void)updateBubbleRectsWithScale:(double)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)visualEffectView;

@end
