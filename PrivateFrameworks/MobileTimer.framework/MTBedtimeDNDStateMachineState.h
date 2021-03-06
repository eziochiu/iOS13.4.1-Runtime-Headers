/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTBedtimeDNDStateMachineState : MTStateMachineState <MTBedtimeDNDStateMachineEventHandler>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)bedtimeDNDEnabled:(bool)arg1 userRequested:(bool)arg2 date:(id)arg3;
- (id)determineNextState:(bool)arg1;
- (id)nextBedtimeDNDEndDate;
- (id)nextBedtimeDNDEndDateAfterDate:(id)arg1;
- (id)nextBedtimeDNDStartDate;
- (id)nextBedtimeDNDStartDateAfterDate:(id)arg1;
- (void)updateModeKeepOffUntilDateIfNecessary;
- (void)updateState:(bool)arg1;
- (void)userWokeUp;

@end
