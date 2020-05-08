/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKFeatureApplicationOfferDetails : NSObject <NSCopying, NSSecureCoding> {
    NSDecimalNumber * _annualFee;
    NSDecimalNumber * _aprForPurchase;
    NSDecimalNumber * _creditLimit;
    NSString * _currencyCode;
    NSDate * _expiryDate;
    NSString * _offerTermsIdentifier;
}

@property (nonatomic, copy) NSDecimalNumber *annualFee;
@property (nonatomic, copy) NSDecimalNumber *aprForPurchase;
@property (nonatomic, copy) NSDecimalNumber *creditLimit;
@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic, copy) NSDate *expiryDate;
@property (nonatomic, copy) NSString *offerTermsIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)annualFee;
- (id)aprForPurchase;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creditLimit;
- (id)currencyCode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expiryDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)offerTermsIdentifier;
- (void)setAnnualFee:(id)arg1;
- (void)setAprForPurchase:(id)arg1;
- (void)setCreditLimit:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setExpiryDate:(id)arg1;
- (void)setOfferTermsIdentifier:(id)arg1;

@end