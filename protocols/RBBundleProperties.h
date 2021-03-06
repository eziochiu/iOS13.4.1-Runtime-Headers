/* Generated by EzioChiu.
 */

@protocol RBBundleProperties <RBSProcessBundleDataSource>

@required

- (NSString *)bundleIdentifier;
- (NSDictionary *)bundleInfoValuesForKeys:(NSArray *)arg1;
- (NSString *)bundlePath;
- (NSURL *)dataContainerURL;
- (NSDictionary *)environmentVariables;
- (NSString *)executablePath;
- (NSString *)extensionPointIdentifier;
- (bool)hasPreferredJetsamBand;
- (bool)isBackgroundRefreshEnabled;
- (bool)isExtension;
- (int)preferredJetsamBand;
- (bool)supportsBackgroundAudio;
- (bool)supportsBackgroundContentFetching;
- (bool)supportsBackgroundNetworkAuthentication;
- (bool)supportsUnboundedTaskCompletion;
- (bool)usesSocketMonitoring;

@end
