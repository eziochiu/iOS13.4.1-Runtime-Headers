/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5WiFiPreferredNetwork : NSObject <NSCopying, NSSecureCoding> {
    NSString * _domainName;
    NSString * _identifier;
    bool  _isCaptive;
    bool  _isEnabled;
    bool  _isHidden;
    bool  _isMultiAP;
    bool  _isPasspoint;
    NSDate * _lastJoinedTimestamp;
    long long  _security;
    NSData * _ssid;
    NSString * _ssidString;
}

@property (nonatomic, copy) NSString *domainName;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isCaptive;
@property (nonatomic) bool isEnabled;
@property (nonatomic) bool isHidden;
@property (nonatomic) bool isMultiAP;
@property (nonatomic) bool isPasspoint;
@property (nonatomic, copy) NSDate *lastJoinedTimestamp;
@property (nonatomic) long long security;
@property (nonatomic, copy) NSData *ssid;
@property (nonatomic, copy) NSString *ssidString;

+ (id)preferredNetworksList;
+ (bool)supportsSecureCoding;

- (bool)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)domainName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isCaptive;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPreferredNetwork:(id)arg1;
- (bool)isHidden;
- (bool)isMultiAP;
- (bool)isPasspoint;
- (id)lastJoinedTimestamp;
- (long long)security;
- (void)setDomainName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsCaptive:(bool)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setIsHidden:(bool)arg1;
- (void)setIsMultiAP:(bool)arg1;
- (void)setIsPasspoint:(bool)arg1;
- (void)setLastJoinedTimestamp:(id)arg1;
- (void)setSecurity:(long long)arg1;
- (void)setSsid:(id)arg1;
- (void)setSsidString:(id)arg1;
- (id)ssid;
- (id)ssidString;

@end