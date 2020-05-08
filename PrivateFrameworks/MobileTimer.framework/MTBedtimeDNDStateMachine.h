/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTBedtimeDNDStateMachine : MTStateMachine <MTBedtimeDNDStateMachineEventHandler> {
    MTBedtimeDNDStateMachineInitialState * _initialState;
    MTBedtimeDNDStateMachineOffState * _offState;
    MTBedtimeDNDStateMachineWaitingState * _waitingState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MTBedtimeDNDStateMachineInitialState *initialState;
@property (nonatomic, readonly) MTBedtimeDNDStateMachineOffState *offState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MTBedtimeDNDStateMachineWaitingState *waitingState;

- (void).cxx_destruct;
- (void)bedtimeDNDEnabled:(bool)arg1 userRequested:(bool)arg2 date:(id)arg3;
- (id)currentDate;
- (bool)inUserDefinedSleepWindow;
- (id)initWithDelegate:(id)arg1 infoProvider:(id)arg2;
- (id)initialState;
- (bool)isBedtimeDNDEnabled:(bool*)arg1;
- (id)keepOffUntilDate;
- (id)offState;
- (id)onStateWithBedtimeDNDEndDate:(id)arg1;
- (id)sleepAlarm;
- (bool)stateMachine:(id)arg1 disengageBedtimeDNDUserRequested:(bool)arg2;
- (bool)stateMachine:(id)arg1 engageBedtimeDNDUntilDate:(id)arg2 userEngaged:(bool)arg3;
- (void)stateMachine:(id)arg1 keepBedtimeDNDOffUntilDate:(id)arg2;
- (void)stateMachine:(id)arg1 scheduleUpdateForSecondsFromNow:(double)arg2;
- (void)stateMachineClearKeepBedtimeDNDOff:(id)arg1;
- (id)stateMachineLog;
- (void)updateState:(bool)arg1;
- (id)userRequestedOffStateWithKeepOffUntilDate:(id)arg1;
- (void)userWokeUp;
- (id)waitingState;

@end