/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface CBAnalyticsManager : NSObject {
    NSObject<OS_os_log> * _logHandle;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _reportTimer;
    NSMutableDictionary * _timestamps;
    NSMutableDictionary * samples;
}

+ (bool)handleColorSample:(id)arg1;
+ (void)sendEventOnceADayLazy:(id)arg1 andDict:(id)arg2;
+ (id)sharedInstance;
+ (void)stopReporting:(unsigned long long)arg1;

- (void)dealloc;
- (bool)handleColorSampleInternal:(id)arg1;
- (id)init;
- (bool)isFirstEventToday:(id)arg1;
- (bool)isSameDay:(id)arg1 asDay:(id)arg2;
- (void)logAllColorSamples;
- (void)logColorSample:(id)arg1 withType:(id)arg2;
- (void)sendEventLazy:(id)arg1 andDict:(id)arg2;
- (void)sendEventOnceADayLazyInternal:(id)arg1 andDict:(id)arg2;
- (void)startReporting;
- (void)stopReportingInternal:(unsigned long long)arg1;
- (void)storeTimestamp:(id)arg1 forEventName:(id)arg2;
- (id)stringForType:(unsigned long long)arg1;

@end
