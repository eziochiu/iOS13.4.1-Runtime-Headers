/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIFeedbackViewCell : VUIFocusableCollectionViewCell {
    VUIFeedbackView * _cardView;
    IKViewElement * _viewElement;
}

@property (nonatomic, retain) VUIFeedbackView *cardView;
@property (nonatomic, retain) IKViewElement *viewElement;

+ (id)configureViewWithElement:(id)arg1 existingCell:(id)arg2;

- (void).cxx_destruct;
- (void)_setupElements:(id)arg1 inCardView:(id)arg2;
- (id)cardView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setCardView:(id)arg1;
- (void)setViewElement:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)viewElement;

@end