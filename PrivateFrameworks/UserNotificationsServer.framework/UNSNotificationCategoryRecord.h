/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSNotificationCategoryRecord : NSObject {
    NSArray * _actions;
    bool  _alwaysDisplayNotificationsIndicator;
    NSString * _backgroundStyle;
    bool  _hasCustomDismissAction;
    bool  _hasCustomSilenceAction;
    NSString * _identifier;
    NSArray * _intentIdentifiers;
    NSString * _listPriority;
    NSArray * _minimalActions;
    bool  _playMediaWhenRaised;
    bool  _presentFullScreenAlertOverList;
    bool  _preventAutomaticLock;
    bool  _preventAutomaticRemovalFromRecent;
    bool  _preventClearFromList;
    bool  _preventDismissWhenClosed;
    bool  _privacyOptionShowSubtitle;
    bool  _privacyOptionShowTitle;
    NSString * _privateBody;
    bool  _revealAdditionalContentWhenPresented;
    bool  _shouldAllowActionsInCarPlay;
    bool  _shouldAllowInCarPlay;
    bool  _shouldAllowPersistentBannersInCarPlay;
    bool  _shouldAllowSpoken;
    NSString * _summaryFormat;
    bool  _suppressDelayForForwardedNotifications;
    bool  _suppressDismissActionInCarPlay;
}

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic) bool alwaysDisplayNotificationsIndicator;
@property (nonatomic, copy) NSString *backgroundStyle;
@property (nonatomic) bool hasCustomDismissAction;
@property (nonatomic) bool hasCustomSilenceAction;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSArray *intentIdentifiers;
@property (nonatomic, copy) NSString *listPriority;
@property (nonatomic, copy) NSArray *minimalActions;
@property (nonatomic) bool playMediaWhenRaised;
@property (nonatomic) bool presentFullScreenAlertOverList;
@property (nonatomic) bool preventAutomaticLock;
@property (nonatomic) bool preventAutomaticRemovalFromRecent;
@property (nonatomic) bool preventClearFromList;
@property (nonatomic) bool preventDismissWhenClosed;
@property (nonatomic) bool privacyOptionShowSubtitle;
@property (nonatomic) bool privacyOptionShowTitle;
@property (nonatomic, copy) NSString *privateBody;
@property (nonatomic) bool revealAdditionalContentWhenPresented;
@property (nonatomic) bool shouldAllowActionsInCarPlay;
@property (nonatomic) bool shouldAllowInCarPlay;
@property (nonatomic) bool shouldAllowPersistentBannersInCarPlay;
@property (nonatomic) bool shouldAllowSpoken;
@property (nonatomic, copy) NSString *summaryFormat;
@property (nonatomic) bool suppressDelayForForwardedNotifications;
@property (nonatomic) bool suppressDismissActionInCarPlay;

- (void).cxx_destruct;
- (id)actions;
- (bool)alwaysDisplayNotificationsIndicator;
- (id)backgroundStyle;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCustomDismissAction;
- (bool)hasCustomSilenceAction;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)intentIdentifiers;
- (bool)isEqual:(id)arg1;
- (id)listPriority;
- (id)minimalActions;
- (bool)playMediaWhenRaised;
- (bool)presentFullScreenAlertOverList;
- (bool)preventAutomaticLock;
- (bool)preventAutomaticRemovalFromRecent;
- (bool)preventClearFromList;
- (bool)preventDismissWhenClosed;
- (bool)privacyOptionShowSubtitle;
- (bool)privacyOptionShowTitle;
- (id)privateBody;
- (bool)revealAdditionalContentWhenPresented;
- (void)setActions:(id)arg1;
- (void)setAlwaysDisplayNotificationsIndicator:(bool)arg1;
- (void)setBackgroundStyle:(id)arg1;
- (void)setHasCustomDismissAction:(bool)arg1;
- (void)setHasCustomSilenceAction:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIntentIdentifiers:(id)arg1;
- (void)setListPriority:(id)arg1;
- (void)setMinimalActions:(id)arg1;
- (void)setPlayMediaWhenRaised:(bool)arg1;
- (void)setPresentFullScreenAlertOverList:(bool)arg1;
- (void)setPreventAutomaticLock:(bool)arg1;
- (void)setPreventAutomaticRemovalFromRecent:(bool)arg1;
- (void)setPreventClearFromList:(bool)arg1;
- (void)setPreventDismissWhenClosed:(bool)arg1;
- (void)setPrivacyOptionShowSubtitle:(bool)arg1;
- (void)setPrivacyOptionShowTitle:(bool)arg1;
- (void)setPrivateBody:(id)arg1;
- (void)setRevealAdditionalContentWhenPresented:(bool)arg1;
- (void)setShouldAllowActionsInCarPlay:(bool)arg1;
- (void)setShouldAllowInCarPlay:(bool)arg1;
- (void)setShouldAllowPersistentBannersInCarPlay:(bool)arg1;
- (void)setShouldAllowSpoken:(bool)arg1;
- (void)setSummaryFormat:(id)arg1;
- (void)setSuppressDelayForForwardedNotifications:(bool)arg1;
- (void)setSuppressDismissActionInCarPlay:(bool)arg1;
- (bool)shouldAllowActionsInCarPlay;
- (bool)shouldAllowInCarPlay;
- (bool)shouldAllowPersistentBannersInCarPlay;
- (bool)shouldAllowSpoken;
- (id)summaryFormat;
- (bool)suppressDelayForForwardedNotifications;
- (bool)suppressDismissActionInCarPlay;

@end