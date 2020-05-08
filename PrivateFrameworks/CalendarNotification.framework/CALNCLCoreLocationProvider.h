/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

@interface CALNCLCoreLocationProvider : NSObject <CALNCoreLocationProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (int)authorizationStatusForBundle:(id)arg1;
- (int)authorizationStatusForBundleIdentifier:(id)arg1;
- (void)markAsHavingReceivedLocationWithEffectiveBundleIdentifier:(id)arg1;

@end