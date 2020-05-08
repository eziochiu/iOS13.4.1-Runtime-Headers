/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUNearbyAccessoriesItemManager : HFItemManager {
    HMAccessory * _primaryAccessory;
    bool  _supportsQuickControls;
}

@property (nonatomic, retain) HMAccessory *primaryAccessory;
@property (nonatomic) bool supportsQuickControls;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id /* block */)_comparatorForSectionIdentifier:(id)arg1;
- (bool)_isAPreferredServiceType:(id)arg1;
- (bool)_isServiceItemAssociatedWithPrimaryAccessory:(id)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (unsigned long long)_numberOfSections;
- (id)initWithDelegate:(id)arg1 sourceProfileItem:(id)arg2 supportsQuickControls:(bool)arg3;
- (id)primaryAccessory;
- (void)setPrimaryAccessory:(id)arg1;
- (void)setSupportsQuickControls:(bool)arg1;
- (bool)shouldHideItem:(id)arg1;
- (bool)supportsQuickControls;

@end