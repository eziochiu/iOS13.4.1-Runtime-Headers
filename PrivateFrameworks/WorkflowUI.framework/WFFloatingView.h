/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFFloatingView : UIView

@property (nonatomic, copy) WFGradient *gradient;
@property (nonatomic, readonly) WFFloatingLayer *layer;
@property (getter=isPressed, nonatomic) bool pressed;

+ (Class)layerClass;

- (void)applyConfiguration:(id)arg1;
- (id)gradient;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPressed;
- (void)setGradient:(id)arg1;
- (void)setPressed:(bool)arg1;
- (void)setPressed:(bool)arg1 animated:(bool)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end