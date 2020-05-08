/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUtilityFlatComplicationView : NTKUtilityComplicationView <CLKMonochromeComplicationView, CLKMonochromeFilterProvider> {
    NTKColoringLabel * _activeLabel;
    UIImageView * _curvedHighlightView;
    NTKCurvedColoringLabel * _curvedLabel;
    <NTKUtilityFlatComplicationViewDelegate> * _delegate;
    <CLKMonochromeFilterProvider> * _filterProvider;
    UIView<NTKComplicationImageView> * _imageView;
    NTKColoringLabel * _label;
    double  _textWidthInRadians;
}

@property (nonatomic) double circleRadius;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKUtilityFlatComplicationViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CLKMonochromeFilterProvider> *filterProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maxAngularWidth;
@property (readonly) Class superclass;
@property (nonatomic) double textWidthInRadians;

+ (void)circleRadius:(double*)arg1 centerAngle:(double*)arg2 maxAngularWidth:(double*)arg3 interior:(bool*)arg4 forPlacement:(unsigned long long)arg5 forDevice:(id)arg6;
+ (bool)handlesComplicationTemplate:(id)arg1;

- (void).cxx_destruct;
- (id)_backgroundPlatterImage;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateColoringViewsWithBlock:(id /* block */)arg1;
- (bool)_shouldLayoutWithImageView;
- (void)_updateContentForMaxSizeChange;
- (void)_updateForTemplateChange;
- (void)_updateHighlightViewCornerRadius;
- (void)_updateLabelMaxWidth;
- (double)_widthThatFits;
- (double)circleRadius;
- (id)colorForView:(id)arg1 accented:(bool)arg2;
- (id)delegate;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)filterProvider;
- (unsigned long long)imagePlacement;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)maxAngularWidth;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setCanUseCurvedText:(bool)arg1;
- (void)setCircleRadius:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFilterProvider:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setMaxAngularWidth:(double)arg1;
- (void)setPlacement:(unsigned long long)arg1;
- (void)setShouldUseBackgroundPlatter:(bool)arg1;
- (void)setTextWidthInRadians:(double)arg1;
- (void)setUseBlockyHighlightCorners:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)textWidthInRadians;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)updateTextWidthIfNeeded;

@end