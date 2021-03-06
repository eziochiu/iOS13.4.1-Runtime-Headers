/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBCoverSheetBlurView : UIView <SBWallpaperObserver> {
    id /* block */  _alphaAdjustment;
    double  _blurRadius;
    UIView * _reduceTransparencyView;
    id /* block */  _scaleAdjustment;
    long long  _variantToTrack;
    double  _weighting;
}

@property (nonatomic, copy) id /* block */ alphaAdjustment;
@property (nonatomic) double blurRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *reduceTransparencyView;
@property (nonatomic, copy) id /* block */ scaleAdjustment;
@property (readonly) Class superclass;
@property (nonatomic) long long variantToTrack;
@property (nonatomic) double weighting;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)_averageWallpaperColor;
- (void)_configureForCurrentReduceTransparencySetting;
- (void)_createFilters;
- (void)_createReduceTransparencyView;
- (void)_reduceTransparencyEnabledStateDidChange:(id)arg1;
- (void)_removeFilters;
- (void)_removeReduceTransparencyView;
- (void)_updateForBlurRadius:(double)arg1 weighting:(double)arg2 forPresentationValue:(bool)arg3;
- (id /* block */)alphaAdjustment;
- (id)backdropLayer;
- (double)blurRadius;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scaleAdjustment:(id /* block */)arg2 alphaAdjustment:(id /* block */)arg3;
- (void)layoutSubviews;
- (id)reduceTransparencyView;
- (id /* block */)scaleAdjustment;
- (void)setAlphaAdjustment:(id /* block */)arg1;
- (void)setBlurRadius:(double)arg1;
- (void)setReduceTransparencyView:(id)arg1;
- (void)setScaleAdjustment:(id /* block */)arg1;
- (void)setVariantToTrack:(long long)arg1;
- (void)setWeighting:(double)arg1;
- (void)setWeighting:(double)arg1 forPresentationValue:(bool)arg2;
- (long long)variantToTrack;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (double)weighting;

@end
