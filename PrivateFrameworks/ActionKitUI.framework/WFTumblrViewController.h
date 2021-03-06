/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

@interface WFTumblrViewController : UIViewController <WKNavigationDelegate> {
    TMTumblrAuthenticator * _authenticator;
    <WFTumblrViewControllerDelegate> * _delegate;
    WKWebView * _webView;
}

@property (nonatomic, retain) TMTumblrAuthenticator *authenticator;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFTumblrViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) WKWebView *webView;

- (void).cxx_destruct;
- (id)authenticator;
- (void)cancel;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithOAuthConsumerKey:(id)arg1 OAuthConsumerSecret:(id)arg2;
- (void)loadView;
- (void)setAuthenticator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setWebView:(id)arg1;
- (void)viewDidLoad;
- (id)webView;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;

@end
