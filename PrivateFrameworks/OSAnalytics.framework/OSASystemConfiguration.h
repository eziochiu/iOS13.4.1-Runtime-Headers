/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
 */

@interface OSASystemConfiguration : OSAProxyConfiguration {
    bool  _appleInternal;
    bool  _carrierInstall;
    NSSet * _logBlacklist;
    NSDictionary * _logConfig;
    bool  _multiUserMode;
    NSString * _pairedWatchOS;
    NSString * _pathAWDTasking;
    NSString * _pathCATasking;
    NSString * _pathContainerRoot;
    NSString * _pathDiagnostics;
    NSString * _pathPreferences;
    NSString * _pathRoot;
    NSString * _pathSubmission;
    NSMutableDictionary * _submissionMetadata;
    NSDictionary * _submissionParams;
    NSDictionary * _whitelistedDomains;
}

@property (readonly) bool appleInternal;
@property (readonly) bool carrierInstall;
@property (readonly) bool multiUserMode;
@property (readonly) bool optIn3rdParty;
@property (readonly) bool optInApple;
@property (readonly) NSString *pathAWDTasking;
@property (readonly) NSString *pathCATasking;
@property (readonly) NSString *pathContainerRoot;
@property (readonly) NSString *pathDiagnostics;
@property (readonly) NSString *pathPreferences;
@property (copy) NSString *pathRoot;
@property (readonly) NSString *pathSubmission;
@property (readonly) NSMutableDictionary *submissionMetadata;

+ (void)ensureConformanceOfFile:(int)arg1;
+ (id)ensureUsablePath:(id)arg1 component:(id)arg2 options:(id)arg3;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)appleInternal;
- (id)assembleMetadataAt:(double)arg1 withOptions:(unsigned int)arg2;
- (id)automatedContextURL;
- (id)automatedDeviceGroup;
- (id)awdReporterKey;
- (id)buildVersion;
- (bool)carrierInstall;
- (id)crashReporterKey;
- (id)createReportMetadata:(id)arg1 with:(id)arg2 at:(double)arg3 usingOptions:(id)arg4;
- (id)currentTaskingIDByRouting;
- (id)experimentGroup;
- (id)getLogBlacklist;
- (id)getPrefsKey:(id)arg1 forDomain:(id)arg2 withOptions:(id)arg3;
- (id)getPropsForLogType:(id)arg1;
- (id)getTaskingKey:(id)arg1;
- (id)identifier;
- (id)internalKey;
- (bool)isConfigEnabled:(id)arg1;
- (bool)isProxy;
- (bool)isWhitelisted:(id)arg1 forDomain:(id)arg2;
- (id)logExt:(id)arg1;
- (id)logPath;
- (id)logPathForType:(id)arg1 at:(double)arg2 options:(id)arg3;
- (id)logPrefix:(id)arg1;
- (id)modelCode;
- (bool)multiUserMode;
- (void)onceConfig;
- (bool)optIn3rdParty;
- (bool)optInApple;
- (id)osTrain;
- (id)pairedWatchOS;
- (id)pathAWDTasking;
- (id)pathCATasking;
- (id)pathContainerRoot;
- (id)pathDiagnostics;
- (id)pathPreferences;
- (id)pathRoot;
- (id)pathSubmission;
- (id)pathSubmissionForOwner:(id)arg1;
- (void)plumbEmail:(id)arg1;
- (id)productBuildString;
- (id)productName;
- (id)productNameVersionBuildString;
- (id)productReleaseString;
- (id)productVersion;
- (id)releaseType;
- (void)saveToPath:(id)arg1;
- (id)seedGroup;
- (id)serialNumber;
- (void)setPathRoot:(id)arg1;
- (bool)setPrefsKey:(id)arg1 value:(id)arg2 forDomain:(id)arg3 withSync:(bool)arg4;
- (id)submissionMetadata;
- (id)submissionParam:(id)arg1;
- (void)sysVersionData;
- (id)systemId;
- (id)targetAudience;
- (id)uiCountryCode;
- (bool)usesLegacySubmission:(id)arg1;

@end