/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXNavigationBannerHelper : NSObject {
    bool  _enabled;
    _UINavigationControllerPalette * _palette;
    UIViewController * _viewController;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) _UINavigationControllerPalette *palette;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (id)initWithViewController:(id)arg1;
- (bool)isEnabled;
- (id)palette;
- (void)setEnabled:(bool)arg1;
- (void)setPalette:(id)arg1;
- (id)viewController;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
