/* Generated by EzioChiu.
 */

@protocol SBFluidSwitcherScrollProviding <NSObject>

@required

- (struct CGPoint { double x1; double x2; })adjustedOffsetForOffset:(struct CGPoint { double x1; double x2; })arg1 translation:(struct CGPoint { double x1; double x2; })arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3 locationInView:(struct CGPoint { double x1; double x2; })arg4 horizontalVelocity:(inout double*)arg5 verticalVelocity:(inout double*)arg6;
- (double)cardCornerRadiusInSwitcher;
- (bool)cardsNeedBackgroundWallpaperTreatment;
- (double)centerYOffsetWhenPresented;
- (struct CGPoint { double x1; double x2; })contentOffsetForIndex:(unsigned long long)arg1 centered:(bool)arg2;
- (struct CGSize { double x1; double x2; })contentSize;
- (double)decelerationRate;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })fittedContentSize;
- (struct CGSize { double x1; double x2; })interpageSpacingForPaging;
- (bool)interpolatesDuringSwipeToKill;
- (double)minimumTranslationToKillIndex:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })pagingOrigin;
- (void)resetAdjustedScrollingState;
- (struct CGPoint { double x1; double x2; })restingOffsetForScrollOffset:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2;
- (unsigned long long)scrollAxis;
- (<SBFluidSwitcherScrollProvidingDelegate> *)scrollDelegate;
- (bool)scrollViewPagingEnabled;
- (void)setScrollDelegate:(id <SBFluidSwitcherScrollProvidingDelegate>)arg1;
- (double)snapshotScale;
- (double)switcherCardScale;

@end
