/* Generated by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFSettingsAlertItem : NSObject {
    NSString * _accessibilityIdentifier;
    NSAttributedString * _attributedTitle;
    id  _controller;
    UIView * _customView;
    bool  _enabled;
    _SFSettingsAlertItem * _group;
    id /* block */  _handler;
    UIImage * _icon;
    NSArray * _subItems;
    NSString * _textStyle;
    UIColor * _tintColor;
    NSString * _title;
    long long  _type;
    UIView<SFSettingsAlertItemView> * _view;
    id /* block */  _viewConfigurationBlock;
}

@property (nonatomic, copy) NSString *accessibilityIdentifier;
@property (nonatomic, copy) NSAttributedString *attributedTitle;
@property (nonatomic, retain) id controller;
@property (nonatomic, retain) UIView *customView;
@property (nonatomic) bool enabled;
@property (nonatomic, readonly) _SFSettingsAlertItem *group;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, copy) NSArray *subItems;
@property (nonatomic, copy) NSString *textStyle;
@property (nonatomic, copy) UIColor *tintColor;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) long long type;
@property (nonatomic) UIView<SFSettingsAlertItemView> *view;
@property (nonatomic, copy) id /* block */ viewConfigurationBlock;

+ (id)buttonWithAttributedTitle:(id)arg1 textStyle:(id)arg2 icon:(id)arg3 handler:(id /* block */)arg4;
+ (id)buttonWithTitle:(id)arg1 textStyle:(id)arg2 icon:(id)arg3 handler:(id /* block */)arg4;
+ (id)itemWithCustomView:(id)arg1;
+ (id)optionsGroupWithTitle:(id)arg1 controller:(id)arg2;
+ (id)stepperWithController:(id)arg1 handler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)attributedTitle;
- (id)controller;
- (id)customView;
- (bool)enabled;
- (id)group;
- (id /* block */)handler;
- (id)icon;
- (id)initWithType:(long long)arg1;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)setController:(id)arg1;
- (void)setCustomView:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setIcon:(id)arg1;
- (void)setSubItems:(id)arg1;
- (void)setTextStyle:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setView:(id)arg1;
- (void)setViewConfigurationBlock:(id /* block */)arg1;
- (id)subItems;
- (id)textStyle;
- (id)tintColor;
- (id)title;
- (long long)type;
- (void)updateOptionsGroupDetailLabel;
- (id)view;
- (id /* block */)viewConfigurationBlock;

@end
