/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

@interface UABestAppSuggestionManager : NSObject {
    int  _bestAppNotificationCount;
    NSXPCConnection * _connection;
    <UABestAppSuggestionManagerDelegate> * _delegate;
    UABestAppSuggestion * _lastBestAppSuggestion;
    bool  _listeningForBestAppSuggestions;
}

@property (retain) NSXPCConnection *connection;
@property <UABestAppSuggestionManagerDelegate> *delegate;

- (void).cxx_destruct;
- (id)bestAppSuggestion;
- (void)bestAppSuggestionLaunchWasCancelled:(id)arg1;
- (void)bestAppSuggestionWasLaunched:(id)arg1 withInteractionType:(int)arg2;
- (id)bestAppSuggestions:(long long)arg1;
- (id)connection;
- (id)createAppSuggestionFromActivityInfo:(id)arg1 atTime:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (bool)determineBestAppWithDelay:(double)arg1 withBlock:(id /* block */)arg2;
- (bool)fetchAllNearbyAppSuggestions;
- (id)init;
- (bool)isActivityInfo:(id)arg1 atTime:(id)arg2 similarToAppSuggestion:(id)arg3;
- (void)launchAppWithBestAppSuggestion:(id)arg1;
- (void)launchAppWithBundleIdentifier:(id)arg1 taskContinuationIdentifier:(id)arg2;
- (void)launchAppWithBundleIdentifier:(id)arg1 userActivityUniqueIdentifier:(id)arg2 userActivityTypeIdentifier:(id)arg3;
- (void)launchAppWithBundleIdentifier:(id)arg1 userActivityUniqueIdentifier:(id)arg2 userActivityTypeIdentifier:(id)arg3 deviceName:(id)arg4 deviceIdentifier:(id)arg5 deviceType:(id)arg6;
- (void)notifyBestAppsChanged:(id)arg1 when:(id)arg2 confidence:(double)arg3;
- (void)queueFetchOfPayloadForBestAppSuggestion:(id)arg1;
- (void)removeBestApp:(id)arg1 options:(id)arg2;
- (void)removeBestAppByUUID:(id)arg1 options:(id)arg2;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startListeningForBestAppSuggestions;
- (void)stopListeningForBestAppSuggestions;

@end