/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

@interface TAScanRequest : NSObject {
    unsigned long long  _interVisitScanCount;
    NSDate * _lastScanRequestedDate;
    NSDate * _scheduledScanRequest;
    TAScanRequestSettings * _settings;
}

@property (nonatomic, readonly) NSDate *scheduledScanRequest;
@property (nonatomic, readonly) TAScanRequestSettings *settings;

- (void).cxx_destruct;
- (id)evaluateInterVisitAfterVisitExit:(id)arg1 displayEvents:(id)arg2 advertisements:(id)arg3 deviceRecord:(id)arg4 clock:(id)arg5;
- (id)evaluateVisitEntry:(id)arg1 clock:(id)arg2;
- (id)evictScheduledInterVisitScanWithClock:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (void)scheduleInterVisitScanForAdvertisement:(id)arg1 deviceRecord:(id)arg2 clock:(id)arg3;
- (id)scheduledScanRequest;
- (id)settings;
- (bool)shouldScanOnAdvertisement:(id)arg1 withDeviceRecord:(id)arg2;

@end
