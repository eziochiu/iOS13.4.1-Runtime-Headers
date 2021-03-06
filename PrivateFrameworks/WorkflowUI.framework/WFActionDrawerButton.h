/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFActionDrawerButton : UIButton {
    UIImage * _icon;
    UIImageView * _iconView;
    unsigned long long  _style;
    UILabel * _textLabel;
}

@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic) UIImageView *iconView;
@property (nonatomic, readonly) unsigned long long style;
@property (nonatomic) UILabel *textLabel;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)accentColorForStyle:(unsigned long long)arg1;
- (id)accessibilityLabel;
- (id)icon;
- (id)iconView;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 style:(unsigned long long)arg3;
- (id)mainColorForStyle:(unsigned long long)arg1;
- (void)setIconView:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (unsigned long long)style;
- (id)textLabel;
- (void)tintColorDidChange;
- (id)title;
- (void)updateColors;

@end
