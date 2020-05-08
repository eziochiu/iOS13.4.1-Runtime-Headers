/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARCoachingOverlayView : UIView <ARInternalSessionObserver> {
    bool  _activatesAutomatically;
    UIView * _background;
    ARCoachingAnimationView * _coachingAnimationView;
    long long  _coachingMessageType;
    long long  _coachingRequirements;
    ARCoachingSessionCache * _coachingSessionCache;
    UILabel * _coachingText;
    long long  _currentConstraintDeviceOrientation;
    <ARCoachingOverlayViewDelegate> * _delegate;
    CADisplayLink * _displayLink;
    long long  _goal;
    ARCoachingHeuristicCollection * _heuristics;
    bool  _isSessionRelocalizingMap;
    double  _lastCoachingUpdateTime;
    ARCoachingMotionTracker * _motionTracker;
    long long  _nextCoachingAnimationState;
    long long  _nextCoachingMessageType;
    long long  _requestedGoal;
    ARCoachingPillButton * _resetButton;
    NSLayoutConstraint * _resetButtonBottomLayoutConstraint;
    float  _resetButtonLandscapeVerticalOffset;
    float  _resetButtonPortraitVerticalOffset;
    ARSession * _session;
    NSObject<ARSessionProviding> * _sessionProvider;
    ARCoachingState * _state;
    bool  _trackingStateNormalOverride;
    long long  _trackingStateReasonOverride;
    NSMutableArray * _uiAnimationQueue;
    bool  _uiAnimationQueueRunning;
    bool  _wasEverActivated;
}

@property (nonatomic) bool activatesAutomatically;
@property (nonatomic, readonly) ARCoachingSessionCache *coachingSessionCache;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARCoachingOverlayViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long goal;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) bool isRelocalizing;
@property (nonatomic, readonly) bool isUIAnimating;
@property (nonatomic, readonly) <ARPrivateCoachingOverlayViewDelegate> *privateDelegate;
@property (nonatomic) float resetButtonLandscapeVerticalOffset;
@property (nonatomic) float resetButtonPortraitVerticalOffset;
@property (nonatomic, retain) ARSession *session;
@property (nonatomic) NSObject<ARSessionProviding> *sessionProvider;
@property (readonly) Class superclass;
@property (nonatomic) bool trackingStateNormalOverride;
@property (nonatomic) long long trackingStateReasonOverride;
@property (nonatomic, readonly) bool wasEverActivated;

- (void).cxx_destruct;
- (bool)activatesAutomatically;
- (void)buttonPress:(id)arg1;
- (double)calcFadeDurationIn:(bool)arg1 withButton:(bool)arg2;
- (bool)checkActivationHeuristics;
- (bool)checkDeactivationHeuristics;
- (id)coachingSessionCache;
- (void)createConstraintsForDeviceOrientation:(long long)arg1;
- (void)crossFadeCoachingMessage:(long long)arg1;
- (long long)currentDeviceOrientation;
- (void)dealloc;
- (id)delegate;
- (void)displayLinkUpdate;
- (void)doStateAction:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)fadeInWithButton:(bool)arg1;
- (void)fadeOut;
- (void)finishAllUIAnimations;
- (void)generateHeuristicsForActive:(bool)arg1;
- (long long)goal;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isActive;
- (bool)isRelocalizing;
- (bool)isUIAnimating;
- (void)killUIAnimations;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)orientationChanged;
- (id)privateDelegate;
- (float)resetButtonLandscapeVerticalOffset;
- (float)resetButtonPortraitVerticalOffset;
- (void)resolveCoachingMessage;
- (void)restartIfActive;
- (id)session;
- (void)session:(id)arg1 didAddAnchors:(id)arg2;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didRemoveAnchors:(id)arg2;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)session:(id)arg1 willRunWithConfiguration:(id)arg2;
- (id)sessionProvider;
- (void)setActivatesAutomatically:(bool)arg1;
- (void)setActive:(bool)arg1 animated:(bool)arg2;
- (void)setCoachingMessage:(long long)arg1 animationState:(long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)setGoal:(long long)arg1;
- (void)setResetButtonLandscapeVerticalOffset:(float)arg1;
- (void)setResetButtonPortraitVerticalOffset:(float)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionProvider:(id)arg1;
- (void)setTrackingStateNormalOverride:(bool)arg1;
- (void)setTrackingStateReasonOverride:(long long)arg1;
- (void)setupView;
- (void)startup;
- (void)swapState:(id)arg1;
- (void)teardown;
- (bool)trackingStateNormalOverride;
- (long long)trackingStateReasonOverride;
- (void)updateCoachingRequirements;
- (void)updateConstraints;
- (void)updateUIAnimations;
- (void)updateWithFrame:(id)arg1;
- (bool)wasEverActivated;

@end