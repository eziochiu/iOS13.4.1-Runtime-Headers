/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBHRecentsDocumentExtensionProvider : NSObject <_SBUIPopoverExtensionHostDelegate> {
    struct CGSize { 
        double width; 
        double height; 
    }  _compactPreferredContentSize;
    <SBHRecentsDocumentExtensionProviderDelegate> * _delegate;
    NSExtension * _extension;
    SBUIPopoverExtensionHostViewController * _hostViewController;
    <_SBUIPopoverExtensionRemoteInterface> * _remoteService;
    _SBHRecentsDocumentExtensionWrappingViewController * _wrappingViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBHRecentsDocumentExtensionProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtension *extension;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBUIPopoverExtensionHostViewController *hostViewController;
@property (nonatomic, retain) <_SBUIPopoverExtensionRemoteInterface> *remoteService;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SBHRecentsDocumentExtensionWrappingViewController *wrappingViewController;

- (void).cxx_destruct;
- (void)_extensionWillExit:(id)arg1;
- (void)_loadExtensionWithCompletion:(id /* block */)arg1;
- (void)_loadRemoteViewControllerWithBundleIdentifer:(id)arg1;
- (void)_setupHostViewController:(id)arg1;
- (void)_teardownHostViewController;
- (bool)canShowRecentsDocumentExtensionProviderForBundleIdentifier:(id)arg1;
- (id)delegate;
- (id)extension;
- (id)hostViewController;
- (id)init;
- (void)popoverHostExtensionDidExit:(id)arg1;
- (void)popoverHostExtensionRequestsDismiss:(id)arg1;
- (id)recentsDocumentViewControllerForBundleIdentifier:(id)arg1;
- (id)remoteService;
- (void)setDelegate:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setRemoteService:(id)arg1;
- (void)setWrappingViewController:(id)arg1;
- (id)wrappingViewController;

@end
