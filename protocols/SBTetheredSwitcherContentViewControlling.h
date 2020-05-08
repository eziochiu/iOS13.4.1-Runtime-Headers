/* Generated by EzioChiu.
 */

@protocol SBTetheredSwitcherContentViewControlling <NSObject>

@required

- (void)beginTetheringWithViewController:(id <SBTetheredSwitcherContentViewControlling>)arg1 asTetheree:(bool)arg2;
- (UIPanGestureRecognizer *)borrowScrollViewPanGestureRecognizer;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)dispatchAndHandleTetheredRemovalEvent:(SBTetheredRemovalSwitcherModifierEvent *)arg1;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreen;
- (void)endTetheringWithViewController:(id <SBTetheredSwitcherContentViewControlling>)arg1;
- (bool)hasItemContainerAtLocationInContentView:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isScrolling;
- (unsigned long long)numberOfAppLayouts;
- (void)prepareToReopenClosedWindowsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, void*
- (void)returnScrollViewPanGestureRecognizer:(UIPanGestureRecognizer *)arg1;
- (void)setTetheredContentView:(SBFluidSwitcherContentView *)arg1;
- (void)setTetheredScrollViewContentOffset:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: struct CGPoint { double x1; double x2; }, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (<SBTetheredSwitcherContentViewControlling> *)tetheredViewController;
- (void)tetheredViewController:(id <SBTetheredSwitcherContentViewControlling>)arg1 didPerformTransitionWithMode:(long long)arg2;

@end