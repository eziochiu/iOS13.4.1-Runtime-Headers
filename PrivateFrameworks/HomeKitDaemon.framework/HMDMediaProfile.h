/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMediaProfile : HMDAccessoryProfile <HMFLocking> {
    HMFUnfairLock * _lock;
    HMDMediaSession * _mediaSession;
}

@property (nonatomic, readonly) unsigned long long capability;
@property (retain) HMDMediaSession *mediaSession;

+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (id)namespace;
+ (id)sessionNamespace;
+ (bool)supportsSecureCoding;
+ (id)uniqueIdentifierFromAccessory:(id)arg1;

- (void).cxx_destruct;
- (void)_handleMediaResponses:(id)arg1 message:(id)arg2;
- (void)_handleMediaSessionSetAudioControl:(id)arg1;
- (void)_handleRefreshPlayback:(id)arg1;
- (void)_handleSetPlayback:(id)arg1;
- (void)_handleSetPower:(id)arg1;
- (void)_handleSetValue:(id)arg1 withRequestProperty:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_sessionPlaybackStateUpdated:(id)arg1 notifyXPCClients:(bool)arg2;
- (bool)_updateAudioControl:(id)arg1;
- (bool)_updatePlayback:(id)arg1;
- (bool)_updateRefreshPlayback:(id)arg1;
- (id)assistantObject;
- (unsigned long long)capability;
- (void)configureWithMessageDispatcher:(id)arg1 configurationTracker:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)handleSessionPlaybackStateUpdatedNotification:(id)arg1;
- (void)handleSessionUpdatedNotification:(id)arg1;
- (void)handleSessionVolumeUpdatedNotification:(id)arg1;
- (void)handleSetValue:(id)arg1 withRequestProperty:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)initWithAccessory:(id)arg1;
- (id)initWithAccessory:(id)arg1 uniqueIdentifier:(id)arg2 services:(id)arg3 workQueue:(id)arg4;
- (void)lock;
- (id)mediaSession;
- (id)messageReceiverChildren;
- (void)performBlock:(id /* block */)arg1;
- (void)registerForMessages;
- (void)registerForNotifications;
- (void)sessionAudioControlUpdated:(id)arg1;
- (void)setMediaSession:(id)arg1;
- (void)unlock;
- (void)updateWithResponses:(id)arg1 message:(id)arg2;
- (id)urlString;

@end