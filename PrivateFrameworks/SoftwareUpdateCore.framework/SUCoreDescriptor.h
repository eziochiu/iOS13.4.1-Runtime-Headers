/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
 */

@interface SUCoreDescriptor : NSObject <NSSecureCoding> {
    NSString * _assetID;
    bool  _autoDownloadAllowableOverCellular;
    bool  _autoUpdateEnabled;
    bool  _criticalCellularOverride;
    bool  _criticalOutOfBoxOnly;
    bool  _disableAppDemotion;
    bool  _disableCDLevel4;
    bool  _disableInstallTonight;
    bool  _disableSiriVoiceDeletion;
    SUCoreDocumentation * _documentation;
    MAAsset * _documentationAsset;
    SUCoreMAIdentifier * _documentationAssetIdentifier;
    NSString * _documentationID;
    bool  _downloadAllowableOverCellular;
    unsigned long long  _downloadSize;
    bool  _downloadable;
    unsigned long long  _installationSize;
    NSString * _lastEmergencyBuild;
    NSString * _lastEmergencyOSVersion;
    unsigned long long  _mdmDelayInterval;
    NSData * _measurement;
    NSString * _measurementAlgorithm;
    unsigned long long  _minimumSystemPartitionSize;
    unsigned long long  _msuPrepareSize;
    NSString * _prerequisiteBuild;
    NSString * _prerequisiteOSVersion;
    NSString * _productBuildVersion;
    NSString * _productSystemName;
    NSString * _productVersion;
    NSString * _publisher;
    bool  _rampEnabled;
    NSDate * _releaseDate;
    NSString * _releaseType;
    NSData * _rsepDigest;
    NSData * _rsepTBMDigests;
    NSData * _sepDigest;
    NSData * _sepTBMDigests;
    NSString * _setupCritical;
    MAAsset * _softwareUpdateAsset;
    SUCoreMAIdentifier * _softwareUpdateAssetIdentifier;
    NSString * _softwareUpdateURL;
    bool  _streamingZipCapable;
    NSArray * _supportedDevices;
    NSDictionary * _systemPartitionPadding;
    unsigned long long  _unarchivedSize;
    NSString * _uniqueBuildID;
    long long  _updateType;
}

@property (nonatomic, retain) NSString *assetID;
@property (nonatomic) bool autoDownloadAllowableOverCellular;
@property (nonatomic) bool autoUpdateEnabled;
@property (nonatomic) bool criticalCellularOverride;
@property (nonatomic) bool criticalOutOfBoxOnly;
@property (nonatomic) bool disableAppDemotion;
@property (nonatomic) bool disableCDLevel4;
@property (nonatomic) bool disableInstallTonight;
@property (nonatomic) bool disableSiriVoiceDeletion;
@property (nonatomic, retain) SUCoreDocumentation *documentation;
@property (nonatomic, retain) MAAsset *documentationAsset;
@property (nonatomic, retain) SUCoreMAIdentifier *documentationAssetIdentifier;
@property (nonatomic, retain) NSString *documentationID;
@property (nonatomic) bool downloadAllowableOverCellular;
@property (nonatomic) unsigned long long downloadSize;
@property (nonatomic) bool downloadable;
@property (nonatomic, readonly) bool fullReplacement;
@property (nonatomic, readonly, retain) NSString *humanReadableUpdateName;
@property (nonatomic) unsigned long long installationSize;
@property (nonatomic, retain) NSString *lastEmergencyBuild;
@property (nonatomic, retain) NSString *lastEmergencyOSVersion;
@property (nonatomic) unsigned long long mdmDelayInterval;
@property (nonatomic, retain) NSData *measurement;
@property (nonatomic, retain) NSString *measurementAlgorithm;
@property (nonatomic) unsigned long long minimumSystemPartitionSize;
@property (nonatomic) unsigned long long msuPrepareSize;
@property (nonatomic, readonly) unsigned long long preparationSize;
@property (nonatomic, retain) NSString *prerequisiteBuild;
@property (nonatomic, retain) NSString *prerequisiteOSVersion;
@property (nonatomic, retain) NSString *productBuildVersion;
@property (nonatomic, retain) NSString *productSystemName;
@property (nonatomic, retain) NSString *productVersion;
@property (nonatomic, retain) NSString *publisher;
@property (nonatomic) bool rampEnabled;
@property (nonatomic, retain) NSDate *releaseDate;
@property (nonatomic, retain) NSString *releaseType;
@property (nonatomic, retain) NSData *rsepDigest;
@property (nonatomic, retain) NSData *rsepTBMDigests;
@property (nonatomic, retain) NSData *sepDigest;
@property (nonatomic, retain) NSData *sepTBMDigests;
@property (nonatomic, retain) NSString *setupCritical;
@property (nonatomic, retain) MAAsset *softwareUpdateAsset;
@property (nonatomic, retain) SUCoreMAIdentifier *softwareUpdateAssetIdentifier;
@property (nonatomic, retain) NSString *softwareUpdateURL;
@property (nonatomic) bool streamingZipCapable;
@property (nonatomic, retain) NSArray *supportedDevices;
@property (nonatomic, retain) NSDictionary *systemPartitionPadding;
@property (nonatomic, readonly) unsigned long long totalRequiredFreeSpace;
@property (nonatomic) unsigned long long unarchivedSize;
@property (nonatomic, retain) NSString *uniqueBuildID;
@property (nonatomic) long long updateType;

