/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
 */

@interface HKMCOnboardingManager : NSObject {
    HKHealthStore * _healthStore;
    HKKeyValueDomain * _keyValueDomain;
    HKMenstrualCyclesStore * _menstrualCyclesStore;
}

@property (getter=isOnboardingCompleted, nonatomic, readonly) bool onboardingCompleted;
@property (nonatomic, readonly, copy) NSDate *onboardingFirstCompletedDate;
@property (nonatomic, readonly) HKQuantity *userEnteredCycleLength;
@property (nonatomic, readonly) HKQuantity *userEnteredPeriodLength;

- (void).cxx_destruct;
- (id)initWithHealthStore:(id)arg1;
- (bool)isOnboardingCompleted;
- (id)onboardingFirstCompletedDate;
- (void)resetOnboarding;
- (void)setOnboardingCompletedWithUserEnteredCycleLength:(id)arg1 userEnteredPeriodLength:(id)arg2 userEnteredLastPeriodStartDay:(id)arg3;
- (id)userEnteredCycleLength;
- (id)userEnteredPeriodLength;

@end