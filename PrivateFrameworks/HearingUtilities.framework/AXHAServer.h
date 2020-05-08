/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

@interface AXHAServer : HCServer <AXHARemoteUpdateProtocol> {
    NSArray * _availableControllers;
    NSArray * _availableHearingAids;
    NSString * _connectedDeviceName;
    bool  _hearingAidConnectedOrReachable;
    bool  _hearingAidReachableForAudioTransfer;
    NSString * _hearingDeviceName;
    NSMutableDictionary * _responseBlocks;
    NSMutableDictionary * _updates;
}

@property (nonatomic, retain) NSArray *availableControllers;
@property (nonatomic, copy) NSArray *availableHearingAids;
@property (nonatomic, retain) NSString *connectedDeviceName;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AXHAServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hearingAidConnectedOrReachable;
@property (nonatomic, readonly) bool hearingAidReachable;
@property (nonatomic) bool hearingAidReachableForAudioTransfer;
@property (nonatomic, retain) NSString *hearingDeviceName;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *updates;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_registerListener:(id)arg1 forAvailableDeviceHandler:(id /* block */)arg2 beginSearching:(bool)arg3;
- (id)availableControllers;
- (void)availableDevicesDidUpdate:(id)arg1;
- (id)availableHearingAids;
- (void)cancelHearingAidConnectionRequest;
- (void)connectToControllerWithID:(id)arg1;
- (id)connectedDeviceName;
- (void)deviceDidUpdateProperty:(id)arg1;
- (void)environmentalDosimetryDidUpdate:(id)arg1;
- (void)handleMessageWithPayload:(id)arg1 forIdentifier:(unsigned long long)arg2;
- (bool)hearingAidConnectedOrReachable;
- (bool)hearingAidReachable;
- (bool)hearingAidReachableForAudioTransfer;
- (id)hearingDeviceName;
- (id)init;
- (void)liveListenDidUpdate:(id)arg1;
- (void)registerListener:(id)arg1 forAvailableDeviceHandler:(id /* block */)arg2;
- (void)registerListener:(id)arg1 forLiveDosimetryUpdates:(bool)arg2 withDoseHandler:(id /* block */)arg3;
- (void)registerListener:(id)arg1 forLiveListenLevelsHandler:(id /* block */)arg2;
- (void)registerListener:(id)arg1 forPropertyUpdateHandler:(id /* block */)arg2;
- (void)registerPassiveListener:(id)arg1 forAvailableDeviceHandler:(id /* block */)arg2;
- (void)registerResponseBlock:(id /* block */)arg1 forUUID:(id)arg2;
- (void)registerUpdateBlock:(id)arg1 forIdentier:(unsigned long long)arg2 withListener:(id)arg3;
- (void)requestHearingAidConnectionWithReason:(long long)arg1;
- (void)resetConnection;
- (void)setAvailableControllers:(id)arg1;
- (void)setAvailableHearingAids:(id)arg1;
- (void)setConnectedDeviceName:(id)arg1;
- (void)setHearingAidConnectedOrReachable:(bool)arg1;
- (void)setHearingAidReachableForAudioTransfer:(bool)arg1;
- (void)setHearingDeviceName:(id)arg1;
- (void)setUpdates:(id)arg1;
- (bool)shouldRestartOnInterruption;
- (void)startLiveListen;
- (void)startServerWithDelegate:(id)arg1;
- (void)stopLiveListen;
- (void)unregisterDoseHandler:(id)arg1;
- (void)unregisterUpdateListener:(id)arg1;
- (void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2;
- (id)updates;
- (void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 andDeviceID:(id)arg3;

@end