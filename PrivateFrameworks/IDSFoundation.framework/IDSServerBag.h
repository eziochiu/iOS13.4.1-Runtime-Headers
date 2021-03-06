/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSServerBag : NSObject {
    bool  _allowSelfSignedCertificates;
    bool  _allowUnsignedBags;
    NSString * _apsEnvironmentName;
    NSDictionary * _bag;
    NSObject<OS_dispatch_queue> * _bagQueue;
    NSURL * _bagURL;
    NSNumber * _cacheTime;
    NSDictionary * _cachedBag;
    NSString * _cachedHash;
    NSString * _cachedURLString;
    NSData * _certData;
    IMConnectionMonitor * _connectionMonitor;
    id /* block */  _connectionMonitorCreationBlock;
    unsigned long long  _hasPairedDeviceState;
    BOOL  _hashAlgorithm;
    NSDate * _loadDate;
    IDSRateLimiter * _rateLimiter;
    IDSRemoteURLConnection * _remoteURLConnection;
    id /* block */  _remoteURLCreationBlock;
    NSArray * _serverCerts;
    NSData * _serverGivenBag;
    NSData * _serverSignature;
    int  _token;
    int  _trustStatus;
    NSMutableURLRequest * _urlRequest;
}

@property (setter=_setBag:, retain) NSDictionary *_bag;
@property (retain) NSObject<OS_dispatch_queue> *_bagQueue;
@property (retain) NSNumber *_cacheTime;
@property (setter=_setCachedBag:, retain) NSDictionary *_cachedBag;
@property (setter=_setCachedHash:, retain) NSString *_cachedHash;
@property (setter=_setCachedURLString:, retain) NSString *_cachedURLString;
@property (retain) NSData *_certData;
@property (retain) IMConnectionMonitor *_connectionMonitor;
@property (retain) NSDate *_loadDate;
@property (retain) IDSRemoteURLConnection *_remoteURLConnection;
@property (setter=_setTrustStatus:) int _trustStatus;
@property (retain) NSMutableURLRequest *_urlRequest;
@property bool allowSelfSignedCertificates;
@property bool allowUnsignedBags;
@property (retain) NSString *apsEnvironmentName;
@property (retain) NSURL *bagURL;
@property (copy) id /* block */ connectionMonitorCreationBlock;
@property unsigned long long hasPairedDeviceState;
@property BOOL hashAlgorithm;
@property (readonly) bool isInDebilitatedMode;
@property (readonly) bool isLoaded;
@property (readonly) bool isLoading;
@property (readonly) bool isServerAvailable;
@property (nonatomic, retain) IDSRateLimiter *rateLimiter;
@property (copy) id /* block */ remoteURLCreationBlock;
@property (retain) NSArray *serverCerts;
@property (retain) NSData *serverGivenBag;
@property (retain) NSData *serverSignature;
@property int token;

+ (id)_bagCreationLock;
+ (id)_sharedInstance;
+ (id)_sharedInstanceForClass:(Class)arg1;
+ (id)defaultBag;
+ (id)sharedInstance;
+ (id)sharedInstanceForBagType:(long long)arg1;

- (void).cxx_destruct;
- (void)__saveCacheToPrefs;
- (bool)_allowInvalid;
- (id)_bag;
- (id)_bagDefaultsDomain;
- (unsigned long long)_bagDomain;
- (void)_bagExternallyReloaded;
- (id)_bagQueue;
- (id)_cacheTime;
- (id)_cachedBag;
- (id)_cachedHash;
- (id)_cachedURLString;
- (void)_cancelCurrentLoad;
- (id)_certData;
- (void)_clearCache;
- (id)_connectionMonitor;
- (void)_generateURLRequest;
- (id)_initWithURL:(id)arg1 apsEnvironmentName:(id)arg2 allowSelfSignedCertificates:(bool)arg3 allowUnsignedBags:(bool)arg4 hashAlgorithm:(BOOL)arg5;
- (id)_initWithURL:(id)arg1 apsEnvironmentName:(id)arg2 allowSelfSignedCertificates:(bool)arg3 allowUnsignedBags:(bool)arg4 hashAlgorithm:(BOOL)arg5 remoteURLCreationBlock:(id /* block */)arg6 connectionMonitorCreationBlock:(id /* block */)arg7;
- (void)_invalidate;
- (id)_loadDate;
- (void)_loadFromCache;
- (bool)_loadFromDictionary:(id)arg1 returningError:(id*)arg2;
- (bool)_loadFromSignedDictionary:(id)arg1 returningError:(id*)arg2;
- (void)_processBagResultData:(id)arg1 response:(id)arg2 inBackground:(bool)arg3;
- (id)_remoteURLConnection;
- (void)_saveCacheToPrefs;
- (void)_saveToCache;
- (void)_setBag:(id)arg1;
- (void)_setCachedBag:(id)arg1;
- (void)_setCachedHash:(id)arg1;
- (void)_setCachedURLString:(id)arg1;
- (void)_setTrustStatus:(int)arg1;
- (void)_startBagLoad:(bool)arg1;
- (int)_trustStatus;
- (id)_urlRequest;
- (bool)allowSelfSignedCertificates;
- (bool)allowUnsignedBags;
- (id)apsEnvironmentName;
- (id)bagURL;
- (id /* block */)connectionMonitorCreationBlock;
- (void)connectionMonitorDidUpdate:(id)arg1;
- (void)dealloc;
- (void)forceBagLoad;
- (unsigned long long)hasPairedDeviceState;
- (BOOL)hashAlgorithm;
- (bool)isInDebilitatedMode;
- (bool)isLoaded;
- (bool)isLoading;
- (bool)isServerAvailable;
- (id)objectForKey:(id)arg1;
- (id)rateLimiter;
- (id /* block */)remoteURLCreationBlock;
- (id)serverCerts;
- (id)serverGivenBag;
- (id)serverSignature;
- (void)setAllowSelfSignedCertificates:(bool)arg1;
- (void)setAllowUnsignedBags:(bool)arg1;
- (void)setApsEnvironmentName:(id)arg1;
- (void)setBagURL:(id)arg1;
- (void)setConnectionMonitorCreationBlock:(id /* block */)arg1;
- (void)setHasPairedDeviceState:(unsigned long long)arg1;
- (void)setHashAlgorithm:(BOOL)arg1;
- (void)setRateLimiter:(id)arg1;
- (void)setRemoteURLCreationBlock:(id /* block */)arg1;
- (void)setServerCerts:(id)arg1;
- (void)setServerGivenBag:(id)arg1;
- (void)setServerSignature:(id)arg1;
- (void)setToken:(int)arg1;
- (void)set_bagQueue:(id)arg1;
- (void)set_cacheTime:(id)arg1;
- (void)set_certData:(id)arg1;
- (void)set_connectionMonitor:(id)arg1;
- (void)set_loadDate:(id)arg1;
- (void)set_remoteURLConnection:(id)arg1;
- (void)set_urlRequest:(id)arg1;
- (void)startBagLoad;
- (int)token;
- (bool)trustRefFromCertificates:(id)arg1 canReportFailure:(bool)arg2 trustRef:(struct __SecTrust {}**)arg3;
- (id)urlWithKey:(id)arg1;

@end
