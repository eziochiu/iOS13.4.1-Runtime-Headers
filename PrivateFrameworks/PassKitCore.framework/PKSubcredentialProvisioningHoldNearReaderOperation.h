/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSubcredentialProvisioningHoldNearReaderOperation : PKSubcredentialProvisioningSessionOperation <PKAppletSubcredentialPairingSessionDelegate> {
    bool  _operationWasCancelled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithError:(id)arg2;
- (void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithSubcredential:(id)arg2 registrationData:(id)arg3;
- (bool)canCancelOperation;
- (void)cancelOperation;
- (void)performOperation;
- (void)session:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)startPairing;

@end