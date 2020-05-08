/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
 */

@interface AppStoreKit.ArcadeSubscriptionManager : NSObject <SKPaymentTransactionObserver> {
    void activeStoreAccountProvider;
    void arcadeSubscriptionFamilyId;
    void logger;
    void observers;
    void paymentCallbacks;
    void paymentQueue;
    void stateLock;
    void subscriptionEntitlements;
    void subscriptionState;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)entitlementsDidChange;
- (id)init;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;

@end