/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKHostedAuthenticateViewController : UIViewController <GKAuthenticateViewController, GKExtensionParentViewControllerProtocol> {
    id /* block */  _completionHandler;
    bool  _disablesSignIn;
    id /* block */  _dismissCompletionHandler;
    NSError * _error;
    GKAuthenticateHostViewController * _extensionHostViewController;
    NSString * _lastPersonalizationVersionDisplayed;
    unsigned long long  _lastPrivacyNoticeVersionDisplayed;
    long long  _mode;
    id /* block */  _remoteViewReadyHandler;
    bool  _rotationLocked;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disablesSignIn;
@property (nonatomic, copy) id /* block */ dismissCompletionHandler;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) GKAuthenticateHostViewController *extensionHostViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *lastPersonalizationVersionDisplayed;
@property (nonatomic) unsigned long long lastPrivacyNoticeVersionDisplayed;
@property (nonatomic) long long mode;
@property (nonatomic, copy) id /* block */ remoteViewReadyHandler;
@property (getter=isRotationLocked, nonatomic) bool rotationLocked;
@property (readonly) Class superclass;

+ (bool)_preventsAppearanceProxyCustomization;

- (void).cxx_destruct;
- (void)_setupChildViewController;
- (void)_setupExtensionHostViewController;
- (bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id /* block */)completionHandler;
- (void)continueWithMode:(long long)arg1;
- (void)dealloc;
- (bool)disablesSignIn;
- (id /* block */)dismissCompletionHandler;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)error;
- (void)extensionDidFinishWithError:(id)arg1;
- (id)extensionHostViewController;
- (void)finishAuthenticationWithError:(id)arg1;
- (id)init;
- (bool)isRotationLocked;
- (id)lastPersonalizationVersionDisplayed;
- (unsigned long long)lastPrivacyNoticeVersionDisplayed;
- (long long)mode;
- (void)onboardingFlowDidSignOut;
- (id /* block */)remoteViewReadyHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDisablesSignIn:(bool)arg1;
- (void)setDismissCompletionHandler:(id /* block */)arg1;
- (void)setError:(id)arg1;
- (void)setExtensionHostViewController:(id)arg1;
- (void)setLastPersonalizationVersionDisplayed:(id)arg1;
- (void)setLastPrivacyNoticeVersionDisplayed:(unsigned long long)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setMode:(long long)arg1;
- (void)setRemoteViewReadyHandler:(id /* block */)arg1;
- (void)setRotationLocked:(bool)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldAutomaticallyForwardRotationMethods;
- (bool)shouldAutorotate;
- (void)showPasswordChangeAlertWithURL:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end