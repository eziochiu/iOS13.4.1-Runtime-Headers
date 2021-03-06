/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFDetailsContext : NSObject <WFContextPresenting, WFDetailsProviderContext> {
    id /* block */  _actionHandler;
    bool  _autoJoinEnabled;
    bool  _autoLoginEnabled;
    bool  _current;
    bool  _diagnosable;
    WFDiagnosticsContext * _diagnosticsContext;
    WFIPMonitor * _ipMonitor;
    bool  _isInSaveDataMode;
    bool  _knownNetwork;
    WFKnownNetworkStore * _knownNetworkStore;
    WFNetworkScanRecord * _network;
    WFNetworkProfile * _profile;
    UIViewController<WFNetworkView> * _provider;
    NSArray * _recommendations;
    long long  _requestedFields;
    bool  _supportsAirportManagement;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic) bool autoJoinEnabled;
@property (nonatomic) bool autoLoginEnabled;
@property (getter=isCurrent, nonatomic) bool current;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool diagnosable;
@property (nonatomic, retain) WFDiagnosticsContext *diagnosticsContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFIPMonitor *ipMonitor;
@property (nonatomic) bool isInSaveDataMode;
@property (getter=isKnownNetwork, nonatomic) bool knownNetwork;
@property (nonatomic, retain) WFKnownNetworkStore *knownNetworkStore;
@property (nonatomic, readonly) bool needsDismissal;
@property (nonatomic, retain) WFNetworkScanRecord *network;
@property (nonatomic, retain) WFNetworkProfile *profile;
@property (nonatomic) UIViewController<WFNetworkView> *provider;
@property (nonatomic, retain) NSArray *recommendations;
@property (nonatomic) long long requestedFields;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsAirportManagement;

- (void).cxx_destruct;
- (id /* block */)actionHandler;
- (bool)autoJoinEnabled;
- (bool)autoLoginEnabled;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (bool)diagnosable;
- (id)diagnosticsContext;
- (void)forget;
- (id)initWithNetwork:(id)arg1 profile:(id)arg2 knownNetworkStore:(id)arg3 ipMonitor:(id)arg4;
- (id)ipMonitor;
- (bool)isCurrent;
- (bool)isInSaveDataMode;
- (bool)isKnownNetwork;
- (void)join;
- (id)knownNetworkStore;
- (void)manage;
- (bool)needsDismissal;
- (id)network;
- (void)openRecommendationLink;
- (id)profile;
- (id)provider;
- (id)recommendations;
- (void)renewLease;
- (long long)requestedFields;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setAutoJoinEnabled:(bool)arg1;
- (void)setAutoLoginEnabled:(bool)arg1;
- (void)setCurrent:(bool)arg1;
- (void)setDiagnosable:(bool)arg1;
- (void)setDiagnosticsContext:(id)arg1;
- (void)setIpMonitor:(id)arg1;
- (void)setIsInSaveDataMode:(bool)arg1;
- (void)setKnownNetwork:(bool)arg1;
- (void)setKnownNetworkStore:(id)arg1;
- (void)setNetwork:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setProvider:(id)arg1;
- (void)setRecommendations:(id)arg1;
- (void)setRequestedFields:(long long)arg1;
- (void)setSupportsAirportManagement:(bool)arg1;
- (bool)supportsAirportManagement;

@end
