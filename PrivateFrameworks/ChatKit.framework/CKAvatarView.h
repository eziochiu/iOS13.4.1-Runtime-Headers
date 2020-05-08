/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAvatarView : CNAvatarView {
    NSString * _preferredHandle;
    UIViewController * _presentingViewController;
}

@property (nonatomic) NSString *preferredHandle;
@property (nonatomic) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)preferredHandle;
- (id)presentingViewController;
- (void)setHighlighted:(bool)arg1;
- (void)setPreferredHandle:(id)arg1;
- (void)setPresentingViewController:(id)arg1;

@end