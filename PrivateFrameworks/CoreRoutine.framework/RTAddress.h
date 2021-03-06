/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTAddress : NSObject <NSCopying, NSSecureCoding> {
    NSString * _administrativeArea;
    NSString * _administrativeAreaCode;
    NSArray * _areasOfInterest;
    NSString * _country;
    NSString * _countryCode;
    NSDate * _creationDate;
    NSDate * _expirationDate;
    NSUUID * _identifier;
    NSString * _inlandWater;
    bool  _isIsland;
    NSString * _locality;
    NSString * _ocean;
    NSString * _postalCode;
    NSString * _subAdministrativeArea;
    NSString * _subLocality;
    NSString * _subThoroughfare;
    NSString * _thoroughfare;
}

@property (nonatomic, readonly, copy) NSString *administrativeArea;
@property (nonatomic, readonly, copy) NSString *administrativeAreaCode;
@property (nonatomic, readonly) NSArray *areasOfInterest;
@property (nonatomic, readonly, copy) NSString *country;
@property (nonatomic, readonly, copy) NSString *countryCode;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSString *inlandWater;
@property (nonatomic, readonly) bool isIsland;
@property (nonatomic, readonly, copy) NSString *locality;
@property (nonatomic, readonly) NSString *mergedThoroughfare;
@property (nonatomic, readonly, copy) NSString *ocean;
@property (nonatomic, readonly, copy) NSString *postalCode;
@property (nonatomic, readonly, copy) NSString *subAdministrativeArea;
@property (nonatomic, readonly, copy) NSString *subLocality;
@property (nonatomic, readonly, copy) NSString *subThoroughfare;
@property (nonatomic, readonly, copy) NSString *thoroughfare;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)administrativeArea;
- (id)administrativeAreaCode;
- (id)areasOfInterest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (id)countryCode;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 subThoroughfare:(id)arg2 thoroughfare:(id)arg3 subLocality:(id)arg4 locality:(id)arg5 subAdministrativeArea:(id)arg6 administrativeArea:(id)arg7 administrativeAreaCode:(id)arg8 postalCode:(id)arg9 country:(id)arg10 countryCode:(id)arg11 inlandWater:(id)arg12 ocean:(id)arg13 areasOfInterest:(id)arg14 isIsland:(bool)arg15 creationDate:(id)arg16 expirationDate:(id)arg17;
- (id)inlandWater;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAddress:(id)arg1;
- (bool)isIsland;
- (id)locality;
- (id)mergedThoroughfare;
- (id)ocean;
- (id)postalCode;
- (void)setCreationDate:(id)arg1;
- (id)subAdministrativeArea;
- (id)subLocality;
- (id)subThoroughfare;
- (id)thoroughfare;

@end
