/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUPersonalRequestsEditorItemManager : HFItemManager {
    HMHome * _homeForUser;
    HFItem * _neverRequireAuthenticationItem;
    bool  _onlyShowDeviceSwitches;
    HUPersonalRequestsDevicesItemModule * _prDevicesModule;
    HFItem * _requireAuthenticationForSecureRequestsItem;
    HFStaticItemProvider * _staticItemProvider;
}

@property (nonatomic, readonly) HMAssistantAccessControl *accessControl;
@property (nonatomic, readonly) HMHome *homeForUser;
@property (nonatomic, readonly) HFItem *neverRequireAuthenticationItem;
@property (nonatomic) bool onlyShowDeviceSwitches;
@property (nonatomic) bool personalRequestsAuthenticationRequired;
@property (nonatomic, retain) HUPersonalRequestsDevicesItemModule *prDevicesModule;
@property (nonatomic, readonly) HFItem *requireAuthenticationForSecureRequestsItem;
@property (nonatomic, retain) HFUserItem *sourceItem;
@property (nonatomic, readonly) HFStaticItemProvider *staticItemProvider;
@property (nonatomic, readonly) HMUser *user;

- (void).cxx_destruct;
- (bool)_arePersonalRequestsEnabled;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_commitUpdateToAccessControl:(id)arg1;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)accessControl;
- (id)homeForUser;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithDelegate:(id)arg1 userItem:(id)arg2 onlyShowDeviceSwitches:(bool)arg3;
- (id)neverRequireAuthenticationItem;
- (bool)onlyShowDeviceSwitches;
- (bool)personalRequestsAuthenticationRequired;
- (id)prDevicesModule;
- (id)requireAuthenticationForSecureRequestsItem;
- (void)setOnlyShowDeviceSwitches:(bool)arg1;
- (void)setPersonalRequestsAuthenticationRequired:(bool)arg1;
- (void)setPrDevicesModule:(id)arg1;
- (id)staticItemProvider;
- (id)user;

@end
