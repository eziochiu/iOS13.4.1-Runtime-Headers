/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFDrawerPaneContainer : UIViewController <WFDrawerGestureCoordinatorDelegate> {
    WFDrawerAnimationManager * _animationManager;
    UIView * _backgroundDimmingView;
    <WFDrawerPaneContainerDelegate> * _delegate;
    unsigned long long  _dimming;
    WFDrawerDismissalHelper * _dismissalHelper;
    UIViewController<WFDrawerPane> * _drawerPane;
    UIView * _foregroundDimmingView;
    WFDrawerGestureCoordinator * _gestureCoordinator;
    bool  _inactive;
    bool  _userInteractionEnabled;
    unsigned long long  _visibility;
}

@property (nonatomic, readonly) WFDrawerAnimationManager *animationManager;
@property (nonatomic, readonly) UIView *backgroundDimmingView;
@property (nonatomic, readonly) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFDrawerPaneContainerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long dimming;
@property (nonatomic, readonly) WFDrawerDismissalHelper *dismissalHelper;
@property (nonatomic, readonly) double drawerHeight;
@property (nonatomic, readonly) UIViewController<WFDrawerPane> *drawerPane;
@property (nonatomic, readonly) UIView *drawerView;
@property (nonatomic, readonly) UIView *foregroundDimmingView;
@property (nonatomic, readonly) WFDrawerGestureCoordinator *gestureCoordinator;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } grabberAreaBounds;
@property (readonly) unsigned long long hash;
@property (getter=isInactive, nonatomic) bool inactive;
@property (nonatomic, readonly) double maximumDrawerHeight;
@property (nonatomic, readonly) double minimumDrawerHeight;
@property (readonly) Class superclass;
@property (nonatomic) bool userInteractionEnabled;
@property (nonatomic, readonly) unsigned long long visibility;

- (void).cxx_destruct;
- (id)animationManager;
- (id)backgroundDimmingView;
- (unsigned long long)closestVisibilityForHeight:(double)arg1;
- (unsigned long long)closestVisibilityWithVelocity:(double)arg1 acceleration:(double)arg2 previousVisibility:(unsigned long long)arg3;
- (id)containerView;
- (id)delegate;
- (unsigned long long)dimming;
- (id)dismissalHelper;
- (double)drawerHeight;
- (id)drawerPane;
- (id)drawerView;
- (id)foregroundDimmingView;
- (id)gestureCoordinator;
- (void)gestureCoordinator:(id)arg1 didContinueInteractionWithDrawerHeight:(double)arg2;
- (void)gestureCoordinator:(id)arg1 didFinishInteractionWithVelocity:(double)arg2 acceleration:(double)arg3 animation:(id)arg4;
- (void)gestureCoordinatorDidBeginInteraction:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })grabberAreaBounds;
- (unsigned long long)growingVisibilityForHeight:(double)arg1;
- (double)heightForVisibility:(unsigned long long)arg1;
- (id)initWithDrawerPane:(id)arg1;
- (void)installForegroundDimmingViewIfNeeded;
- (bool)isInactive;
- (void)layoutDrawerViewController;
- (void)layoutDrawerViewControllerForDrawerHeight:(double)arg1;
- (void)loadView;
- (double)maximumDrawerHeight;
- (double)minimumDrawerHeight;
- (void)removeForegroundDimmingViewIfUnused;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setDelegate:(id)arg1;
- (void)setInactive:(bool)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setupDimmingViewsForAnimationToDimming:(unsigned long long)arg1;
- (unsigned long long)shrinkingVisibilityForHeight:(double)arg1;
- (void)transitionToVisibility:(unsigned long long)arg1 withDimming:(unsigned long long)arg2 animated:(bool)arg3 interruptible:(bool)arg4 completion:(id /* block */)arg5;
- (void)transitionWithPushedAnimationToVisibility:(unsigned long long)arg1 withDimming:(unsigned long long)arg2 animated:(bool)arg3 interruptible:(bool)arg4 completion:(id /* block */)arg5;
- (bool)userInteractionEnabled;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)visibility;

@end