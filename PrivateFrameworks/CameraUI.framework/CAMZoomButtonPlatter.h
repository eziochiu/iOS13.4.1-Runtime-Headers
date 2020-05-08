/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMZoomButtonPlatter : UIView {
    NSArray * __allButtons;
    UIImageView * __platterBackgroundView;
    CAMZoomButton * __zoomButton1;
    CAMZoomButton * __zoomButton2;
    CAMZoomButton * __zoomButton3;
    NSString * _contentSizeCategory;
    double  _zoomFactor;
    NSArray * _zoomFactors;
}

@property (nonatomic, readonly) NSArray *_allButtons;
@property (nonatomic, readonly) UIImageView *_platterBackgroundView;
@property (nonatomic, readonly) CAMZoomButton *_zoomButton1;
@property (nonatomic, readonly) CAMZoomButton *_zoomButton2;
@property (nonatomic, readonly) CAMZoomButton *_zoomButton3;
@property (nonatomic, copy) NSString *contentSizeCategory;
@property (nonatomic) long long orientation;
@property (nonatomic) double zoomFactor;
@property (nonatomic, readonly) CAMZoomButton *zoomFactorButton;
@property (nonatomic, copy) NSArray *zoomFactors;

- (void).cxx_destruct;
- (id)_allButtons;
- (id)_createPlatterImageForContentSize:(id)arg1;
- (id)_platterBackgroundView;
- (void)_updateButtonsAnimated:(bool)arg1;
- (void)_updateForContentSize;
- (id)_zoomButton1;
- (id)_zoomButton2;
- (id)_zoomButton3;
- (double)baseZoomFactorForButton:(id)arg1;
- (id)contentSizeCategory;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)nearestZoomButtonForTouch:(id)arg1;
- (long long)orientation;
- (void)setContentSizeCategory:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setZoomFactor:(double)arg1;
- (void)setZoomFactor:(double)arg1 animated:(bool)arg2;
- (void)setZoomFactors:(id)arg1;
- (double)zoomFactor;
- (id)zoomFactorButton;
- (id)zoomFactors;

@end