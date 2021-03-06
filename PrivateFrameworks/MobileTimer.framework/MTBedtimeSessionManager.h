/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTBedtimeSessionManager : NSObject <MTBedtimeSessionTrackerDelegate> {
    MTAlarmStorage * _alarmStorage;
    NSString * _archivedSessionDataFile;
    NSString * _archivedSessionDataPath;
    <MTBedtimeSessionTracker> * _bedtimeSessionTracker;
    <MTBedtimeSessionTrackerDelegate> * _bedtimeSessionTrackerDelegate;
    HKHealthStore * _healthStore;
    <NAScheduler> * _serializer;
}

@property (nonatomic, retain) MTAlarmStorage *alarmStorage;
@property (nonatomic, copy) NSString *archivedSessionDataFile;
@property (nonatomic, copy) NSString *archivedSessionDataPath;
@property (nonatomic, retain) <MTBedtimeSessionTracker> *bedtimeSessionTracker;
@property (nonatomic) <MTBedtimeSessionTrackerDelegate> *bedtimeSessionTrackerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (readonly) Class superclass;

+ (id)platformSpecificSourceBundleIdentifier;
+ (id)sleepSampleWithInterval:(id)arg1 sampleType:(long long)arg2 metadata:(id)arg3;

- (void).cxx_destruct;
- (bool)_hasUnprocessedSessions;
- (void)_removeSessionDataFile;
- (id)_unprocessedSessions;
- (id)_writeSessionData;
- (id)_writeSessions:(id)arg1;
- (id)alarmStorage;
- (void)archiveSession:(id)arg1;
- (id)archivedSessionDataFile;
- (id)archivedSessionDataPath;
- (id)bedtimeSessionTracker;
- (void)bedtimeSessionTracker:(id)arg1 sessionDidComplete:(id)arg2;
- (id)bedtimeSessionTrackerDelegate;
- (void)deviceFirstUnlocked;
- (id)healthStore;
- (id)initWithAlarmStorage:(id)arg1 sleepCoordinator:(id)arg2 bedtimeSessionTracker:(id)arg3;
- (void)saveSessionData;
- (id)serializer;
- (void)setAlarmStorage:(id)arg1;
- (void)setArchivedSessionDataFile:(id)arg1;
- (void)setArchivedSessionDataPath:(id)arg1;
- (void)setBedtimeSessionTracker:(id)arg1;
- (void)setBedtimeSessionTrackerDelegate:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setSerializer:(id)arg1;
- (void)waitForUnlock;
- (id)writeSession:(id)arg1;

@end
