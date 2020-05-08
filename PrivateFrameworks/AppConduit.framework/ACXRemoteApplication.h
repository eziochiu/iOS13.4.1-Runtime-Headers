/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppConduit.framework/AppConduit
 */

@interface ACXRemoteApplication : NSObject <ACXSyncedApp, NSCopying, NSSecureCoding> {
    unsigned long long  _applicationMode;
    NSString * _applicationName;
    unsigned long long  _applicationType;
    NSArray * _architectureSlices;
    NSString * _bundleIdentifier;
    NSString * _bundleShortVersion;
    NSString * _bundleVersion;
    NSString * _companionAppBundleID;
    NSString * _complicationPrincipalClass;
    NSArray * _counterpartIdentifiers;
    NSUUID * _databaseUUID;
    bool  _hasClockfaces;
    NSArray * _intentsRestrictedWhileLocked;
    NSArray * _intentsSupported;
    bool  _isBetaApp;
    bool  _isDeletable;
    bool  _isLocallyAvailable;
    bool  _isProfileValidated;
    NSDictionary * _localizedInfoPlistStrings;
    NSString * _minimumOSVersion;
    NSDictionary * _requiredCapabilities;
    unsigned long long  _sequenceNumber;
    MIStoreMetadata * _storeMetadata;
    NSArray * _supportedComplicationFamilies;
    NSString * _teamID;
    NSArray * _userActivityTypes;
    NSString * _watchKitAppExecutableHash;
    NSString * _watchKitAppExtensionBundleID;
    NSString * _watchKitVersion;
}

@property (nonatomic) unsigned long long applicationMode;
@property (nonatomic, copy) NSString *applicationName;
@property (nonatomic) unsigned long long applicationType;
@property (nonatomic, copy) NSArray *architectureSlices;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *bundleShortVersion;
@property (nonatomic, copy) NSString *bundleVersion;
@property (nonatomic, copy) NSString *companionAppBundleID;
@property (nonatomic, copy) NSString *complicationPrincipalClass;
@property (nonatomic, copy) NSArray *counterpartIdentifiers;
@property (nonatomic, retain) NSUUID *databaseUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasClockfaces;
@property (nonatomic, readonly) bool hasComplication;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *intentsRestrictedWhileLocked;
@property (nonatomic, copy) NSArray *intentsSupported;
@property (nonatomic) bool isBetaApp;
@property (nonatomic) bool isDeletable;
@property (nonatomic) bool isLocallyAvailable;
@property (nonatomic) bool isProfileValidated;
@property (nonatomic, readonly) bool isSystemApp;
@property (nonatomic, copy) NSDictionary *localizedInfoPlistStrings;
@property (nonatomic, copy) NSString *minimumOSVersion;
@property (nonatomic, copy) NSDictionary *requiredCapabilities;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic, copy) MIStoreMetadata *storeMetadata;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *supportedComplicationFamilies;
@property (nonatomic, copy) NSString *teamID;
@property (nonatomic, copy) NSArray *userActivityTypes;
@property (nonatomic, copy) NSString *watchKitAppExecutableHash;
@property (nonatomic, copy) NSString *watchKitAppExtensionBundleID;
@property (nonatomic, copy) NSString *watchKitVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)applicationMode;
- (id)applicationName;
- (unsigned long long)applicationType;
- (id)architectureSlices;
- (id)bundleIdentifier;
- (id)bundleShortVersion;
- (id)bundleVersion;
- (id)companionAppBundleID;
- (id)complicationPrincipalClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)counterpartIdentifiers;
- (id)databaseUUID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasClockfaces;
- (bool)hasComplication;
- (id)init;
- (id)initWithApplicationProxy:(id)arg1 databaseUUID:(id)arg2 sequenceNumber:(unsigned long long)arg3;
- (id)initWithBundleID:(id)arg1 databaseUUID:(id)arg2 sequenceNumber:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedDictionary:(id)arg1;
- (id)intentsRestrictedWhileLocked;
- (id)intentsSupported;
- (bool)isBetaApp;
- (bool)isCompatibleWithCPUType:(int)arg1 subtype:(int)arg2;
- (bool)isCompatibleWithOSVersion:(id)arg1;
- (bool)isDeletable;
- (bool)isLocallyAvailable;
- (bool)isProfileValidated;
- (bool)isRuntimeCompatibleWithOSVersion:(id)arg1;
- (bool)isSystemApp;
- (bool)isTheSameAppAs:(id)arg1;
- (id)localizedInfoPlistStrings;
- (id)localizedInfoPlistStringsForKeys:(id)arg1 fetchingFirstMatchingLocalizationInList:(id)arg2;
- (id)minimumOSVersion;
- (id)requiredCapabilities;
- (unsigned long long)sequenceNumber;
- (id)serialize;
- (id)serializeAsRemoteApplication;
- (void)setApplicationMode:(unsigned long long)arg1;
- (void)setApplicationName:(id)arg1;
- (void)setApplicationType:(unsigned long long)arg1;
- (void)setArchitectureSlices:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleShortVersion:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setCompanionAppBundleID:(id)arg1;
- (void)setComplicationPrincipalClass:(id)arg1;
- (void)setCounterpartIdentifiers:(id)arg1;
- (void)setDatabaseUUID:(id)arg1;
- (void)setHasClockfaces:(bool)arg1;
- (void)setIntentsRestrictedWhileLocked:(id)arg1;
- (void)setIntentsSupported:(id)arg1;
- (void)setIsBetaApp:(bool)arg1;
- (void)setIsDeletable:(bool)arg1;
- (void)setIsLocallyAvailable:(bool)arg1;
- (void)setIsProfileValidated:(bool)arg1;
- (void)setLocalizedInfoPlistStrings:(id)arg1;
- (void)setMinimumOSVersion:(id)arg1;
- (void)setRequiredCapabilities:(id)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (void)setStoreMetadata:(id)arg1;
- (void)setSupportedComplicationFamilies:(id)arg1;
- (void)setTeamID:(id)arg1;
- (void)setUserActivityTypes:(id)arg1;
- (void)setWatchKitAppExecutableHash:(id)arg1;
- (void)setWatchKitAppExtensionBundleID:(id)arg1;
- (void)setWatchKitVersion:(id)arg1;
- (id)storeMetadata;
- (id)supportedComplicationFamilies;
- (id)teamID;
- (id)userActivityTypes;
- (id)watchKitAppExecutableHash;
- (id)watchKitAppExtensionBundleID;
- (id)watchKitVersion;

@end