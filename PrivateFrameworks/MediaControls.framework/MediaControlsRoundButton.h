/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsRoundButton : UIControl <MTVisualStylingProviderObservingPrivate> {
    long long  _axis;
    NSString * _glyphState;
    bool  _labelHidden;
    NSString * _packageName;
    CCUICAPackageView * _packageView;
    NSString * _title;
    UILabel * _titleLabel;
    MTVisualStylingProvider * _visualStylingProvider;
}

@property (nonatomic) long long axis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *glyphState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageFrame;
@property (getter=isLabelHidden, nonatomic) bool labelHidden;
@property (nonatomic, copy) NSString *packageName;
@property (nonatomic, retain) CCUICAPackageView *packageView;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) MTVisualStylingProvider *visualStylingProvider;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (void)_updateLabelVisualStyling;
- (void)_updatePackageColors;
- (long long)axis;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)glyphState;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageFrame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isLabelHidden;
- (void)layoutSubviews;
- (id)packageName;
- (id)packageView;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)providedStylesDidChangeForProvider:(id)arg1;
- (void)setAxis:(long long)arg1;
- (void)setGlyphState:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setLabelHidden:(bool)arg1;
- (void)setPackageName:(id)arg1;
- (void)setPackageView:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1;
- (id)title;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (id)visualStylingProvider;

@end