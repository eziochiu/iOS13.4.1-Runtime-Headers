/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/InfoKit.framework/InfoKit
 */

@interface INKTipContentHintView : INKContentView <UIGestureRecognizerDelegate> {
    bool  __isAccessbilitySizeCategory;
    bool  __isSmallScreen;
    <INKTipContentHintViewDelegate> * __tipContentDelegate;
    INKMultilineButton * _actionButton;
    NSMutableArray * _axRequiredLayoutConstraints;
    UIButton * _closeButton;
    NSMutableArray * _defaultRequiredLayoutConstraints;
    UIImageView * _iconImageView;
    UILabel * _textLabel;
    UILabel * _titleLabel;
}

@property (nonatomic) <INKTipContentHintViewDelegate> *_tipContentDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)primaryLabelColor;
+ (id)primaryLabelFont;
+ (id)secondaryLabelColor;
+ (id)secondaryLabelFont;

- (void).cxx_destruct;
- (void)_accessibilitySizeCategoryDidChange;
- (void)_actionTapped;
- (void)_closeTapped;
- (void)_contentSizeCategoryDidChange;
- (void)_hintTapped;
- (id)_initWithContent:(id)arg1 tipContentDelegate:(id)arg2;
- (void)_setPreferredTraitCollection:(id)arg1;
- (id)_tipContentDelegate;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)set_tipContentDelegate:(id)arg1;
- (void)updateAccessibilityContentCategory;
- (void)updateFonts;
- (bool)view:(id)arg1 shouldReceiveTouch:(id)arg2;

@end
