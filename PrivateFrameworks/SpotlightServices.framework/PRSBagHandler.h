/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSBagHandler : NSObject {
    bool  _active;
    NSArray * _anonymousMetadataUndesiredBundleIDs;
    NSSet * _appBlacklist;
    PARBag * _bag;
    bool  _bagEnabled;
    NSObject<OS_dispatch_queue> * _bagQueue;
    SSPlistDataReader * _cep_server_values;
    <PRSSessionController> * _client;
    bool  _collectAnonymousData;
    bool  _collectScores;
    bool  _disableAsTypedSuggestion;
    NSArray * _enabledDomains;
    NSString * _fteContinueString;
    NSString * _fteLearnMoreString;
    NSString * _fteLocString;
    GEOUserSessionEntity * _geoUserSessionEntity;
    NSObject<OS_dispatch_group> * _locationGroup;
    id  _lockObject;
    NSString * _lookupFirstUseDescription1;
    NSString * _lookupFirstUseDescription2;
    NSString * _lookupFirstUseLearnMore;
    PRSRankingServerKnobs * _ranking_server_knobs;
    NSObject<OS_dispatch_queue> * _resourceFetchQueue;
    NSMutableDictionary * _resourceMetadata;
    bool  _resourceMetadataNeedsWrite;
    NSString * _resourceMetadataPath;
    double  _searchRenderTimeout;
    long long  _status;
    NSArray * _suggestionRankerModelParams;
    double  _suggestionsRenderTimeout;
    NSMutableArray * _tasks;
    bool  _use2LayerRanking;
    bool  _waitingForLocation;
}

@property (nonatomic) bool active;
@property (nonatomic, retain) NSArray *anonymousMetadataUndesiredBundleIDs;
@property (nonatomic, retain) NSSet *appBlacklist;
@property (getter=isBagEnabled, nonatomic, readonly) bool bagEnabled;
@property (retain) SSPlistDataReader *cep_server_values;
@property <PRSSessionController> *client;
@property (nonatomic) bool collectAnonymousData;
@property (nonatomic) bool collectScores;
@property (nonatomic) bool disableAsTypedSuggestion;
@property (nonatomic, retain) NSArray *enabledDomains;
@property (nonatomic, retain) NSString *fteContinueString;
@property (nonatomic, retain) NSString *fteLearnMoreString;
@property (nonatomic, retain) NSString *fteLocString;
@property (readonly) GEOUserSessionEntity *geoUserSessionEntity;
@property (nonatomic, readonly) NSString *lookupFirstUseDescription1;
@property (nonatomic, readonly) NSString *lookupFirstUseDescription2;
@property (nonatomic, readonly) NSString *lookupFirstUseLearnMore;
@property (retain) PRSRankingServerKnobs *ranking_server_knobs;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *resourceFetchQueue;
@property (nonatomic, retain) NSMutableDictionary *resourceMetadata;
@property (nonatomic) bool resourceMetadataNeedsWrite;
@property (nonatomic, retain) NSString *resourceMetadataPath;
@property double searchRenderTimeout;
@property (nonatomic) long long status;
@property (nonatomic, retain) NSArray *suggestionRankerModelParams;
@property double suggestionsRenderTimeout;
@property (nonatomic) bool use2LayerRanking;

+ (void)initialize;
+ (id)sharedHandler;

- (void).cxx_destruct;
- (id)_base64CEPDataNoCopyFromFeatureData:(id)arg1;
- (void)_processQIFeatures:(id)arg1 forClient:(id)arg2;
- (void)activate;
- (bool)active;
- (id)anonymousMetadataUndesiredBundleIDs;
- (id)appBlacklist;
- (id)applicationNameForUserAgent;
- (id)cep_server_values;
- (id)client;
- (bool)collectAnonymousData;
- (bool)collectScores;
- (void)deactivate;
- (bool)disableAsTypedSuggestion;
- (id)enabledDomains;
- (id)excludedDomainIdentifiers;
- (void)fetchModifiedResourceFromSession:(id)arg1 resource:(id)arg2 completion:(id /* block */)arg3;
- (id)fteContinueString;
- (id)fteLearnMoreString;
- (id)fteLocString;
- (id)geoUserSessionEntity;
- (void)getFTEStringsWithReply:(id /* block */)arg1;
- (id)init;
- (bool)isBagEnabled;
- (bool)isEnabled;
- (bool)isLocaleSupported:(id)arg1;
- (id)lookupFirstUseDescription1;
- (id)lookupFirstUseDescription2;
- (id)lookupFirstUseLearnMore;
- (void)parseCEPFromData:(id)arg1 forClient:(id)arg2;
- (id)ranking_server_knobs;
- (void)refreshGUID;
- (void)removeTask:(id)arg1;
- (id)resourceFetchQueue;
- (id)resourceMetadata;
- (bool)resourceMetadataNeedsWrite;
- (id)resourceMetadataPath;
- (double)searchRenderTimeout;
- (bool)searchSupported:(bool)arg1;
- (bool)sessionReady;
- (void)setActive:(bool)arg1;
- (void)setAnonymousMetadataUndesiredBundleIDs:(id)arg1;
- (void)setAppBlacklist:(id)arg1;
- (void)setCep_server_values:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setCollectAnonymousData:(bool)arg1;
- (void)setCollectScores:(bool)arg1;
- (void)setDisableAsTypedSuggestion:(bool)arg1;
- (void)setEnabledDomains:(id)arg1;
- (void)setFteContinueString:(id)arg1;
- (void)setFteLearnMoreString:(id)arg1;
- (void)setFteLocString:(id)arg1;
- (void)setRanking_server_knobs:(id)arg1;
- (void)setResourceFetchQueue:(id)arg1;
- (void)setResourceMetadata:(id)arg1;
- (void)setResourceMetadataNeedsWrite:(bool)arg1;
- (void)setResourceMetadataPath:(id)arg1;
- (void)setSearchRenderTimeout:(double)arg1;
- (void)setStatus:(long long)arg1;
- (void)setSuggestionRankerModelParams:(id)arg1;
- (void)setSuggestionsRenderTimeout:(double)arg1;
- (void)setUse2LayerRanking:(bool)arg1;
- (long long)status;
- (id)suggestionRankerModelParams;
- (double)suggestionsRenderTimeout;
- (id)supportedServices;
- (void)triggerTaskWhenReady:(id)arg1;
- (void)updateFromSession:(id)arg1 bag:(id)arg2 forClient:(id)arg3 error:(id)arg4;
- (void)updateWithBagDictionary:(id)arg1 error:(id)arg2;
- (void)updateWithDictionary:(id)arg1;
- (bool)use2LayerRanking;
- (id)userId;

@end