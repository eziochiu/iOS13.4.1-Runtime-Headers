/* Generated by EzioChiu.
 */

@protocol SBFloatingApplicationLiveContentOverlayView <SBSwitcherLiveContentOverlay>

@required

- (void)configureWithWorkspaceEntity:(SBWorkspaceEntity *)arg1 referenceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 interfaceOrientation:(long long)arg3;
- (UIViewController<SBLayoutStateTransitionObserver> *)contentViewController;
- (void)invalidate;
- (void)setLiveContentRasterizationDisabled:(bool)arg1;

@end