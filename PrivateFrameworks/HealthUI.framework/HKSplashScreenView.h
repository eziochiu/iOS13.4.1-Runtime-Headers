/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSplashScreenView : UIView {
    UIVisualEffectView * _bottomBlurView;
    UIButton * _continueButton;
    UITableView * _featureTableView;
    UILabel * _titleLabel;
    UIVisualEffectView * _topBlurView;
}

@property (nonatomic, retain) UIVisualEffectView *bottomBlurView;
@property (nonatomic, retain) UIButton *continueButton;
@property (nonatomic, retain) UITableView *featureTableView;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIVisualEffectView *topBlurView;

- (void).cxx_destruct;
- (id)bottomBlurView;
- (id)continueButton;
- (id)featureTableView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBottomBlurView:(id)arg1;
- (void)setContinueButton:(id)arg1;
- (void)setFeatureTableView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTopBlurView:(id)arg1;
- (id)titleLabel;
- (id)topBlurView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateForFontOrTextChange;
- (void)updateTableViewInsetsForHeaderAndFooterBlurView;

@end