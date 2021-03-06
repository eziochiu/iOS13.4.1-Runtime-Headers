/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKTransitCommutePlan : NSObject <NPKDateRange, NSCopying, NSSecureCoding> {
    NSArray * _details;
    NSArray * _deviceAccountIdentifiers;
    NSDate * _expiryDate;
    NSString * _expiryDateString;
    NSMutableDictionary * _fieldsByKey;
    NSString * _identifier;
    unsigned long long  _properties;
    NSDate * _startDate;
    NSString * _startDateString;
    PKPassField * _title;
    PKPassField * _usage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *details;
@property (nonatomic, copy) NSArray *deviceAccountIdentifiers;
@property (nonatomic, readonly) NSDate *expiryDate;
@property (nonatomic, copy) NSDate *expiryDate;
@property (nonatomic, readonly) NSString *expiryDateString;
@property (nonatomic, copy) NSString *expiryDateString;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) bool isPlanAvailable;
@property (nonatomic) unsigned long long properties;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, readonly) NSString *startDateString;
@property (nonatomic, copy) NSString *startDateString;
@property (readonly) Class superclass;
@property (nonatomic, copy) PKPassField *title;
@property (nonatomic, copy) PKPassField *usage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_expiryField;
- (id)_startField;
- (void)_updateFieldsByKey;
- (void)_updateProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)details;
- (id)deviceAccountIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (id)expiryDate;
- (id)expiryDateString;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPlanAvailable;
- (id)passFieldForKey:(id)arg1;
- (unsigned long long)properties;
- (void)setDetails:(id)arg1;
- (void)setDeviceAccountIdentifiers:(id)arg1;
- (void)setExpiryDate:(id)arg1;
- (void)setExpiryDateString:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setProperties:(unsigned long long)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStartDateString:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUsage:(id)arg1;
- (id)startDate;
- (id)startDateString;
- (id)title;
- (id)usage;

@end
