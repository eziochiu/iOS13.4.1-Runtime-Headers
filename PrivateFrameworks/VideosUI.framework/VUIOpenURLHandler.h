/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIOpenURLHandler : NSObject {
    id /* block */  _completionHandler;
    NSURL * _deferredOpenURL;
    id /* block */  _deferredOpenURLCompletion;
    bool  _openedByDeeplink;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSURL *deferredOpenURL;
@property (nonatomic, copy) id /* block */ deferredOpenURLCompletion;
@property (nonatomic) bool openedByDeeplink;

+ (id)_getIDfromURLQueryParameters:(id)arg1 idKeyName:(id)arg2;
+ (void)_handleDeeplinkAction:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_insertPageBehindTop:(id)arg1 viewControllers:(id)arg2 clearStack:(bool)arg3;
+ (void)_pushPageViewControllers:(id)arg1 viewControllers:(id)arg2 skipLastViewController:(bool)arg3;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_fetchLocalMediaWithAdamID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleOpenURLRouterDataSource:(id)arg1 appContext:(id)arg2 clearStack:(bool)arg3 startDate:(id)arg4;
- (void)_processLocalLibraryLink:(id)arg1 playbackInitiationDate:(id)arg2 openURLCompletionDate:(id)arg3;
- (void)_processLocalLink:(id)arg1 appContext:(id)arg2 completion:(id /* block */)arg3;
- (void)_processNonLocalLink:(id)arg1 appContext:(id)arg2 completion:(id /* block */)arg3;
- (id /* block */)completionHandler;
- (id)deferredOpenURL;
- (id /* block */)deferredOpenURLCompletion;
- (void)handleDeferredURLWithAppContext:(id)arg1;
- (bool)openedByDeeplink;
- (void)parseURL:(id)arg1 appContext:(id)arg2 completion:(id /* block */)arg3;
- (void)processEntityWithContextData:(id)arg1 appContext:(id)arg2;
- (void)processURL:(id)arg1 appContext:(id)arg2 completion:(id /* block */)arg3;
- (void)saveDeferredURL:(id)arg1 completion:(id /* block */)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDeferredOpenURL:(id)arg1;
- (void)setDeferredOpenURLCompletion:(id /* block */)arg1;
- (void)setOpenedByDeeplink:(bool)arg1;

@end
