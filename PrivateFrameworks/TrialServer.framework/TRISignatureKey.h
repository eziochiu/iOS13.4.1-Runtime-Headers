/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRISignatureKey : NSObject {
    struct __SecKey { } * _key;
}

@property struct __SecKey { }*key;

+ (struct __SecKey { }*)keyFromCertificateChain:(id)arg1;
+ (id)keyFromData:(id)arg1;
+ (void)releaseCertificates:(id)arg1;

- (void)dealloc;
- (id)initWithKey:(struct __SecKey { }*)arg1;
- (struct __SecKey { }*)key;
- (void)setKey:(struct __SecKey { }*)arg1;
- (bool)validateBase64Signature:(id)arg1 data:(id)arg2;
- (bool)validateBase64Signature:(id)arg1 data:(id)arg2 algorithm:(struct __CFString { }*)arg3;
- (bool)validateSignature:(id)arg1 data:(id)arg2 algorithm:(struct __CFString { }*)arg3;

@end
