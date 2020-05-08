/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDisplayTypeContextHorizontalCollectionViewCell : UICollectionViewCell {
    HKDisplayTypeContextItem * _contextItem;
    HKUIMetricColors * _currentMetricColors;
    UILabel * _dateLabel;
    <HKDisplayTypeContextHorizontalCollectionViewCellDelegate> * _delegate;
    NSArray * _horizontalConstraints;
    UIButton * _infoButton;
    UILabel * _titleLabel;
    UILabel * _unitLabel;
    UILabel * _valueLabel;
}

@property (nonatomic, retain) HKDisplayTypeContextItem *contextItem;
@property (nonatomic) <HKDisplayTypeContextHorizontalCollectionViewCellDelegate> *delegate;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_applyHorizontalDesign;
- (double)_bottomOffsetFromDateBaseline;
- (id)_buildHorizontalConstraints;
- (double)_dateBaselineOffsetFromValue;
- (id)_dateLabelFont;
- (void)_setActiveForConstraints:(id)arg1 active:(bool)arg2;
- (double)_titleLabelBaselineOffsetFromTop;
- (id)_titleLabelFont;
- (void)_unapplyHorizontalDesign;
- (id)_unitLabelFont;
- (double)_valueLabelBaselineOffsetFromDateLabel;
- (id)_valueLabelFont;
- (id)contextItem;
- (id)delegate;
- (void)infoButtonTapped:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setContextItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)updateMetricColors:(bool)arg1;
- (void)updateUI:(bool)arg1;
- (void)updateUIColors;

@end