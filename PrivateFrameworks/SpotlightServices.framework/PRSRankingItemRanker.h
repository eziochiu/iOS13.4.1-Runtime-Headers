/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSRankingItemRanker : NSObject {
    NSMapTable * _bundleFeatures;
    double  _currentTime;
    bool  _exact;
    double  _experimentalWeight1;
    double  _experimentalWeight2;
    bool  _hasParsecPolicyPhraseMatch;
    bool  _hasPolicyPhraseMatch;
    bool  _isCJK;
    bool  _isCancelled;
    bool  _isInternalDevice;
    NSString * _keyboardLanguage;
    float  _lastIsSpaceFeature;
    NSString * _meContactIdentifier;
    bool  _policyDisabled;
    unsigned long long  _queryTermCount;
    PRSQueryRankingConfiguration * _rankingConfiguration;
    NSString * _searchString;
    NSString * _userQueryString;
}

@property (nonatomic, retain) NSMapTable *bundleFeatures;
@property (nonatomic) double currentTime;
@property (nonatomic) bool exact;
@property (nonatomic) double experimentalWeight1;
@property (nonatomic) double experimentalWeight2;
@property (nonatomic) bool hasParsecPolicyPhraseMatch;
@property (nonatomic) bool hasPolicyPhraseMatch;
@property bool isCJK;
@property bool isCancelled;
@property bool isInternalDevice;
@property (nonatomic, retain) NSString *keyboardLanguage;
@property (nonatomic) float lastIsSpaceFeature;
@property (nonatomic, retain) NSString *meContactIdentifier;
@property (nonatomic) bool policyDisabled;
@property unsigned long long queryTermCount;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic, retain) NSString *userQueryString;

+ (void)clearState;
+ (id)importantAttributesForBundle:(id)arg1;
+ (id)importantAttributesForParsecBundle:(id)arg1;
+ (bool)isCJK;
+ (id)phoneFavoritesCopy;
+ (void)setDockApps:(id)arg1;
+ (id)sortedUniqueBundleFeatureValuesFromBundleFeatures:(id)arg1;

