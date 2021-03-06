/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLSessionEffectiveConfiguration : __NSURLSessionEffectiveConfiguration_Base

@property (copy) NSDictionary *HTTPAdditionalHeaders;
@property (retain) NSHTTPCookieStorage *HTTPCookieStorage;
@property (retain) NSURLCache *URLCache;
@property (retain) NSURLCredentialStorage *URLCredentialStorage;
@property (copy) NSString *_CTDataConnectionServiceType;
@property unsigned long long _TCPAdaptiveReadTimeout;
@property unsigned long long _TCPAdaptiveWriteTimeout;
@property bool _allowsConstrainedNetworkAccess;
@property bool _allowsExpensiveAccess;
@property bool _allowsIndefiniteConnections;
@property bool _allowsMultipathTCP;
@property bool _allowsPowerNapScheduling;
@property bool _allowsResponseMonitoringDuringBodyTranmission;
@property bool _allowsTCPFastOpen;
@property bool _allowsTLSSessionResumption;
@property bool _allowsTLSSessionTickets;
@property bool _allowsWCA;
@property bool _alwaysPerformDefaultTrustEvaluation;
@property (copy) <NSURLSessionAppleIDContext> *_appleIDContext;
@property (copy) NSSet *_authenticatorStatusCodes;
@property bool _clientIsNotExplicitlyDiscretionary;
@property (copy) NSString *_companionAppBundleIdentifier;
@property double _connectionCacheCellPurgeTimeout;
@property (copy) NSString *_connectionPoolName;
@property unsigned long long _customReadBufferSize;
@property double _customReadBufferTimeout;
@property (copy) NSURL *_directoryForDownloadedFiles;
@property bool _duetPreauthorized;
@property long long _expiredDNSBehavior;
@property unsigned long long _forcedNetworkServiceType;
@property bool _forcesNewConnections;
@property (copy) NSNumber *_maximumWatchCellularTransferSize;
@property unsigned long long _multipathAlternatePort;
@property bool _onBehalfOfPairedDevice;
@property bool _preventsAppSSO;
@property bool _preventsIdleSleepOnceConnected;
@property bool _preventsSystemHTTPProxyAuthentication;
@property bool _reportsDataStalls;
@property bool _requiresPowerPluggedIn;
@property bool _requiresSecureHTTPSProxyConnection;
@property bool _requiresSustainedDataDelivery;
@property bool _respectsAllowsCellularAccessForDiscretionaryTasks;
@property bool _shouldSkipPreferredClientCertificateLookup;
@property (copy) NSDictionary *_socketStreamProperties;
@property (copy) NSData *_sourceApplicationAuditTokenData;
@property (copy) NSString *_sourceApplicationBundleIdentifier;
@property (copy) NSString *_sourceApplicationSecondaryIdentifier;
@property (copy) NSSet *_suppressedAutoAddedHTTPHeaders;
@property (copy) NSString *_tcpConnectionPoolName;
@property long long _timingDataOptions;
@property (copy) NSString *_tlsTrustPinningPolicyName;
@property bool allowsCellularAccess;
@property bool allowsConstrainedNetworkAccess;
@property bool allowsExpensiveNetworkAccess;
@property (getter=isDiscretionary) bool discretionary;
@property long long multipathServiceType;
@property (copy) NSArray *protocolClasses;
@property bool shouldUseExtendedBackgroundIdleMode;
@property double timeoutIntervalForResource;
@property bool waitsForConnectivity;

+ (id)immutableEffectiveConfigurationFromConfig:(id)arg1;
+ (id)immutableEffectiveConfigurationFromSessionConfig:(id)arg1;

- (double)_connectionCacheCellPurgeTimeout;
- (id)_socketStreamProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)set_connectionCacheCellPurgeTimeout:(double)arg1;
- (void)set_socketStreamProperties:(id)arg1;

@end
