/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCNetworkAgent : NSObject <NWNetworkAgent> {
    int  _assertionRefCount;
    bool  active;
    NSString * agentDescription;
    NSUUID * agentUUID;
    bool  kernelActivated;
    bool  specificUseOnly;
    bool  userActivated;
    bool  voluntary;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, copy) NSString *agentDescription;
@property (nonatomic, copy) NSUUID *agentUUID;
@property (getter=isKernelActivated, nonatomic) bool kernelActivated;
@property (getter=isNetworkProvider, nonatomic) bool networkProvider;
@property (getter=isNexusProvider, nonatomic) bool nexusProvider;
@property (nonatomic) bool requiresAssert;
@property (getter=isSpecificUseOnly, nonatomic) bool specificUseOnly;
@property (nonatomic) bool supportsBrowseRequests;
@property (nonatomic) bool supportsResolveRequests;
@property (nonatomic) bool updateClientsImmediately;
@property (getter=isUserActivated, nonatomic) bool userActivated;
@property (getter=isVoluntary, nonatomic) bool voluntary;

+ (id)agentDomain;
+ (id)agentFromData:(id)arg1;
+ (id)agentType;
+ (id)sharedInstance;

- (void)addAssertion;
- (id)agentDescription;
- (id)agentUUID;
- (id)copyAgentData;
- (void)dealloc;
- (id)init;
- (bool)isActive;
- (bool)isKernelActivated;
- (bool)isSpecificUseOnly;
- (bool)isUserActivated;
- (bool)isVoluntary;
- (void)removeAssertion;
- (void)setActive:(bool)arg1;
- (void)setAgentDescription:(id)arg1;
- (void)setAgentUUID:(id)arg1;
- (void)setKernelActivated:(bool)arg1;
- (void)setSpecificUseOnly:(bool)arg1;
- (void)setUserActivated:(bool)arg1;
- (void)setVoluntary:(bool)arg1;

@end