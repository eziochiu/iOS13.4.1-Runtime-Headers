/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDMigrationManager : NSObject <HDContentProtectionObserver, HDHealthDaemonReadyObserver> {
    bool  _needsProtectedDataMigration;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsProtectedDataMigration;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_performMigrationWithCompletion:(id /* block */)arg1;
- (void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (bool)needsProtectedDataMigration;
- (void)performMigrationWithCompletion:(id /* block */)arg1;
- (id)profile;
- (id)queue;
- (void)setNeedsProtectedDataMigration:(bool)arg1;
- (void)setProfile:(id)arg1;
- (void)setQueue:(id)arg1;

@end
