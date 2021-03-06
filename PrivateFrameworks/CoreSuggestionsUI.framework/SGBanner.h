/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

@interface SGBanner : UIControl <SGTappableTextViewDelegate> {
    long long  _accessoryType;
    NSString * _action;
    NSAttributedString * _attributedSubtitle;
    UIButton * _closeButton;
    NSLayoutXAxisAnchor * _closeButtonCenterXAnchor;
    NSLayoutConstraint * _closeButtonHorizontalPositionConstraint;
    NSLayoutConstraint * _closeButtonWidthConstraint;
    long long  _currentStyle;
    UIImageView * _disclosureImageView;
    NSLayoutConstraint * _disclosureImageViewHorizontalPositionConstraint;
    UIImageView * _firstImageView;
    NSLayoutConstraint * _horisontalSpaceBetweenImagesConstraint;
    NSLayoutConstraint * _imageCenterYConstraint;
    NSArray * _images;
    bool  _needsSubtitleUpdate;
    UIImageView * _secondImageView;
    NSString * _subtitle;
    NSLayoutConstraint * _subtitleBaselineConstraint;
    SGTappableTextView * _subtitleLabel;
    NSLayoutConstraint * _titleBaselineConstraint;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleLeadingConstraint;
    NSLayoutConstraint * _verticalSpaceBetweenImagesConstraint;
}

@property (nonatomic) long long accessoryType;
@property (nonatomic, copy) NSString *action;
@property (nonatomic, copy) NSAttributedString *attributedSubtitle;
@property (nonatomic, retain) NSLayoutXAxisAnchor *closeButtonCenterXAnchor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *images;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } popoverSourceRect;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)_cancelImage;
+ (id)_disclosureChevronImage;
+ (double)_imageCenterOffsetFromTitleBaselineConstant;
+ (double)_interLabelBaselineDeltaConstant;
+ (id)_subtitleFont;
+ (id)_titleFont;
+ (double)_topMarginConstant;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_installLayoutConstraints;
- (void)_onAction:(id)arg1;
- (void)_onDismiss:(id)arg1;
- (void)_setupViews;
- (id)_subtitleColor;
- (id)_titleColor;
- (void)_updateBackground;
- (void)_updateCurrentAppearance;
- (void)_updateFonts;
- (long long)accessoryType;
- (id)action;
- (id)attributedSubtitle;
- (id)closeButtonCenterXAnchor;
- (id)images;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })popoverSourceRect;
- (void)setAccessoryType:(long long)arg1;
- (void)setAction:(id)arg1;
- (void)setAttributedSubtitle:(id)arg1;
- (void)setCloseButtonCenterXAnchor:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImages:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitle;
- (void)tappableTextView:(id)arg1 didTapRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)title;
- (void)updateConstraints;

@end