- (void).cxx_destruct;
- (void)activate;
- (id)bundleFeatures;
- (void)cancel;
- (id /* block */)comparatorByJoiningComparator:(id /* block */)arg1 withPredicate:(id)arg2;
- (void)computePolicyFeaturesForBundleItems:(id)arg1 isCJK:(bool)arg2;
- (void)computeRelativeFeatureForContext:(id)arg1 items:(id)arg2;
- (void)computeResultSetDependantFeatures:(id)arg1 allItems:(id)arg2;
- (float*)computeScoresForVectors:(id)arg1 withBundleFeatures:(id)arg2;
- (double)currentTime;
- (void)deactivate;
- (void)dealloc;
- (bool)exact;
- (double)experimentalWeight1;
- (double)experimentalWeight2;
- (bool)hasParsecPolicyPhraseMatch;
- (bool)hasPolicyPhraseMatch;
- (id)init;
- (id)initWithSearchString:(id)arg1 language:(id)arg2 currentTime:(double)arg3;
- (id)initWithSearchString:(id)arg1 language:(id)arg2 isCJK:(bool)arg3 experimentalWeight1:(double)arg4 experimentalWeight2:(double)arg5 currentTime:(double)arg6;
- (id)initWithSearchString:(id)arg1 userQueryString:(id)arg2 language:(id)arg3 currentTime:(double)arg4;
- (id)initWithSearchString:(id)arg1 userQueryString:(id)arg2 language:(id)arg3 isCJK:(bool)arg4 experimentalWeight1:(double)arg5 experimentalWeight2:(double)arg6 currentTime:(double)arg7;
- (bool)isCJK;
- (bool)isCancelled;
- (bool)isInternalDevice;
- (id)keyboardLanguage;
- (float)lastIsSpaceFeature;
- (id)meContactIdentifier;
- (void)pickMostRecentDateForItem:(id)arg1 pastItems:(id*)arg2 futureItems:(id*)arg3;
- (bool)policyDisabled;
- (void)populateLocalResultSetDateFeaturesForItems:(id)arg1;
- (void)populateMailContactFeaturesWithMailItems:(id)arg1 contactItems:(id)arg2;
- (void)populateRankResultSetBundleFeaturesWithBundleItems:(id)arg1 withUniqueBundleMaxScores:(id)arg2;
- (void)prepareItems:(id)arg1 inBundle:(id)arg2;
- (void)prepareParsecResults:(id)arg1 inBundle:(id)arg2;
- (unsigned long long)queryTermCount;
- (id)rankingConfiguration;
- (id)rankingConfigurationWithMeContact:(id)arg1 emailAddresses:(id)arg2 phoneFavorites:(id)arg3 vipList:(id)arg4 clientBundle:(id)arg5 isScopedSearch:(bool)arg6 spotlightQuery:(id)arg7;
- (id)rankingConfigurationWithMeContact:(id)arg1 emailAddresses:(id)arg2 phoneFavorites:(id)arg3 vipList:(id)arg4 clientBundle:(id)arg5 isScopedSearch:(bool)arg6 spotlightQuery:(id)arg7 userQuery:(id)arg8 whyQuery:(unsigned long long)arg9 isPeopleSearch:(bool)arg10;
- (void)relevantResultSetPRSL2FeaturesFromBundleFeature:(unsigned long long)arg1 absRankFeatureOut:(unsigned short*)arg2 relRankFeatureOut:(unsigned short*)arg3;
- (void)rerankItemsWithPolicyForBundleItems:(id)arg1 isCJK:(bool)arg2;
- (void)resetbundleFeaturesScratchBuf:(float*)arg1;
- (id)searchString;
- (void)setBundleFeatures:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setExact:(bool)arg1;
- (void)setExperimentalWeight1:(double)arg1;
- (void)setExperimentalWeight2:(double)arg1;
- (void)setHasParsecPolicyPhraseMatch:(bool)arg1;
- (void)setHasPolicyPhraseMatch:(bool)arg1;
- (void)setIsCJK:(bool)arg1;
- (void)setIsCancelled:(bool)arg1;
- (void)setIsInternalDevice:(bool)arg1;
- (void)setKeyboardLanguage:(id)arg1;
- (void)setLastIsSpaceFeature:(float)arg1;
- (void)setMeContactIdentifier:(id)arg1;
- (void)setPolicyDisabled:(bool)arg1;
- (void)setQueryTermCount:(unsigned long long)arg1;
- (void)setRenderEngagementFeaturesForItem:(id)arg1 counts:(id)arg2 isRender:(bool)arg3 bundleDict:(id)arg4;
- (void)setRenderEngagementFeaturesForItemAsShorts:(id)arg1 counts:(short)arg2 isRender:(bool)arg3 bundleDict:(id)arg4;
- (void)setSearchString:(id)arg1;
- (void)setUserQueryString:(id)arg1;
- (void)updateResultSetContext:(struct _resultset_computation_ctx { float *x1; bool x2; bool x3; bool x4; float x5; float x6; float x7; float x8[44]; }*)arg1 andUniqueScores:(id)arg2 withResultSetItems:(id)arg3;
- (void)updateResultSetFeaturesOnItems:(id)arg1 withContext:(struct _resultset_computation_ctx { float *x1; bool x2; bool x3; bool x4; float x5; float x6; float x7; float x8[44]; }*)arg2 uniqueScores:(id)arg3;
- (void)updateScoresForPreparedItems:(id)arg1;
- (void)updateScoresForPreparedItems:(id)arg1 isCJK:(bool)arg2 clientBundle:(id)arg3;
- (id)userQueryString;
- (bool)wasItemCreatedWithinAWeek:(id)arg1;

@end
