/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInputWindowControllerHostingItem : NSObject <UIInputViewSetPlacementDelegate, UIInputViewSetPlacementOwner, UISplitKeyboardSource, _UIRemoteKeyboardDistributedViewSource, _UIRemoteKeyboardViewSource> {
    NSMutableDictionary * _accessoryBackdropViewEdgeConstraints;
    NSMutableDictionary * _accessoryViewEdgeConstraints;
    NSLayoutConstraint * _accessoryViewHeightConstraint;
    <UIInputViewSetPlacementApplicator> * _applicator;
    NSMutableDictionary * _assistantBackdropViewEdgeConstraints;
    NSMutableDictionary * _assistantViewEdgeConstraints;
    NSLayoutConstraint * _assistantViewHeightConstraint;
    double  _backdropHeightDelta;
    UIInputViewSetPlacement * _cachedPlacement;
    UIScrollToDismissSupport * _cachedScrollDismissController;
    UISplitKeyboardSupport * _cachedSplitKeyboardController;
    UIInputWindowControllerHosting * _container;
    <_UIRemoteKeyboardControllerDelegate> * _controllerDelegate;
    UISystemKeyboardDockController * _dockViewController;
    NSLayoutConstraint * _emptyHeightConstraint;
    UIView * _floatingKeyboardMaskView;
    UIInputSetHostView * _hostView;
    UIKBInputBackdropView * _inputAccessoryBackdropView;
    UIKBInputBackdropView * _inputAssistantBackdropView;
    UIView * _inputBackdropBackgroundView;
    NSMutableDictionary * _inputBackdropBackgroundViewEdgeConstraints;
    UIKBInputBackdropView * _inputBackdropView;
    NSMutableDictionary * _inputBackdropViewEdgeConstraints;
    NSMutableDictionary * _inputDockViewEdgeConstraints;
    NSMutableDictionary * _inputViewEdgeConstraints;
    NSLayoutConstraint * _inputViewHeightConstraint;
    id /* block */  _interactiveTransitionCleanupBlock;
    bool  _scrolling;
    bool  _supportsDockViewController;
}

