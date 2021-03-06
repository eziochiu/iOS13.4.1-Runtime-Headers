/* Generated by EzioChiu.
 */

@protocol SBIconAccessoryView <SBReusableView>

@required

- (struct CGPoint { double x1; double x2; })accessoryCenterForIconBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)configureAnimatedForIcon:(SBIcon *)arg1 infoProvider:(id <SBIconAccessoryInfoProvider>)arg2 animator:(UIViewPropertyAnimator *)arg3;
- (void)configureForIcon:(SBIcon *)arg1 infoProvider:(id <SBIconAccessoryInfoProvider>)arg2;
- (bool)displayingAccessory;
- (void)setAccessoryBrightness:(double)arg1;

@optional

- (<SBIconListLayout> *)listLayout;
- (SBFParallaxSettings *)parallaxSettings;
- (void)setListLayout:(id <SBIconListLayout>)arg1;
- (void)setParallaxSettings:(SBFParallaxSettings *)arg1;

@end
