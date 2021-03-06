/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUIDynamic.framework/AppleMediaServicesUIDynamic
 */

@interface AMSUIDDynamicViewController : UIViewController {
    void account;
    void bag;
    void child;
    void clientInfo;
    void javaScriptUrlPromise;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)account;
- (id)bag;
- (id)clientInfo;
- (id)initWithBag:(id)arg1 javaScriptBagValue:(id)arg2;
- (id)initWithBag:(id)arg1 javaScriptURL:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)setAccount:(id)arg1;
- (void)setBag:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
