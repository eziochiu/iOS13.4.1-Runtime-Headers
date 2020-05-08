/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
 */

@interface FLReachabilityObserver : NSObject {
    id /* block */  _completionHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;

+ (bool)isAirplaneModeActiveWithoutWifi;
+ (bool)isNetworkReachable;

- (void).cxx_destruct;
- (void)_reachabilityChanged:(id)arg1;
- (id /* block */)completionHandler;
- (void)dealloc;
- (void)disableAirplaneModeAndWaitForNetworkWithCompletionHandler:(id /* block */)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;

@end