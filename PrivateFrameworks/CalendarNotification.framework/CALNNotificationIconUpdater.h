/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

@interface CALNNotificationIconUpdater : NSObject {
    <CALNIconCache> * _iconCache;
    <CALNIconIdentifierVersionProvider> * _identifierVersionProvider;
    <CALNNotificationManager> * _notificationServer;
    <CALNNotificationStorage> * _protectedStorage;
}

@property (nonatomic, readonly) <CALNIconCache> *iconCache;
@property (nonatomic, readonly) <CALNIconIdentifierVersionProvider> *identifierVersionProvider;
@property (nonatomic, readonly) <CALNNotificationManager> *notificationServer;
@property (nonatomic, readonly) <CALNNotificationStorage> *protectedStorage;

- (void).cxx_destruct;
- (void)_updateAllIconIdentifiersInStorage:(id)arg1;
- (id)iconCache;
- (id)identifierVersionProvider;
- (id)initWithIconIdentifierVersionProvider:(id)arg1 protectedNotificationStorage:(id)arg2 iconCache:(id)arg3 notificationServer:(id)arg4;
- (id)notificationServer;
- (id)protectedStorage;
- (void)updateIconsToNewVersionIfNeeded;

@end