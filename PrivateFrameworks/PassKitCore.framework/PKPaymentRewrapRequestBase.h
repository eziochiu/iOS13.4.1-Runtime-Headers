/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRewrapRequestBase : PKPaymentWebServiceRequest {
    NSData * _applicationData;
    PKPaymentPass * _pass;
    PKPaymentApplication * _paymentApplication;
    PKWrappedPayment * _wrappedPayment;
}

@property (nonatomic, copy) NSData *applicationData;
@property (nonatomic, readonly) NSString *endpointName;
@property (nonatomic, retain) PKPaymentPass *pass;
@property (nonatomic, retain) PKPaymentApplication *paymentApplication;
@property (nonatomic, retain) PKWrappedPayment *wrappedPayment;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 rewrapData:(id)arg3 appleAccountInformation:(id)arg4;
- (id)applicationData;
- (id)bodyDictionary;
- (id)endpointName;
- (id)pass;
- (id)paymentApplication;
- (void)setApplicationData:(id)arg1;
- (void)setPass:(id)arg1;
- (void)setPaymentApplication:(id)arg1;
- (void)setWrappedPayment:(id)arg1;
- (id)wrappedPayment;

@end