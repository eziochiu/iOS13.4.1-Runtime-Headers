/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIConfirmationCardView : UIView {
    UIVisualEffectView * _backdropView;
    _TVImageView * _badgeView;
    UIView * _cardView;
    VUIConfirmationCardLayout * _layout;
    VUILabel * _textLabel;
}

@property (nonatomic, readonly) UIVisualEffectView *backdropView;
@property (nonatomic, retain) _TVImageView *badgeView;
@property (nonatomic, retain) UIView *cardView;
@property (nonatomic, retain) VUIConfirmationCardLayout *layout;
@property (nonatomic, retain) VUILabel *textLabel;

- (void).cxx_destruct;
- (void)_configureSubviews;
- (id)backdropView;
- (id)badgeView;
- (id)cardView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layout;
- (void)layoutSubviews;
- (void)setBadgeView:(id)arg1;
- (void)setCardView:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (id)textLabel;

@end