/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAddCarKeyPassConfiguration : PKAddSecureElementPassConfiguration {
    NSString * _appIdentifier;
    NSString * _password;
}

@property (nonatomic, copy) NSString *appIdentifier;
@property (nonatomic, copy) NSString *password;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)password;
- (void)setAppIdentifier:(id)arg1;
- (void)setPassword:(id)arg1;

@end
