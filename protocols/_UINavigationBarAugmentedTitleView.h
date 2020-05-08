/* Generated by EzioChiu.
 */

@protocol _UINavigationBarAugmentedTitleView <NSObject>

@required

- (void)_contentDidChange;
- (bool)_hideNavigationBarBackButton;
- (bool)_hideNavigationBarLeadingBarButtons;
- (bool)_hideNavigationBarStandardTitle;
- (bool)_hideNavigationBarTrailingBarButtons;
- (double)_navigationBarBackButtonAlpha;
- (double)_navigationBarBackButtonMaximumWidth;
- (double)_navigationBarContentHeight;
- (double)_navigationBarLeadingBarButtonsAlpha;
- (double)_navigationBarTrailingBarButtonsAlpha;
- (void)_navigationBarTraitCollectionDidChangeTo:(UITraitCollection *)arg1 from:(UITraitCollection *)arg2;
- (void)_navigationBarTransitionCompleted:(long long)arg1 willBeDisplayed:(bool)arg2;
- (void)_navigationBarTransitionWillBegin:(long long)arg1 willBeDisplayed:(bool)arg2;
- (void)_performNavigationBarTransition:(long long)arg1 willBeDisplayed:(bool)arg2;
- (long long)_preferredAlignment;
- (long long)_preferredContentSizeForSize:(long long)arg1;
- (void)_setDataSource:(id <_UINavigationBarTitleViewDataSource>)arg1 navigationItem:(UINavigationItem *)arg2 titleLocation:(long long)arg3;
- (bool)_underlayNavigationBarContent;
- (bool)_wantsTwoPartTransition;

@end