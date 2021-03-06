/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUStatusAndNotificationsItemManager : HFItemManager {
    HFStaticItem * _allowActivityNotificationsItem;
    HFStaticItem * _allowCameraSnapshotsItem;
    HFStaticItem * _allowCameraStatusChangesItem;
    HFStaticItem * _allowDoorbellNotificationsItem;
    HFStaticItem * _allowMotionNotificationsItem;
    HFStaticItem * _allowNotificationsItem;
    HUCameraSmartDetectionSettingsModule * _cameraSmartDetectionSettingsModule;
    HUTriggerConditionEditorItemModule * _conditionModule;
    HFStaticItem * _includeInStatusItem;
    HFItem<HFServiceLikeItem> * _serviceItem;
    bool  _serviceItemBelongsToCamera;
    bool  _showStatusSection;
    bool  _showsCameraSmartNotificationSection;
    bool  _showsCameraSnapshotSection;
    bool  _showsCameraStatusChangeSection;
    bool  _showsDoorbellSection;
    bool  _showsMotionNotificationSection;
    bool  _showsSmartActivitySection;
    bool  _showsTriggerConditionSection;
}

@property (nonatomic, retain) HFStaticItem *allowActivityNotificationsItem;
@property (nonatomic, retain) HFStaticItem *allowCameraSnapshotsItem;
@property (nonatomic, retain) HFStaticItem *allowCameraStatusChangesItem;
@property (nonatomic, retain) HFStaticItem *allowDoorbellNotificationsItem;
@property (nonatomic, retain) HFStaticItem *allowMotionNotificationsItem;
@property (nonatomic, retain) HFStaticItem *allowNotificationsItem;
@property (nonatomic, readonly) HUCameraSmartDetectionSettingsModule *cameraSmartDetectionSettingsModule;
@property (nonatomic, readonly) HUTriggerConditionEditorItemModule *conditionModule;
@property (nonatomic, retain) HFStaticItem *includeInStatusItem;
@property (nonatomic, readonly) HFUserNotificationServiceSettings *notificationSettings;
@property (nonatomic, readonly) <HFUserNotificationServiceSettingsProviding> *notificationSettingsProvider;
@property (nonatomic, readonly) HFItem<HFServiceLikeItem> *serviceItem;
@property (nonatomic) bool serviceItemBelongsToCamera;
@property (nonatomic) bool showStatusSection;
@property (nonatomic) bool showsCameraSmartNotificationSection;
@property (nonatomic) bool showsCameraSnapshotSection;
@property (nonatomic) bool showsCameraStatusChangeSection;
@property (nonatomic) bool showsDoorbellSection;
@property (nonatomic) bool showsMotionNotificationSection;
@property (nonatomic) bool showsSmartActivitySection;
@property (nonatomic) bool showsTriggerConditionSection;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_updateNotificationSettings:(id)arg1;
- (id)allowActivityNotificationsItem;
- (id)allowCameraSnapshotsItem;
- (id)allowCameraStatusChangesItem;
- (id)allowDoorbellNotificationsItem;
- (id)allowMotionNotificationsItem;
- (id)allowNotificationsItem;
- (id)cameraSmartDetectionSettingsModule;
- (id)conditionModule;
- (id)homeStatusVisibleObject;
- (id)includeInStatusItem;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithServiceItem:(id)arg1 delegate:(id)arg2 home:(id)arg3;
- (id)notificationSettings;
- (id)notificationSettingsProvider;
- (id)serviceItem;
- (bool)serviceItemBelongsToCamera;
- (void)setAllowActivityNotificationsItem:(id)arg1;
- (void)setAllowCameraSnapshotsItem:(id)arg1;
- (void)setAllowCameraStatusChangesItem:(id)arg1;
- (void)setAllowDoorbellNotificationsItem:(id)arg1;
- (void)setAllowMotionNotificationsItem:(id)arg1;
- (void)setAllowNotificationsItem:(id)arg1;
- (void)setIncludeInStatusItem:(id)arg1;
- (void)setServiceItemBelongsToCamera:(bool)arg1;
- (void)setShowStatusSection:(bool)arg1;
- (void)setShowsCameraSmartNotificationSection:(bool)arg1;
- (void)setShowsCameraSnapshotSection:(bool)arg1;
- (void)setShowsCameraStatusChangeSection:(bool)arg1;
- (void)setShowsDoorbellSection:(bool)arg1;
- (void)setShowsMotionNotificationSection:(bool)arg1;
- (void)setShowsSmartActivitySection:(bool)arg1;
- (void)setShowsTriggerConditionSection:(bool)arg1;
- (bool)showStatusSection;
- (bool)showsCameraSmartNotificationSection;
- (bool)showsCameraSnapshotSection;
- (bool)showsCameraStatusChangeSection;
- (bool)showsDoorbellSection;
- (bool)showsMotionNotificationSection;
- (bool)showsSmartActivitySection;
- (bool)showsTriggerConditionSection;
- (id)updateAllowCameraStatusChangeNotifications:(bool)arg1;
- (id)updateAllowDoorbellNotifications:(bool)arg1;
- (id)updateAllowMotionNotifications:(bool)arg1;
- (id)updateAllowNotifications:(bool)arg1;
- (id)updateAllowSmartActivityNotifications:(bool)arg1;
- (id)updateAllowSnapshotsInNotifications:(bool)arg1;
- (id)updateCameraSmartNotificationCondition:(id)arg1;
- (id)updateNotificationCondition:(id)arg1;

@end
