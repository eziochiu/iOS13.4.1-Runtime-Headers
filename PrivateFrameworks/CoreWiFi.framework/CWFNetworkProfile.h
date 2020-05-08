/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

@interface CWFNetworkProfile : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _internal;
}

@property (nonatomic, copy) NSDictionary *EAPProfile;
@property (nonatomic, copy) NSArray *NAIRealmNameList;
@property (nonatomic, copy) NSData *SSID;
@property (nonatomic, readonly, copy) NSArray *TLSTrustedServerNames;
@property (nonatomic) long long WAPISubtype;
@property (nonatomic) long long WEPSubtype;
@property (nonatomic, readonly, copy) NSArray *acceptedEAPTypes;
@property (nonatomic) long long addReason;
@property (nonatomic, copy) NSDate *addedAt;
@property (getter=isAutoJoinDisabled, nonatomic) bool autoJoinDisabled;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, readonly) bool bypassCaptive;
@property (nonatomic, copy) NSDictionary *captiveProfile;
@property (nonatomic, copy) NSArray *cellularNetworkInfo;
@property (nonatomic, copy) NSString *displayedOperatorName;
@property (nonatomic, copy) NSString *domainName;
@property (nonatomic) long long hiddenState;
@property (nonatomic, readonly, copy) NSArray *innerAcceptedEAPTypes;
@property (nonatomic, retain) NSMutableDictionary *internal;
@property (nonatomic, readonly) bool isAppBased;
@property (nonatomic, readonly) bool isCaptive;
@property (nonatomic, readonly) bool isCaptiveStateDetermined;
@property (nonatomic, readonly) bool isEAP;
@property (nonatomic, readonly) bool isPSK;
@property (nonatomic, readonly) bool isPasspoint;
@property (nonatomic, readonly) bool isProfileBased;
@property (nonatomic, readonly) bool isTLSCertificateRequired;
@property (nonatomic, readonly) bool isWAPI;
@property (nonatomic, readonly) bool isWEP;
@property (nonatomic, readonly) bool isWPA;
@property (nonatomic, readonly) bool isWPA2;
@property (nonatomic, readonly) bool isWPA3;
@property (nonatomic, readonly, copy) NSDate *lastJoinedAt;
@property (nonatomic, copy) NSDate *lastJoinedBySystemAt;
@property (nonatomic, copy) NSDate *lastJoinedByUserAt;
@property (nonatomic, readonly, copy) NSString *networkName;
@property (nonatomic) unsigned long long passwordSharingFlags;
@property (nonatomic, copy) NSString *payloadUUID;
@property (getter=isPersonalHotspot, nonatomic) bool personalHotspot;
@property (nonatomic, readonly, copy) NSSet *properties;
@property (nonatomic, copy) NSArray *roamingConsortiumList;
@property (nonatomic) long long saveDataMode;
@property (getter=isServiceProviderRoamingEnabled, nonatomic) bool serviceProviderRoamingEnabled;
@property (getter=isSessionBased, nonatomic) bool sessionBased;
@property (nonatomic, readonly) unsigned long long strongestSupportedSecurityType;
@property (nonatomic) unsigned long long supportedSecurityTypes;
@property (getter=isSystemMode, nonatomic) bool systemMode;
@property (nonatomic, readonly) bool wasCaptive;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)EAPProfile;
- (id)NAIRealmNameList;
- (id)SSID;
- (id)TLSTrustedServerNames;
- (long long)WAPISubtype;
- (long long)WEPSubtype;
- (id)__defaultProperties;
- (id)__descriptionForCaptiveFlags;
- (id)__descriptionForHiddenState;
- (id)__descriptionForSecurityTypes;
- (id)__requiredProperties;
- (id)acceptedEAPTypes;
- (long long)addReason;
- (id)addedAt;
- (id)bundleID;
- (bool)bypassCaptive;
- (id)captiveProfile;
- (id)cellularNetworkInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayedOperatorName;
- (id)domainName;
- (void)encodeWithCoder:(id)arg1;
- (id)filteredNetworkProfileWithProperties:(id)arg1;
- (unsigned long long)hash;
- (long long)hiddenState;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)innerAcceptedEAPTypes;
- (id)internal;
- (bool)isAppBased;
- (bool)isAutoJoinDisabled;
- (bool)isCaptive;
- (bool)isCaptiveStateDetermined;
- (bool)isEAP;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNetworkProfile:(id)arg1;
- (bool)isPSK;
- (bool)isPasspoint;
- (bool)isPersonalHotspot;
- (bool)isProfileBased;
- (bool)isServiceProviderRoamingEnabled;
- (bool)isSessionBased;
- (bool)isSystemMode;
- (bool)isTLSCertificateRequired;
- (bool)isWAPI;
- (bool)isWEP;
- (bool)isWPA;
- (bool)isWPA2;
- (bool)isWPA3;
- (id)lastJoinedAt;
- (id)lastJoinedBySystemAt;
- (id)lastJoinedByUserAt;
- (id)networkName;
- (unsigned long long)passwordSharingFlags;
- (id)payloadUUID;
- (id)properties;
- (id)roamingConsortiumList;
- (long long)saveDataMode;
- (void)setAddReason:(long long)arg1;
- (void)setAddedAt:(id)arg1;
- (void)setAutoJoinDisabled:(bool)arg1;
- (void)setBundleID:(id)arg1;
- (void)setCaptiveProfile:(id)arg1;
- (void)setCellularNetworkInfo:(id)arg1;
- (void)setDisplayedOperatorName:(id)arg1;
- (void)setDomainName:(id)arg1;
- (void)setEAPProfile:(id)arg1;
- (void)setHiddenState:(long long)arg1;
- (void)setInternal:(id)arg1;
- (void)setLastJoinedBySystemAt:(id)arg1;
- (void)setLastJoinedByUserAt:(id)arg1;
- (void)setNAIRealmNameList:(id)arg1;
- (void)setPasswordSharingFlags:(unsigned long long)arg1;
- (void)setPayloadUUID:(id)arg1;
- (void)setPersonalHotspot:(bool)arg1;
- (void)setRoamingConsortiumList:(id)arg1;
- (void)setSSID:(id)arg1;
- (void)setSaveDataMode:(long long)arg1;
- (void)setServiceProviderRoamingEnabled:(bool)arg1;
- (void)setSessionBased:(bool)arg1;
- (void)setSupportedSecurityTypes:(unsigned long long)arg1;
- (void)setSystemMode:(bool)arg1;
- (void)setWAPISubtype:(long long)arg1;
- (void)setWEPSubtype:(long long)arg1;
- (unsigned long long)strongestSupportedSecurityType;
- (unsigned long long)supportedSecurityTypes;
- (bool)wasCaptive;

@end