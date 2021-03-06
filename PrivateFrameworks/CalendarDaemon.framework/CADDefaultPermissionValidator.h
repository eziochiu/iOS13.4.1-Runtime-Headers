/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADDefaultPermissionValidator : NSObject <CADPermissionValidator> {
    ClientConnection * _connection;
}

@property (readonly) bool canMakeSpotlightChanges;
@property (readonly) bool canModifyBirthdayCalendar;
@property (readonly) bool canModifyCalendarDatabase;
@property (readonly) bool canModifySuggestedEventCalendar;
@property (nonatomic, readonly) ClientConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasCalendarToolEntitlement;
@property (readonly) bool hasChangeIdTrackingOverrideEntitlement;
@property (readonly) bool hasContactsUIEntitlement;
@property (readonly) bool hasManagedConfigurationBundleIDOverrideEntitlement;
@property (readonly) bool hasMigrationEntitlement;
@property (readonly) bool hasNotificationCountEntitlement;
@property (readonly) bool hasSyncClientEntitlement;
@property (readonly) unsigned long long hash;
@property (readonly) bool internalAccessLevelGranted;
@property (readonly) bool shouldTrustClientEnforcedManagedConfigurationAccess;
@property (readonly) Class superclass;
@property (readonly) bool testingAccessLevelGranted;

- (void).cxx_destruct;
- (bool)_valueForBooleanEntitlement:(id)arg1 defaultValue:(bool)arg2;
- (bool)canMakeSpotlightChanges;
- (bool)canModifyBirthdayCalendar;
- (bool)canModifyCalendarDatabase;
- (bool)canModifySuggestedEventCalendar;
- (id)connection;
- (bool)hasCalendarToolEntitlement;
- (bool)hasChangeIdTrackingOverrideEntitlement;
- (bool)hasContactsUIEntitlement;
- (bool)hasManagedConfigurationBundleIDOverrideEntitlement;
- (bool)hasMigrationEntitlement;
- (bool)hasNotificationCountEntitlement;
- (bool)hasSyncClientEntitlement;
- (id)initWithClientConnection:(id)arg1;
- (bool)internalAccessLevelGranted;
- (bool)shouldTrustClientEnforcedManagedConfigurationAccess;
- (bool)testingAccessLevelGranted;

@end
