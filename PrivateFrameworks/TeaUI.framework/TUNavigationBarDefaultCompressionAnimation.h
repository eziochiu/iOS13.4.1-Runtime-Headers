/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
 */

@interface TUNavigationBarDefaultCompressionAnimation : NSObject <TUBarCompressionAnimating> {
    bool  _compressTitleView;
    bool  _hideTitleOnTop;
    UINavigationBar * _navigationBar;
    TUAnimationFloatFunction * _opacityFunction;
    TUAnimationFloatFunction * _scaleFunction;
    UIView * _titleView;
    TUAnimationFloatFunction * _translateFunction;
    bool  shouldCompressAtTop;
    double  topOffset;
}

@property (nonatomic) bool compressTitleView;
@property (nonatomic) bool hideTitleOnTop;
@property (nonatomic, readonly) UINavigationBar *navigationBar;
@property (nonatomic, retain) TUAnimationFloatFunction *opacityFunction;
@property (nonatomic, retain) TUAnimationFloatFunction *scaleFunction;
@property (nonatomic, readonly) bool shouldCompressAtTop;
@property (nonatomic, retain) UIView *titleView;
@property (nonatomic) double topOffset;
@property (nonatomic, retain) TUAnimationFloatFunction *translateFunction;

- (void).cxx_destruct;
- (bool)animationShouldBeginForScrollView:(id)arg1 currentlyFullyCompressed:(bool)arg2;
- (bool)compressTitleView;
- (id)fetchCustomTitleView;
- (id)fetchRegularTitleView;
- (bool)hideTitleOnTop;
- (id)initWithNavigationBar:(id)arg1;
- (double)maximumBarHeightForTraitCollection:(id)arg1;
- (double)minimumBarHeightForTraitCollection:(id)arg1;
- (id)navigationBar;
- (id)opacityFunction;
- (void)reloadWithTraitCollection:(id)arg1;
- (id)scaleFunction;
- (void)scrollViewIsAtTop:(bool)arg1;
- (void)setCompressTitleView:(bool)arg1;
- (void)setHideTitleOnTop:(bool)arg1;
- (void)setOpacityFunction:(id)arg1;
- (void)setScaleFunction:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setTopOffset:(double)arg1;
- (void)setTranslateFunction:(id)arg1;
- (bool)shouldCompressAtTop;
- (id)titleView;
- (double)topOffset;
- (id)translateFunction;
- (void)updateWithPercentage:(double)arg1;

@end