@property (setter=setInputAccessoryBackdropView:, nonatomic, retain) UIKBInputBackdropView *_inputAccessoryBackdropView;
@property (setter=setInputAssistantBackdropView:, nonatomic, retain) UIKBInputBackdropView *_inputAssistantBackdropView;
@property (setter=setInputBackdropView:, nonatomic, retain) UIKBInputBackdropView *_inputBackdropView;
@property (nonatomic, readonly, retain) UIViewController *_inputViewController;
@property (nonatomic, retain) <UIInputViewSetPlacementApplicator> *applicator;
@property (nonatomic, readonly) UIInputWindowControllerHosting *container;
@property (readonly, retain) UIView *containerView;
@property (nonatomic, retain) <_UIRemoteKeyboardControllerDelegate> *controllerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIView *dockView;
@property (nonatomic) bool dontDismissReachability;
@property (nonatomic, retain) UIView *floatingKeyboardMaskView;
@property (readonly) unsigned long long hash;
@property bool hideInputViewBackdrops;
@property (nonatomic, retain) UIInputSetHostView *hostView;
@property (nonatomic) UIView *inputAccessoryView;
@property (nonatomic) UIView *inputAssistantView;
@property (nonatomic) UIView *inputView;
@property (readonly) long long inputViewBackdropStyle;
@property (readonly, retain) UIInputViewSet *inputViewSet;
@property (nonatomic, readonly) bool isChangingPlacement;
@property (nonatomic, readonly) bool isOnScreenRotating;
@property (readonly) bool keyboardController;
@property (nonatomic, readonly) UIInputWindowController *owner;
@property (readonly, retain) UIInputViewSetPlacement *placement;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } positionConstraintConstant;
@property (nonatomic, readonly) bool scrollKeyboardActive;
@property (nonatomic, readonly, retain) UISplitKeyboardSupport *splitKeyboardController;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) UIView *view;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_aligningInsetsForChildInputViewController:(id)arg1 includeSceneBounds:(bool)arg2;
- (void)_fillInNotificationInfo:(id)arg1 forDismissMode:(unsigned long long)arg2;
- (id)_inputAccessoryBackdropView;
- (id)_inputAssistantBackdropView;
- (id)_inputBackdropView;
- (id)_inputViewController;
- (bool)_isForDragToDismiss;
- (bool)_isForSelf:(id)arg1;
- (bool)_isForSplitKeyboard;
- (bool)_shouldShowInputDockView;
- (void)_updateBackdropViews;
- (id)_updateOrCreateConstraintInDict:(id)arg1 key:(id)arg2 fromView:(id)arg3 toView:(id)arg4 tracker:(id)arg5 creator:(id /* block */)arg6;
- (id)applicator;
- (void)checkPlaceholdersForRemoteKeyboards;
- (void)clearInputAccessoryViewEdgeConstraints;
- (void)clearInputAssistantViewEdgeConstraints;
- (void)clearInputViewEdgeConstraints;
- (void)clearInteractiveTransitionStateIfNecessary;
- (void)completeTransition:(id)arg1 withInfo:(id)arg2;
- (void)configureDockViewController:(bool)arg1;
- (void)configureScrollDismissController:(bool)arg1;
- (void)configureSplitKeyboardController:(bool)arg1;
- (id)constructNotificationInfoForScrollWithMode:(unsigned long long)arg1;
- (id)container;
- (id)containerView;
- (id)controllerDelegate;
- (void)dealloc;
- (void)didFinishTranslation;
- (void)didFinishTranslationFromPlacement:(id)arg1 to:(id)arg2;
- (void)disableViewSizingConstraints:(unsigned long long)arg1 forNewView:(id)arg2;
- (id)dockView;
- (bool)dontDismissReachability;
- (void)enumerateBoundingRects:(id /* block */)arg1;
- (void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2;
- (void)finishScrollViewTransition;
- (void)finishSplitTransition;
- (void)finishSplitTransition:(bool)arg1;
- (id)floatingKeyboardMaskView;
- (bool)hideInputViewBackdrops;
- (id)hostView;
- (id)initWithContainer:(id)arg1;
- (void)initializeTranslateGestureRecognizerIfNecessary;
- (id)inputAccessoryView;
- (id)inputAccessoryViewController;
- (id)inputAssistantView;
- (id)inputAssistantViewController;
- (id)inputView;
- (long long)inputViewBackdropStyle;
- (id)inputViewController;
- (id)inputViewSet;
- (bool)isChangingPlacement;
- (bool)isOnScreenRotating;
- (bool)keyboardController;
- (id)owner;
- (id)placement;
- (void)placementNeedsUpdate:(id)arg1;
- (struct CGPoint { double x1; double x2; })positionConstraintConstant;
- (void)prepareForSplitTransition;
- (void)prepareTranslationFromPlacement:(id)arg1 to:(id)arg2;
- (void)rebuildConstraints:(id)arg1 forView:(id)arg2 toMatchView:(id)arg3 tracker:(id)arg4;
- (void)refreshApplicator;
- (void)resetBackdropHeight;
- (void)resetPlacement;
- (void)resetVerticalConstraint;
- (bool)scrollKeyboardActive;
- (void)setAccessoryViewVisible:(bool)arg1 delay:(double)arg2;
- (void)setApplicator:(id)arg1;
- (void)setControllerDelegate:(id)arg1;
- (void)setDontDismissReachability:(bool)arg1;
- (void)setFloatingKeyboardMaskView:(id)arg1;
- (void)setHideInputViewBackdrops:(bool)arg1;
- (void)setHostView:(id)arg1;
- (void)setInputAccessoryBackdropView:(id)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputAssistantBackdropView:(id)arg1;
- (void)setInputAssistantView:(id)arg1;
- (void)setInputBackdropView:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setInterfaceAutorotationDisabled:(bool)arg1;
- (void)setPlacement;
- (void)setPlacement:(id)arg1;
- (void)setPlacement:(id)arg1 quietly:(bool)arg2 animated:(bool)arg3 generateSplitNotification:(bool)arg4;
- (void)someViewDidLayoutSubviews;
- (id)splitKeyboardController;
- (void)startTransition:(id)arg1 withInfo:(id)arg2;
- (void)transitionDidFinish:(bool)arg1;
- (void)updateConstraintInsets;
- (void)updateEmptyHeightConstraint;
- (void)updateForKeyplaneChangeWithContext:(id)arg1;
- (void)updateInputAccessoryBackdropView;
- (void)updateInputAssistantBackdropView;
- (void)updateInputBackdropView;
- (void)updateInputBackdropViewVisibility;
- (void)updateKeyboardDockViewVisibility;
- (void)updateProgress:(double)arg1 startHeight:(double)arg2 endHeight:(double)arg3;
- (void)updateSupportsDockViewController;
- (void)updateTransition:(id)arg1 withInfo:(id)arg2;
- (void)updateViewConstraints;
- (void)updateViewSizingConstraints;
- (void)updateViewSizingConstraints:(id)arg1;
- (void)updateVisibilityConstraintsForPlacement:(id)arg1;
- (id)view;
- (id)viewMatchingConstraintForAttribute:(long long)arg1 primaryView:(id)arg2 secondaryView:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleFrame;
- (void)willBeginTranslation;
- (void)willBeginTranslationFromPlacement:(id)arg1 to:(id)arg2;

@end