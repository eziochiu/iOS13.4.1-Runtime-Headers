/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBBulletinSpokenObserverGateway : NSObject <AFSiriUserNotificationRequestCapabilityObserving, BBObserverDelegate> {
    BBObserver * _bbObserver;
    DNDEventBehaviorResolutionService * _dndEventBehaviorResolutionService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_notificationFromBulletin:(id)arg1;
- (void)hasEligibleSetupChanged:(bool)arg1;
- (id)init;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(bool)arg4 withReply:(id /* block */)arg5;
- (void)requestCanBeHandledChanged:(bool)arg1;

@end
