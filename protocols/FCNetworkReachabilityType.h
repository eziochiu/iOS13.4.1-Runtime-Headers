/* Generated by EzioChiu.
 */

@protocol FCNetworkReachabilityType <NSObject>

@required

- (void)addObserver:(id <FCNetworkReachabilityObserving>)arg1;
- (bool)isCloudKitReachable;
- (long long)offlineReason;
- (void)removeObserver:(id <FCNetworkReachabilityObserving>)arg1;
- (void)setOfflineReason:(long long)arg1;

@end