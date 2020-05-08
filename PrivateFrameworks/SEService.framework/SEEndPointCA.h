/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SEService.framework/SEService
 */

@interface SEEndPointCA : NSObject <NSSecureCoding> {
    struct __SecCertificate { } * _certificate;
    NSArray * _certificates;
    NSString * _identifier;
    NSData * _secureElementAttestation;
    NSString * _subjectIdentifier;
}

@property (nonatomic, readonly) struct __SecCertificate { }*certificate;
@property (nonatomic, retain) NSArray *certificates;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSData *secureElementAttestation;
@property (nonatomic, retain) NSString *subjectIdentifier;

+ (id)decodeWithData:(id)arg1 error:(id*)arg2;
+ (id)endPointCAWithIdentifier:(id)arg1 subjectIdentifer:(id)arg2 secureElementAttestation:(id)arg3 error:(id*)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct __SecCertificate { }*)certificate;
- (id)certificates;
- (id)description;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)encodeWithError:(id*)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)secureElementAttestation;
- (void)setCertificates:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSecureElementAttestation:(id)arg1;
- (void)setSubjectIdentifier:(id)arg1;
- (id)subjectIdentifier;

@end