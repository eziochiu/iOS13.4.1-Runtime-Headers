/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAccountAdditionalPushTopics : NSObject <NSCopying, NSSecureCoding> {
    NSString * _account;
    NSString * _extendedAccount;
    NSString * _payments;
}

@property (nonatomic, copy) NSString *account;
@property (nonatomic, copy) NSString *extendedAccount;
@property (nonatomic, copy) NSString *payments;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)account;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extendedAccount;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)payments;
- (void)setAccount:(id)arg1;
- (void)setExtendedAccount:(id)arg1;
- (void)setPayments:(id)arg1;

@end
