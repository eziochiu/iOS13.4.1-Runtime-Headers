/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AACCore.framework/AACCore
 */

@interface AEPolicyBundle : NSObject {
    NSArray * _activations;
    <AEPerformancePrimitives> * _performancePrimitives;
    <AEPolicyStore> * _policyStore;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, copy) NSArray *activations;
@property (nonatomic, readonly) <AEPerformancePrimitives> *performancePrimitives;
@property (nonatomic, readonly) <AEPolicyStore> *policyStore;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)activateSessionWithCompletion:(id /* block */)arg1;
- (id)activationErrorWithErrors:(id)arg1;
- (id)activations;
- (id)initWithPolicyStore:(id)arg1 performancePrimitives:(id)arg2 activations:(id)arg3;
- (id)performancePrimitives;
- (id)policyStore;
- (id)queue;
- (void)recoverWithError:(id)arg1 deactivations:(id)arg2 finalCompletion:(id /* block */)arg3;
- (id)recoverySession;
- (void)runWithRemainingActivations:(id)arg1 remainingDeactivations:(id)arg2 invalidationHandler:(id /* block */)arg3 currentEvent:(long long)arg4 completion:(id /* block */)arg5;
- (void)validateProducedPersistentDeactivations:(id)arg1 currentEvent:(long long)arg2;

@end