+ (id)cleanProductVersion:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetID;
- (bool)autoDownloadAllowableOverCellular;
- (bool)autoUpdateEnabled;
- (bool)criticalCellularOverride;
- (bool)criticalOutOfBoxOnly;
- (id)criticalOverrideCellularPolicy;
- (id)description;
- (bool)disableAppDemotion;
- (bool)disableCDLevel4;
- (bool)disableInstallTonight;
- (bool)disableSiriVoiceDeletion;
- (id)documentation;
- (id)documentationAsset;
- (id)documentationAssetIdentifier;
- (id)documentationID;
- (bool)downloadAllowableOverCellular;
- (unsigned long long)downloadSize;
- (bool)downloadable;
- (void)encodeWithCoder:(id)arg1;
- (bool)fullReplacement;
- (id)getMADocumentationAsset;
- (id)getMASoftwareUpdateAsset;
- (id)humanReadableUpdateName;
- (id)initWithCoder:(id)arg1;
- (id)initWithSUAsset:(id)arg1 releaseDate:(id)arg2;
- (unsigned long long)installationSize;
- (bool)isEqual:(id)arg1;
- (id)lastEmergencyBuild;
- (id)lastEmergencyOSVersion;
- (unsigned long long)mdmDelayInterval;
- (id)measurement;
- (id)measurementAlgorithm;
- (unsigned long long)minimumSystemPartitionSize;
- (unsigned long long)msuPrepareSize;
- (id)overview;
- (unsigned long long)preparationSize;
- (id)prerequisiteBuild;
- (id)prerequisiteOSVersion;
- (id)productBuildVersion;
- (id)productSystemName;
- (id)productVersion;
- (id)publisher;
- (bool)rampEnabled;
- (id)releaseDate;
- (id)releaseType;
- (id)rsepDigest;
- (id)rsepTBMDigests;
- (id)sepDigest;
- (id)sepTBMDigests;
- (void)setAssetID:(id)arg1;
- (void)setAutoDownloadAllowableOverCellular:(bool)arg1;
- (void)setAutoUpdateEnabled:(bool)arg1;
- (void)setCriticalCellularOverride:(bool)arg1;
- (void)setCriticalOutOfBoxOnly:(bool)arg1;
- (void)setDisableAppDemotion:(bool)arg1;
- (void)setDisableCDLevel4:(bool)arg1;
- (void)setDisableInstallTonight:(bool)arg1;
- (void)setDisableSiriVoiceDeletion:(bool)arg1;
- (void)setDocumentation:(id)arg1;
- (void)setDocumentationAsset:(id)arg1;
- (void)setDocumentationAssetIdentifier:(id)arg1;
- (void)setDocumentationID:(id)arg1;
- (void)setDownloadAllowableOverCellular:(bool)arg1;
- (void)setDownloadSize:(unsigned long long)arg1;
- (void)setDownloadable:(bool)arg1;
- (void)setInstallationSize:(unsigned long long)arg1;
- (void)setLastEmergencyBuild:(id)arg1;
- (void)setLastEmergencyOSVersion:(id)arg1;
- (void)setMdmDelayInterval:(unsigned long long)arg1;
- (void)setMeasurement:(id)arg1;
- (void)setMeasurementAlgorithm:(id)arg1;
- (void)setMinimumSystemPartitionSize:(unsigned long long)arg1;
- (void)setMsuPrepareSize:(unsigned long long)arg1;
- (void)setPrerequisiteBuild:(id)arg1;
- (void)setPrerequisiteOSVersion:(id)arg1;
- (void)setProductBuildVersion:(id)arg1;
- (void)setProductSystemName:(id)arg1;
- (void)setProductVersion:(id)arg1;
- (void)setPublisher:(id)arg1;
- (void)setRampEnabled:(bool)arg1;
- (void)setReleaseDate:(id)arg1;
- (void)setReleaseType:(id)arg1;
- (void)setRsepDigest:(id)arg1;
- (void)setRsepTBMDigests:(id)arg1;
- (void)setSepDigest:(id)arg1;
- (void)setSepTBMDigests:(id)arg1;
- (void)setSetupCritical:(id)arg1;
- (void)setSoftwareUpdateAsset:(id)arg1;
- (void)setSoftwareUpdateAssetIdentifier:(id)arg1;
- (void)setSoftwareUpdateURL:(id)arg1;
- (void)setStreamingZipCapable:(bool)arg1;
- (void)setSupportedDevices:(id)arg1;
- (void)setSystemPartitionPadding:(id)arg1;
- (void)setUnarchivedSize:(unsigned long long)arg1;
- (void)setUniqueBuildID:(id)arg1;
- (void)setUpdateType:(long long)arg1;
- (id)setupCritical;
- (id)softwareUpdateAsset;
- (id)softwareUpdateAssetIdentifier;
- (id)softwareUpdateURL;
- (bool)streamingZipCapable;
- (id)summary;
- (id)supportedDevices;
- (id)systemPartitionPadding;
- (unsigned long long)totalRequiredFreeSpace;
- (unsigned long long)unarchivedSize;
- (id)uniqueBuildID;
- (long long)updateType;
- (id)updateTypeName;

@end