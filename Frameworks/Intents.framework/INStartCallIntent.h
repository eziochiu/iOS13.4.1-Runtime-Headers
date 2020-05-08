/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INStartCallIntent : INIntent <INStartCallIntentExport>

@property (nonatomic, readonly) long long audioRoute;
@property (nonatomic, readonly) long long callCapability;
@property (nonatomic, readonly, copy) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long destinationType;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long preferredCallProvider;
@property (nonatomic, readonly) long long recordTypeForRedialing;
@property (readonly) Class superclass;
@property (setter=setTTYType:, nonatomic) long long ttyType;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_ignoredParameters;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (id)_emptyCopy;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_spotlightContentType;
- (id)_subtitleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;
- (bool)_supportsBackgroundExecution;
- (id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;
- (id)_typedBackingStore;
- (id)_validParameterCombinationsWithSchema:(id)arg1;
- (long long)audioRoute;
- (long long)callCapability;
- (id)contacts;
- (long long)destinationType;
- (id)domain;
- (id)initWithAudioRoute:(long long)arg1 destinationType:(long long)arg2 contacts:(id)arg3 callCapability:(long long)arg4;
- (id)initWithAudioRoute:(long long)arg1 destinationType:(long long)arg2 contacts:(id)arg3 recordTypeForRedialing:(long long)arg4 callCapability:(long long)arg5;
- (id)initWithAudioRoute:(long long)arg1 destinationType:(long long)arg2 preferredCallProvider:(long long)arg3 contacts:(id)arg4 recordTypeForRedialing:(long long)arg5 ttyType:(long long)arg6 callCapability:(long long)arg7;
- (id)initWithDestinationType:(long long)arg1 contacts:(id)arg2 callCapability:(long long)arg3;
- (id)parametersByName;
- (long long)preferredCallProvider;
- (long long)recordTypeForRedialing;
- (void)setAudioRoute:(long long)arg1;
- (void)setCallCapability:(long long)arg1;
- (void)setContacts:(id)arg1;
- (void)setDestinationType:(long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setPreferredCallProvider:(long long)arg1;
- (void)setRecordTypeForRedialing:(long long)arg1;
- (void)setTTYType:(long long)arg1;
- (void)setVerb:(id)arg1;
- (long long)ttyType;
- (id)verb;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (void)apr_getArgsInto:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI

- (id)apui_keyPeople;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

- (id)cd_groupName;
- (long long)cd_interactionMechanism;
- (id)cd_recipients;
- (bool)cd_saveToPeopleStore;
- (id)cd_sender;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (id)vcui_keyPeople;

@end