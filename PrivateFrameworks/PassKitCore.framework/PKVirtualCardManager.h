/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKVirtualCardManager : NSObject {
    PKAccountService * _accountService;
    PKInAppPaymentService * _inAppPaymentService;
}

- (void).cxx_destruct;
- (void)activeVirtualCardsWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)credentialsForVirtualCard:(id)arg1 authorization:(id)arg2 options:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)dismissDetailsForVirtualCard:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)promptDetailsForVirtualCard:(id)arg1 completion:(id /* block */)arg2;
- (void)queryKeychainForVirtualCard:(id /* block */)arg1;
- (id)urlToPassDetailsForVirtualCard:(id)arg1;

@end