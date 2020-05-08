/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAccountWebServicePassDetailsResponse : PKAccountWebServiceResponse {
    long long  _cardType;
    NSString * _ownershipTokenIdentifier;
    NSString * _passSerialNumber;
    NSString * _passTypeIdentifier;
    NSURL * _passURL;
    NSArray * _postProvisioningContent;
    NSString * _provisioningIdentifier;
    PKPaymentRemoteCredential * _remoteCredential;
    long long  _status;
}

@property (nonatomic, readonly) long long cardType;
@property (nonatomic, readonly, copy) NSString *ownershipTokenIdentifier;
@property (nonatomic, readonly, copy) NSString *passSerialNumber;
@property (nonatomic, readonly, copy) NSString *passTypeIdentifier;
@property (nonatomic, readonly, copy) NSURL *passURL;
@property (nonatomic, readonly) NSArray *postProvisioningContent;
@property (nonatomic, readonly, copy) NSString *provisioningIdentifier;
@property (nonatomic, retain) PKPaymentRemoteCredential *remoteCredential;
@property (nonatomic) long long status;

- (void).cxx_destruct;
- (long long)cardType;
- (id)initWithData:(id)arg1;
- (id)ownershipTokenIdentifier;
- (id)passSerialNumber;
- (id)passTypeIdentifier;
- (id)passURL;
- (id)postProvisioningContent;
- (id)provisioningIdentifier;
- (id)remoteCredential;
- (void)setRemoteCredential:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end